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
#include "curl.struct.impl.inc"
namespace das {
#include "curl.enum.class.inc"
#include "curl.struct.class.inc"
#include "curl.func.aot.inc"
Module_curl::Module_curl() : Module("curl") {
}
bool Module_curl::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	#include "curl.enum.add.inc"
	#include "curl.dummy.add.inc"
	#include "curl.struct.add.inc"
	#include "curl.struct.postadd.inc"
	#include "curl.alias.add.inc"
	#include "curl.func.reg.inc"
	initMain();
	return true;
}
}
REGISTER_MODULE_IN_NAMESPACE(Module_curl,das);

