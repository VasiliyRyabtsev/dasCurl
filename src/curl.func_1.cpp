// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "curl.h"
#include "need_curl.h"
namespace das {
#include "curl.func.aot.decl.inc"
void Module_curl::initFunctions_1() {
	addExtern< int (*)(const char *,const char *) , curl_strequal >(*this,lib,"curl_strequal",SideEffects::worstDefault,"curl_strequal")
		->args({"s1","s2"});
	addExtern< int (*)(const char *,const char *,size_t) , curl_strnequal >(*this,lib,"curl_strnequal",SideEffects::worstDefault,"curl_strnequal")
		->args({"s1","s2","n"});
	addExtern< curl_mime * (*)(void *) , curl_mime_init >(*this,lib,"curl_mime_init",SideEffects::worstDefault,"curl_mime_init")
		->args({"easy"});
	addExtern< void (*)(curl_mime *) , curl_mime_free >(*this,lib,"curl_mime_free",SideEffects::worstDefault,"curl_mime_free")
		->args({"mime"});
	addExtern< curl_mimepart * (*)(curl_mime *) , curl_mime_addpart >(*this,lib,"curl_mime_addpart",SideEffects::worstDefault,"curl_mime_addpart")
		->args({"mime"});
	addExtern< CURLcode (*)(curl_mimepart *,const char *) , curl_mime_name >(*this,lib,"curl_mime_name",SideEffects::worstDefault,"curl_mime_name")
		->args({"part","name"});
	addExtern< CURLcode (*)(curl_mimepart *,const char *) , curl_mime_filename >(*this,lib,"curl_mime_filename",SideEffects::worstDefault,"curl_mime_filename")
		->args({"part","filename"});
	addExtern< CURLcode (*)(curl_mimepart *,const char *) , curl_mime_type >(*this,lib,"curl_mime_type",SideEffects::worstDefault,"curl_mime_type")
		->args({"part","mimetype"});
	addExtern< CURLcode (*)(curl_mimepart *,const char *) , curl_mime_encoder >(*this,lib,"curl_mime_encoder",SideEffects::worstDefault,"curl_mime_encoder")
		->args({"part","encoding"});
	addExtern< CURLcode (*)(curl_mimepart *,const char *,size_t) , curl_mime_data >(*this,lib,"curl_mime_data",SideEffects::worstDefault,"curl_mime_data")
		->args({"part","data","datasize"});
	addExtern< CURLcode (*)(curl_mimepart *,const char *) , curl_mime_filedata >(*this,lib,"curl_mime_filedata",SideEffects::worstDefault,"curl_mime_filedata")
		->args({"part","filename"});
	addExtern< CURLcode (*)(curl_mimepart *,curl_mime *) , curl_mime_subparts >(*this,lib,"curl_mime_subparts",SideEffects::worstDefault,"curl_mime_subparts")
		->args({"part","subparts"});
	addExtern< CURLcode (*)(curl_mimepart *,curl_slist *,int) , curl_mime_headers >(*this,lib,"curl_mime_headers",SideEffects::worstDefault,"curl_mime_headers")
		->args({"part","headers","take_ownership"});
	addExtern< void (*)(curl_httppost *) , curl_formfree >(*this,lib,"curl_formfree",SideEffects::worstDefault,"curl_formfree")
		->args({"form"});
	addExtern< char * (*)(const char *) , curl_getenv >(*this,lib,"curl_getenv",SideEffects::worstDefault,"curl_getenv")
		->args({"variable"});
	addExtern< char * (*)() , curl_version >(*this,lib,"curl_version",SideEffects::worstDefault,"curl_version");
	addExtern< char * (*)(void *,const char *,int) , curl_easy_escape >(*this,lib,"curl_easy_escape",SideEffects::worstDefault,"curl_easy_escape")
		->args({"handle","string","length"});
	addExtern< char * (*)(const char *,int) , curl_escape >(*this,lib,"curl_escape",SideEffects::worstDefault,"curl_escape")
		->args({"string","length"});
	addExtern< char * (*)(void *,const char *,int,int *) , curl_easy_unescape >(*this,lib,"curl_easy_unescape",SideEffects::worstDefault,"curl_easy_unescape")
		->args({"handle","string","length","outlength"});
	addExtern< char * (*)(const char *,int) , curl_unescape >(*this,lib,"curl_unescape",SideEffects::worstDefault,"curl_unescape")
		->args({"string","length"});
}
}

