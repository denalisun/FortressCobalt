#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_M1_Floor

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_M1_Floor.PBWA_M1_Floor_C
// 0x0008 (0x0E10 - 0x0E08)
class APBWA_M1_Floor_C final : public ABuildingFloor
{
public:
	uint8                                         Pad_403F[0x8];                                     // 0x0E08(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_M1_Floor_C">();
	}
	static class APBWA_M1_Floor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_M1_Floor_C>();
	}
};
static_assert(alignof(APBWA_M1_Floor_C) == 0x000008, "Wrong alignment on APBWA_M1_Floor_C");
static_assert(sizeof(APBWA_M1_Floor_C) == 0x000E10, "Wrong size on APBWA_M1_Floor_C");

}

