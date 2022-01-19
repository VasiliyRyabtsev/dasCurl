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
void Module_curl::initFunctions_2() {
	addExtern< void (*)(void *) , curl_free >(*this,lib,"curl_free",SideEffects::worstDefault,"curl_free")
		->args({"p"});
	//addExtern< CURLcode (*)(long) , curl_global_init >(*this,lib,"curl_global_init",SideEffects::worstDefault,"curl_global_init")
	//	->args({"flags"});
	addExtern< void (*)() , curl_global_cleanup >(*this,lib,"curl_global_cleanup",SideEffects::worstDefault,"curl_global_cleanup");
	addExtern< CURLsslset (*)(curl_sslbackend,const char *,const curl_ssl_backend ***) , curl_global_sslset >(*this,lib,"curl_global_sslset",SideEffects::worstDefault,"curl_global_sslset")
		->args({"id","name","avail"});
	addExtern< curl_slist * (*)(curl_slist *,const char *) , curl_slist_append >(*this,lib,"curl_slist_append",SideEffects::worstDefault,"curl_slist_append")
		->args({"",""});
	addExtern< void (*)(curl_slist *) , curl_slist_free_all >(*this,lib,"curl_slist_free_all",SideEffects::worstDefault,"curl_slist_free_all")
		->args({""});
	addExtern< time_t (*)(const char *,const long long *) , curl_getdate >(*this,lib,"curl_getdate",SideEffects::worstDefault,"curl_getdate")
		->args({"p","unused"});
	addExtern< void * (*)() , curl_share_init >(*this,lib,"curl_share_init",SideEffects::worstDefault,"curl_share_init");
	addExtern< CURLSHcode (*)(void *) , curl_share_cleanup >(*this,lib,"curl_share_cleanup",SideEffects::worstDefault,"curl_share_cleanup")
		->args({""});
	addExtern< curl_version_info_data * (*)(CURLversion) , curl_version_info >(*this,lib,"curl_version_info",SideEffects::worstDefault,"curl_version_info")
		->args({""});
	addExtern< const char * (*)(CURLcode) , curl_easy_strerror >(*this,lib,"curl_easy_strerror",SideEffects::worstDefault,"curl_easy_strerror")
		->args({""});
	addExtern< const char * (*)(CURLSHcode) , curl_share_strerror >(*this,lib,"curl_share_strerror",SideEffects::worstDefault,"curl_share_strerror")
		->args({""});
	addExtern< CURLcode (*)(void *,int) , curl_easy_pause >(*this,lib,"curl_easy_pause",SideEffects::worstDefault,"curl_easy_pause")
		->args({"handle","bitmask"});
}
}

