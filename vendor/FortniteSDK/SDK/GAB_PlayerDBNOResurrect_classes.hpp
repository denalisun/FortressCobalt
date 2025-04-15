#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_PlayerDBNOResurrect

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C
// 0x0040 (0x0AF0 - 0x0AB0)
class UGAB_PlayerDBNOResurrect_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           EC_AppliedEffect;                                  // 0x0AB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KnockbackMagnitude;                                // 0x0AC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34A7[0x4];                                     // 0x0ACC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         HitActors;                                         // 0x0AD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                 KnockbackStunGE;                                   // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BP_VictoryDrone;                                   // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_PlayerDBNOResurrect(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void Cancelled_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_PlayerDBNOResurrect_C">();
	}
	static class UGAB_PlayerDBNOResurrect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_PlayerDBNOResurrect_C>();
	}
};
static_assert(alignof(UGAB_PlayerDBNOResurrect_C) == 0x000008, "Wrong alignment on UGAB_PlayerDBNOResurrect_C");
static_assert(sizeof(UGAB_PlayerDBNOResurrect_C) == 0x000AF0, "Wrong size on UGAB_PlayerDBNOResurrect_C");
static_assert(offsetof(UGAB_PlayerDBNOResurrect_C, UberGraphFrame) == 0x000AB0, "Member 'UGAB_PlayerDBNOResurrect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNOResurrect_C, EC_AppliedEffect) == 0x000AB8, "Member 'UGAB_PlayerDBNOResurrect_C::EC_AppliedEffect' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNOResurrect_C, PlayerPawn) == 0x000AC0, "Member 'UGAB_PlayerDBNOResurrect_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNOResurrect_C, KnockbackMagnitude) == 0x000AC8, "Member 'UGAB_PlayerDBNOResurrect_C::KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNOResurrect_C, HitActors) == 0x000AD0, "Member 'UGAB_PlayerDBNOResurrect_C::HitActors' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNOResurrect_C, KnockbackStunGE) == 0x000AE0, "Member 'UGAB_PlayerDBNOResurrect_C::KnockbackStunGE' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNOResurrect_C, BP_VictoryDrone) == 0x000AE8, "Member 'UGAB_PlayerDBNOResurrect_C::BP_VictoryDrone' has a wrong offset!");

}

