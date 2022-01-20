require cbind/cbind_boost
require daslib/safe_addr
require daslib/strings
require daslib/defer
require daslib/fio


class CurlGen : CppGenBind
    override func_to_stdout = false

    def CurlGen
        bind_root = "{get_das_root()}/modules/dasCurl/src"
        bind_module = "curl"
        bind_das_module = "curl"
        let pfn = "curl/curl.h"
        let pfp = "{get_das_root()}/modules/dasCurl/curl/include/"

        let args <- [{string
            "-xc++-header";
            "-std=c++1z";
            "-I{get_full_file_name(pfp)}"
        }]

        func_per_chunk = 20
        init_args(pfn,pfp,args)
        setDefaultFiles()
        //init_skip_func()
        openAllFiles()


    def override namespace_name ( name:string; dash:string="::" ) : string
        if name=="curl_slist"
            return name
        return AnyGenBind`namespace_name(self, name, dash)


    def override skip_struct ( name : string )
        if name=="curl_sockaddr" || name=="curl_fileinfo" || name=="CURLMsg"
            return true
        return false

    def override skip_anyFunction ( var c : CXCursor; isMethod:bool ) : bool
        let funcname = string(clang_getCursorSpelling(c))
        if funcname == "curl_multi_fdset"
            return true
        return AnyGenBind`skip_anyFunction(self, c, isMethod)


    def override skip_file ( fname:string ) : bool
        if fname |> starts_with(PARSE_FILE_PREFIX)
            return false
        return ! fname |> ends_with(PARSE_FILE_NAME)


    def override generateModuleHPrefix    
        module_h_file |> fwrite("#include \"types_setup.h\"\n")
        CppGenBind`generateModuleHPrefix(self)



[export]
def main
    var cgb = new CurlGen()
    defer <|
        unsafe
            delete cgb
    cgb->generate()
    cgb->genCMakeDecl("DAS_CURL_BIND")
