#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_W1_QuarterWallS

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C
// 0x0008 (0x0EF8 - 0x0EF0)
class APBWA_W1_QuarterWallS_C final : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0EF0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_PBWA_W1_QuarterWallS(int32 EntryPoint);
	void GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_W1_QuarterWallS_C">();
	}
	static class APBWA_W1_QuarterWallS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_W1_QuarterWallS_C>();
	}
};
static_assert(alignof(APBWA_W1_QuarterWallS_C) == 0x000008, "Wrong alignment on APBWA_W1_QuarterWallS_C");
static_assert(sizeof(APBWA_W1_QuarterWallS_C) == 0x000EF8, "Wrong size on APBWA_W1_QuarterWallS_C");
static_assert(offsetof(APBWA_W1_QuarterWallS_C, UberGraphFrame) == 0x000EF0, "Member 'APBWA_W1_QuarterWallS_C::UberGraphFrame' has a wrong offset!");

}

