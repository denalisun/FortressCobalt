#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_ContextTrap_Athena

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_ContextTrap_Athena.Trap_ContextTrap_Athena_C
// 0x0008 (0x0F20 - 0x0F18)
class ATrap_ContextTrap_Athena_C final : public ABuildingTrap
{
public:
	uint8                                         Pad_32A4[0x8];                                     // 0x0F18(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_ContextTrap_Athena_C">();
	}
	static class ATrap_ContextTrap_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_ContextTrap_Athena_C>();
	}
};
static_assert(alignof(ATrap_ContextTrap_Athena_C) == 0x000008, "Wrong alignment on ATrap_ContextTrap_Athena_C");
static_assert(sizeof(ATrap_ContextTrap_Athena_C) == 0x000F20, "Wrong size on ATrap_ContextTrap_Athena_C");

}

