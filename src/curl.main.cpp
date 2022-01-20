#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "curl.h"

#include "need_curl.h"
#include "curl_checks.h"


CURLcode curl_easy_setopt_str(CURL *curl, CURLoption option, const char *val) {
	if (!curlcheck_string_option(option))
		return CURLE_BAD_FUNCTION_ARGUMENT;

	return curl_easy_setopt(curl, option, val);
}

CURLcode curl_easy_setopt_uint32(CURL *curl, CURLoption option, uint32_t val) {
	if (!curlcheck_long_option(option))
		return CURLE_BAD_FUNCTION_ARGUMENT;

	return curl_easy_setopt(curl, option, val);
}


namespace das {

void Module_curl::initMain() {
	addExtern< CURLcode (*)(CURL *, CURLoption, const char *), curl_easy_setopt_str >(*this,lib,"curl_easy_setopt",SideEffects::worstDefault,"curl_easy_setopt_str")
		->args({"handle","option","value"});
	addExtern< CURLcode (*)(CURL *, CURLoption, uint32_t), curl_easy_setopt_uint32>(*this,lib,"curl_easy_setopt",SideEffects::worstDefault,"curl_easy_setopt_uint32")
		->args({"handle","option","value"});
}

ModuleAotType Module_curl::aotRequire(TextWriter& /*tw*/) const {
	return ModuleAotType::no_aot;
}

//void Module_curl::initAotAlias() {
//}

}