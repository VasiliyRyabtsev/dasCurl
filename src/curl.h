// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#pragma once
#include "types_setup.h"
namespace das {
class Module_curl : public Module {
public:
	Module_curl();
protected:
virtual bool initDependencies() override;
	void initMain ();
	virtual ModuleAotType aotRequire ( TextWriter & tw ) const override;
	#include "curl.func.decl.inc"
public:
	ModuleLibrary lib;
	bool initialized = false;
};
}

