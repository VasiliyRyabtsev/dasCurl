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
void Module_curl::initFunctions_3() {
	addExtern< CURLcode (*)(void *) , curl_easy_upkeep >(*this,lib,"curl_easy_upkeep",SideEffects::worstDefault,"curl_easy_upkeep")
		->args({"curl"});
	addExtern< void * (*)() , curl_multi_init >(*this,lib,"curl_multi_init",SideEffects::worstDefault,"curl_multi_init");
	addExtern< CURLMcode (*)(void *,void *) , curl_multi_add_handle >(*this,lib,"curl_multi_add_handle",SideEffects::worstDefault,"curl_multi_add_handle")
		->args({"multi_handle","curl_handle"});
	addExtern< CURLMcode (*)(void *,void *) , curl_multi_remove_handle >(*this,lib,"curl_multi_remove_handle",SideEffects::worstDefault,"curl_multi_remove_handle")
		->args({"multi_handle","curl_handle"});
	addExtern< CURLMcode (*)(void *,curl_waitfd [],unsigned int,int,int *) , curl_multi_wait >(*this,lib,"curl_multi_wait",SideEffects::worstDefault,"curl_multi_wait")
		->args({"multi_handle","extra_fds","extra_nfds","timeout_ms","ret"});
	addExtern< CURLMcode (*)(void *,curl_waitfd [],unsigned int,int,int *) , curl_multi_poll >(*this,lib,"curl_multi_poll",SideEffects::worstDefault,"curl_multi_poll")
		->args({"multi_handle","extra_fds","extra_nfds","timeout_ms","ret"});
	addExtern< CURLMcode (*)(void *) , curl_multi_wakeup >(*this,lib,"curl_multi_wakeup",SideEffects::worstDefault,"curl_multi_wakeup")
		->args({"multi_handle"});
	addExtern< CURLMcode (*)(void *,int *) , curl_multi_perform >(*this,lib,"curl_multi_perform",SideEffects::worstDefault,"curl_multi_perform")
		->args({"multi_handle","running_handles"});
	addExtern< CURLMcode (*)(void *) , curl_multi_cleanup >(*this,lib,"curl_multi_cleanup",SideEffects::worstDefault,"curl_multi_cleanup")
		->args({"multi_handle"});
	addExtern< const char * (*)(CURLMcode) , curl_multi_strerror >(*this,lib,"curl_multi_strerror",SideEffects::worstDefault,"curl_multi_strerror")
		->args({""});
	addExtern< CURLMcode (*)(void *,curl_socket_t,int *) , curl_multi_socket >(*this,lib,"curl_multi_socket",SideEffects::worstDefault,"curl_multi_socket")
		->args({"multi_handle","s","running_handles"});
	addExtern< CURLMcode (*)(void *,curl_socket_t,int,int *) , curl_multi_socket_action >(*this,lib,"curl_multi_socket_action",SideEffects::worstDefault,"curl_multi_socket_action")
		->args({"multi_handle","s","ev_bitmask","running_handles"});
	addExtern< CURLMcode (*)(void *,int *) , curl_multi_socket_all >(*this,lib,"curl_multi_socket_all",SideEffects::worstDefault,"curl_multi_socket_all")
		->args({"multi_handle","running_handles"});
	addExtern< CURLMcode (*)(void *,long *) , curl_multi_timeout >(*this,lib,"curl_multi_timeout",SideEffects::worstDefault,"curl_multi_timeout")
		->args({"multi_handle","milliseconds"});
	addExtern< CURLMcode (*)(void *,curl_socket_t,void *) , curl_multi_assign >(*this,lib,"curl_multi_assign",SideEffects::worstDefault,"curl_multi_assign")
		->args({"multi_handle","sockfd","sockp"});
	addExtern< char * (*)(curl_pushheaders *,size_t) , curl_pushheader_bynum >(*this,lib,"curl_pushheader_bynum",SideEffects::worstDefault,"curl_pushheader_bynum")
		->args({"h","num"});
	addExtern< char * (*)(curl_pushheaders *,const char *) , curl_pushheader_byname >(*this,lib,"curl_pushheader_byname",SideEffects::worstDefault,"curl_pushheader_byname")
		->args({"h","name"});
	addExtern< Curl_URL * (*)() , curl_url >(*this,lib,"curl_url",SideEffects::worstDefault,"curl_url");
	addExtern< void (*)(Curl_URL *) , curl_url_cleanup >(*this,lib,"curl_url_cleanup",SideEffects::worstDefault,"curl_url_cleanup")
		->args({"handle"});
	addExtern< Curl_URL * (*)(Curl_URL *) , curl_url_dup >(*this,lib,"curl_url_dup",SideEffects::worstDefault,"curl_url_dup")
		->args({"in"});
}
}

