#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Melee_Impact_Generic

#include "Basic.hpp"

#include "B_Melee_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Melee_Impact_Generic.B_Melee_Impact_Generic_C
// 0x0000 (0x0B78 - 0x0B78)
class AB_Melee_Impact_Generic_C : public AB_Melee_Generic_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Melee_Impact_Generic_C">();
	}
	static class AB_Melee_Impact_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Melee_Impact_Generic_C>();
	}
};
static_assert(alignof(AB_Melee_Impact_Generic_C) == 0x000008, "Wrong alignment on AB_Melee_Impact_Generic_C");
static_assert(sizeof(AB_Melee_Impact_Generic_C) == 0x000B78, "Wrong size on AB_Melee_Impact_Generic_C");

}

