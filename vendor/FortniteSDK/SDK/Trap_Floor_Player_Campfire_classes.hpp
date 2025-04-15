#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Player_Campfire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C
// 0x00A8 (0x0FC0 - 0x0F18)
class ATrap_Floor_Player_Campfire_C final : public ABuildingTrapFloor
{
public:
	uint8                                         Pad_22DE[0x8];                                     // 0x0F18(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F20(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Athena_Campfire_Doused;                          // 0x0F28(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FireDamageTraceOrigin;                             // 0x0F30(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0F38(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Athena_Campfire;                                 // 0x0F40(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PlacementSoundLocation;                            // 0x0F48(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ProximityTraceOrigin;                              // 0x0F50(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Placed_Sound;                                 // 0x0F58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0F60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0F68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Reload_Sound;                                 // 0x0F70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0F78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0F80(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_22DF[0x3];                                     // 0x0F81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumTicks;                                          // 0x0F84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTicks;                                          // 0x0F88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AOE_Radius;                                        // 0x0F8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      OverlapObjectTypes;                                // 0x0F90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                AOE_BoxExtents;                                    // 0x0FA0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AOE_FireDamageBoxExtents;                          // 0x0FAC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CampfireDousedSound;                               // 0x0FB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Trap_Floor_Player_Campfire(int32 EntryPoint);
	void TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn);
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnFinishedBuilding();
	void OnPlaced();
	void OnReloadEnd();
	void UserConstructionScript();
	void OnRep_IsActive();
	void HealTicks();
	void InitCampfireEffects();

	struct FTransform GetFireLocationAndRotation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Floor_Player_Campfire_C">();
	}
	static class ATrap_Floor_Player_Campfire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Floor_Player_Campfire_C>();
	}
};
static_assert(alignof(ATrap_Floor_Player_Campfire_C) == 0x000008, "Wrong alignment on ATrap_Floor_Player_Campfire_C");
static_assert(sizeof(ATrap_Floor_Player_Campfire_C) == 0x000FC0, "Wrong size on ATrap_Floor_Player_Campfire_C");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, UberGraphFrame) == 0x000F20, "Member 'ATrap_Floor_Player_Campfire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, P_Athena_Campfire_Doused) == 0x000F28, "Member 'ATrap_Floor_Player_Campfire_C::P_Athena_Campfire_Doused' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, FireDamageTraceOrigin) == 0x000F30, "Member 'ATrap_Floor_Player_Campfire_C::FireDamageTraceOrigin' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Audio) == 0x000F38, "Member 'ATrap_Floor_Player_Campfire_C::Audio' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, P_Athena_Campfire) == 0x000F40, "Member 'ATrap_Floor_Player_Campfire_C::P_Athena_Campfire' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, PlacementSoundLocation) == 0x000F48, "Member 'ATrap_Floor_Player_Campfire_C::PlacementSoundLocation' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, ProximityTraceOrigin) == 0x000F50, "Member 'ATrap_Floor_Player_Campfire_C::ProximityTraceOrigin' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Placed_Sound) == 0x000F58, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Placed_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Active_Sound) == 0x000F60, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Active_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Fire_Sound) == 0x000F68, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Fire_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Reload_Sound) == 0x000F70, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Reload_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Explode_Sound) == 0x000F78, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Explode_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, IsActive) == 0x000F80, "Member 'ATrap_Floor_Player_Campfire_C::IsActive' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, NumTicks) == 0x000F84, "Member 'ATrap_Floor_Player_Campfire_C::NumTicks' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, MaxTicks) == 0x000F88, "Member 'ATrap_Floor_Player_Campfire_C::MaxTicks' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, AOE_Radius) == 0x000F8C, "Member 'ATrap_Floor_Player_Campfire_C::AOE_Radius' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, OverlapObjectTypes) == 0x000F90, "Member 'ATrap_Floor_Player_Campfire_C::OverlapObjectTypes' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, AOE_BoxExtents) == 0x000FA0, "Member 'ATrap_Floor_Player_Campfire_C::AOE_BoxExtents' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, AOE_FireDamageBoxExtents) == 0x000FAC, "Member 'ATrap_Floor_Player_Campfire_C::AOE_FireDamageBoxExtents' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, CampfireDousedSound) == 0x000FB8, "Member 'ATrap_Floor_Player_Campfire_C::CampfireDousedSound' has a wrong offset!");

}

