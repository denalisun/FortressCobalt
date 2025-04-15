#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_DanceGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_DanceGrenade.GAT_DanceGrenade_C
// 0x0010 (0x0AD0 - 0x0AC0)
class UGAT_DanceGrenade_C final : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_DanceGrenade_C;                 // 0x0AC0(0x0008)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAT_DanceGrenade(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_DanceGrenade_C">();
	}
	static class UGAT_DanceGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_DanceGrenade_C>();
	}
};
static_assert(alignof(UGAT_DanceGrenade_C) == 0x000008, "Wrong alignment on UGAT_DanceGrenade_C");
static_assert(sizeof(UGAT_DanceGrenade_C) == 0x000AD0, "Wrong size on UGAT_DanceGrenade_C");
static_assert(offsetof(UGAT_DanceGrenade_C, UberGraphFrame_GAT_DanceGrenade_C) == 0x000AC0, "Member 'UGAT_DanceGrenade_C::UberGraphFrame_GAT_DanceGrenade_C' has a wrong offset!");
static_assert(offsetof(UGAT_DanceGrenade_C, PlayerPawn) == 0x000AC8, "Member 'UGAT_DanceGrenade_C::PlayerPawn' has a wrong offset!");

}

