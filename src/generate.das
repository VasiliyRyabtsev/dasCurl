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


[export]
def main
    var cgb = new CurlGen()
    defer <|
        unsafe
            delete cgb
    cgb->generate()
    cgb->genCMakeDecl("DAS_CURL_BIND")
