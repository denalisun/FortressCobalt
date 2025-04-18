#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Athena_Generic_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// 0x00C0 (0x1E20 - 0x1D60)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1D60(0x0008)(Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x1D68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x1D78(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x1D88(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x1D98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x1DA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x1DB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x1DC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnLegsMaterials;                                 // 0x1DD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnTorsoMaterials;                                // 0x1DE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x1DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x1E00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x1E10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void GameplayCue_Teleport_In(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Teleport_Out(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
	void Teleport(const struct FGameplayCueParameters& GameplayCueParameters, bool TeleportOut_, float Default_PlayLength);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Athena_Generic_Parent_C">();
	}
	static class APlayerPawn_Athena_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Athena_Generic_Parent_C>();
	}
};
static_assert(alignof(APlayerPawn_Athena_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Athena_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Athena_Generic_Parent_C) == 0x001E20, "Wrong size on APlayerPawn_Athena_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, UberGraphFrame) == 0x001D60, "Member 'APlayerPawn_Athena_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, Default_Weapon_Materials) == 0x001D68, "Member 'APlayerPawn_Athena_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBackpackMaterials) == 0x001D78, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHatMaterials) == 0x001D88, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHeadMaterials) == 0x001D98, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBodyMaterials) == 0x001DA8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnCharmMaterials) == 0x001DB8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnFaceMaterials) == 0x001DC8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnLegsMaterials) == 0x001DD8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnLegsMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnTorsoMaterials) == 0x001DE8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnTorsoMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PlayerPostProcessFX) == 0x001DF8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, SkeletalMeshes) == 0x001E00, "Member 'APlayerPawn_Athena_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnMaterials_ALL) == 0x001E10, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");

}

