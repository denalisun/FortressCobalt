#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Pool_Outer

#include "Basic.hpp"

#include "_WaterMeshBlueprintMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass S_Pool_Outer.S_Pool_Outer_C
// 0x0000 (0x0430 - 0x0430)
class AS_Pool_Outer_C final : public A_WaterMeshBlueprintMaster_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"S_Pool_Outer_C">();
	}
	static class AS_Pool_Outer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AS_Pool_Outer_C>();
	}
};
static_assert(alignof(AS_Pool_Outer_C) == 0x000008, "Wrong alignment on AS_Pool_Outer_C");
static_assert(sizeof(AS_Pool_Outer_C) == 0x000430, "Wrong size on AS_Pool_Outer_C");

}

