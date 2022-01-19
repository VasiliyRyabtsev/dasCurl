#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "curl.h"


namespace das {

void Module_curl::initMain() {
}

ModuleAotType Module_curl::aotRequire(TextWriter& /*tw*/) const {
	return ModuleAotType::no_aot;
}

//void Module_curl::initAotAlias() {
//}

}