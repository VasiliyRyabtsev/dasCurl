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
void Module_curl::initFunctions_4() {
	addExtern< CURLUcode (*)(Curl_URL *,CURLUPart,char **,unsigned int) , curl_url_get >(*this,lib,"curl_url_get",SideEffects::worstDefault,"curl_url_get")
		->args({"handle","what","part","flags"});
	addExtern< CURLUcode (*)(Curl_URL *,CURLUPart,const char *,unsigned int) , curl_url_set >(*this,lib,"curl_url_set",SideEffects::worstDefault,"curl_url_set")
		->args({"handle","what","part","flags"});
	addExtern< const char * (*)(CURLUcode) , curl_url_strerror >(*this,lib,"curl_url_strerror",SideEffects::worstDefault,"curl_url_strerror")
		->args({""});
	addExtern< const curl_easyoption * (*)(const char *) , curl_easy_option_by_name >(*this,lib,"curl_easy_option_by_name",SideEffects::worstDefault,"curl_easy_option_by_name")
		->args({"name"});
	addExtern< const curl_easyoption * (*)(CURLoption) , curl_easy_option_by_id >(*this,lib,"curl_easy_option_by_id",SideEffects::worstDefault,"curl_easy_option_by_id")
		->args({"id"});
	addExtern< const curl_easyoption * (*)(const curl_easyoption *) , curl_easy_option_next >(*this,lib,"curl_easy_option_next",SideEffects::worstDefault,"curl_easy_option_next")
		->args({"prev"});
}
}

