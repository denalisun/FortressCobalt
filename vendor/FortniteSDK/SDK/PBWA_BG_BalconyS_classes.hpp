#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_BG_BalconyS

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_BG_BalconyS.PBWA_BG_BalconyS_C
// 0x0008 (0x0E10 - 0x0E08)
class APBWA_BG_BalconyS_C final : public ABuildingFloor
{
public:
	uint8                                         Pad_2592[0x8];                                     // 0x0E08(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_BG_BalconyS_C">();
	}
	static class APBWA_BG_BalconyS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_BG_BalconyS_C>();
	}
};
static_assert(alignof(APBWA_BG_BalconyS_C) == 0x000008, "Wrong alignment on APBWA_BG_BalconyS_C");
static_assert(sizeof(APBWA_BG_BalconyS_C) == 0x000E10, "Wrong size on APBWA_BG_BalconyS_C");

}

