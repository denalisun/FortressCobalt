#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericActiveAbilityNoCommit

#include "Basic.hpp"

#include "GAT_ActiveAbility_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C
// 0x00C0 (0x0B80 - 0x0AC0)
class UGAT_GenericActiveAbilityNoCommit_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_GenericActiveAbilityNoCommit_C; // 0x0AC0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayEventData                     EventData;                                         // 0x0AC8(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        FortPlayerPawn;                                    // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAutoCommitted;                                   // 0x0B78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStaminaLockedOut;                                // 0x0B79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_GenericActiveAbilityNoCommit_C">();
	}
	static class UGAT_GenericActiveAbilityNoCommit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_GenericActiveAbilityNoCommit_C>();
	}
};
static_assert(alignof(UGAT_GenericActiveAbilityNoCommit_C) == 0x000008, "Wrong alignment on UGAT_GenericActiveAbilityNoCommit_C");
static_assert(sizeof(UGAT_GenericActiveAbilityNoCommit_C) == 0x000B80, "Wrong size on UGAT_GenericActiveAbilityNoCommit_C");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, UberGraphFrame_GAT_GenericActiveAbilityNoCommit_C) == 0x000AC0, "Member 'UGAT_GenericActiveAbilityNoCommit_C::UberGraphFrame_GAT_GenericActiveAbilityNoCommit_C' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, EventData) == 0x000AC8, "Member 'UGAT_GenericActiveAbilityNoCommit_C::EventData' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, FortPlayerPawn) == 0x000B70, "Member 'UGAT_GenericActiveAbilityNoCommit_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, IsAutoCommitted) == 0x000B78, "Member 'UGAT_GenericActiveAbilityNoCommit_C::IsAutoCommitted' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, IsStaminaLockedOut) == 0x000B79, "Member 'UGAT_GenericActiveAbilityNoCommit_C::IsStaminaLockedOut' has a wrong offset!");

}

