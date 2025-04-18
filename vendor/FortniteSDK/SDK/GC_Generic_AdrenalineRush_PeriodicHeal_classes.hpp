#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Generic_AdrenalineRush_PeriodicHeal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C
// 0x0040 (0x0450 - 0x0410)
class AGC_Generic_AdrenalineRush_PeriodicHeal_C final : public AGameplayCueNotify_Actor
{
public:
	uint8                                         Pad_2D79[0x8];                                     // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               HealVFX;                                           // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Health_Sweep_SafetyOpacity_3240057E4D088EF0898241BE4DC90C25; // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Health_Sweep_Sweep_3240057E4D088EF0898241BE4DC90C25; // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Health_Sweep__Direction_3240057E4D088EF0898241BE4DC90C25; // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D7A[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Health_Sweep;                                      // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Generic_C*                  GC_Target_Pawn;                                    // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void Health_Sweep__UpdateFunc();
	void Health_Sweep__FinishedFunc();
	void UserConstructionScript();
	void HealthCheck(bool* Check_Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Generic_AdrenalineRush_PeriodicHeal_C">();
	}
	static class AGC_Generic_AdrenalineRush_PeriodicHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Generic_AdrenalineRush_PeriodicHeal_C>();
	}
};
static_assert(alignof(AGC_Generic_AdrenalineRush_PeriodicHeal_C) == 0x000010, "Wrong alignment on AGC_Generic_AdrenalineRush_PeriodicHeal_C");
static_assert(sizeof(AGC_Generic_AdrenalineRush_PeriodicHeal_C) == 0x000450, "Wrong size on AGC_Generic_AdrenalineRush_PeriodicHeal_C");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, UberGraphFrame) == 0x000410, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, HealVFX) == 0x000418, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::HealVFX' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, DefaultSceneRoot) == 0x000420, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, Health_Sweep_SafetyOpacity_3240057E4D088EF0898241BE4DC90C25) == 0x000428, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep_SafetyOpacity_3240057E4D088EF0898241BE4DC90C25' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, Health_Sweep_Sweep_3240057E4D088EF0898241BE4DC90C25) == 0x00042C, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep_Sweep_3240057E4D088EF0898241BE4DC90C25' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, Health_Sweep__Direction_3240057E4D088EF0898241BE4DC90C25) == 0x000430, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep__Direction_3240057E4D088EF0898241BE4DC90C25' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, Health_Sweep) == 0x000438, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_PeriodicHeal_C, GC_Target_Pawn) == 0x000440, "Member 'AGC_Generic_AdrenalineRush_PeriodicHeal_C::GC_Target_Pawn' has a wrong offset!");

}

