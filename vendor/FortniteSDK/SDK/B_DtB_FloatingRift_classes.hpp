#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DtB_FloatingRift

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_DtB_FloatingRift.B_DtB_FloatingRift_C
// 0x0130 (0x0910 - 0x07E0)
class AB_DtB_FloatingRift_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07E0(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        Electricity_Spark_Zaps_Audio_Component;            // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dtb_rift_ground_04;                                // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dtb_rift_ground_03;                                // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dtb_rift_ground_02;                                // 0x0800(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dtb_rift_ground_01;                                // 0x0808(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DispatcherCallOutVolume;                           // 0x0810(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal_Ground;                                      // 0x0818(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DtB_GroundFog;                                  // 0x0820(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_DtB_GroundTendril;                              // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dtb_rift_orb_01;                                   // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dtb_rift_floating_pieces_01;                       // 0x0850(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Elevation_Ground_Z;                              // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Dtb_rift_center_01;                                // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_StormFog;                                        // 0x0868(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AmbientClose_small;                                // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AmbientLoopingSound_large;                         // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  FortMiniMap;                                       // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      KillVolume;                                        // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       StaminaVolume;                                     // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DamageVolume;                                      // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Rift_Arcs;                                       // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          RiftArcTriggerVolume;                              // 0x08A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CampSlime;                                         // 0x08B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x08B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PostProcessVolume;                                 // 0x08C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_DtBRiftCoreFloating;                             // 0x08C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x08D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsRiftArcsActive_;                                // 0x08D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_26AF[0x7];                                     // 0x08D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            AIPawnAbilitySystemComponent;                      // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   RiftLocated;                                       // 0x08E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   CallOutVolumeOverlap;                              // 0x08F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void RiftLocated__DelegateSignature(class AFortPlayerPawn* FortPlayPawn);
	void CallOutVolumeOverlap__DelegateSignature(class AFortPlayerPawn* FortPlayerPawn);
	void ExecuteUbergraph_B_DtB_FloatingRift(int32 EntryPoint);
	void BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleCount);
	void BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void HandleMissionEvent_NewPlayer(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRep_bIsRiftArcsActive_();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DtB_FloatingRift_C">();
	}
	static class AB_DtB_FloatingRift_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_DtB_FloatingRift_C>();
	}
};
static_assert(alignof(AB_DtB_FloatingRift_C) == 0x000010, "Wrong alignment on AB_DtB_FloatingRift_C");
static_assert(sizeof(AB_DtB_FloatingRift_C) == 0x000910, "Wrong size on AB_DtB_FloatingRift_C");
static_assert(offsetof(AB_DtB_FloatingRift_C, UberGraphFrame) == 0x0007E0, "Member 'AB_DtB_FloatingRift_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Electricity_Spark_Zaps_Audio_Component) == 0x0007E8, "Member 'AB_DtB_FloatingRift_C::Electricity_Spark_Zaps_Audio_Component' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Dtb_rift_ground_04) == 0x0007F0, "Member 'AB_DtB_FloatingRift_C::Dtb_rift_ground_04' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Dtb_rift_ground_03) == 0x0007F8, "Member 'AB_DtB_FloatingRift_C::Dtb_rift_ground_03' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Dtb_rift_ground_02) == 0x000800, "Member 'AB_DtB_FloatingRift_C::Dtb_rift_ground_02' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Dtb_rift_ground_01) == 0x000808, "Member 'AB_DtB_FloatingRift_C::Dtb_rift_ground_01' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, DispatcherCallOutVolume) == 0x000810, "Member 'AB_DtB_FloatingRift_C::DispatcherCallOutVolume' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Decal_Ground) == 0x000818, "Member 'AB_DtB_FloatingRift_C::Decal_Ground' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, SM_DtB_GroundFog) == 0x000820, "Member 'AB_DtB_FloatingRift_C::SM_DtB_GroundFog' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, SM_DtB_GroundTendril) == 0x000828, "Member 'AB_DtB_FloatingRift_C::SM_DtB_GroundTendril' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Dtb_rift_orb_01) == 0x000830, "Member 'AB_DtB_FloatingRift_C::Dtb_rift_orb_01' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, StaticMesh2) == 0x000838, "Member 'AB_DtB_FloatingRift_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, StaticMesh1) == 0x000840, "Member 'AB_DtB_FloatingRift_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, StaticMesh) == 0x000848, "Member 'AB_DtB_FloatingRift_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Dtb_rift_floating_pieces_01) == 0x000850, "Member 'AB_DtB_FloatingRift_C::Dtb_rift_floating_pieces_01' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, S_Elevation_Ground_Z) == 0x000858, "Member 'AB_DtB_FloatingRift_C::S_Elevation_Ground_Z' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, Dtb_rift_center_01) == 0x000860, "Member 'AB_DtB_FloatingRift_C::Dtb_rift_center_01' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, P_StormFog) == 0x000868, "Member 'AB_DtB_FloatingRift_C::P_StormFog' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, AmbientClose_small) == 0x000870, "Member 'AB_DtB_FloatingRift_C::AmbientClose_small' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, AmbientLoopingSound_large) == 0x000878, "Member 'AB_DtB_FloatingRift_C::AmbientLoopingSound_large' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, FortMiniMap) == 0x000880, "Member 'AB_DtB_FloatingRift_C::FortMiniMap' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, KillVolume) == 0x000888, "Member 'AB_DtB_FloatingRift_C::KillVolume' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, StaminaVolume) == 0x000890, "Member 'AB_DtB_FloatingRift_C::StaminaVolume' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, DamageVolume) == 0x000898, "Member 'AB_DtB_FloatingRift_C::DamageVolume' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, P_Rift_Arcs) == 0x0008A0, "Member 'AB_DtB_FloatingRift_C::P_Rift_Arcs' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, RiftArcTriggerVolume) == 0x0008A8, "Member 'AB_DtB_FloatingRift_C::RiftArcTriggerVolume' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, CampSlime) == 0x0008B0, "Member 'AB_DtB_FloatingRift_C::CampSlime' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, PostProcess) == 0x0008B8, "Member 'AB_DtB_FloatingRift_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, PostProcessVolume) == 0x0008C0, "Member 'AB_DtB_FloatingRift_C::PostProcessVolume' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, P_DtBRiftCoreFloating) == 0x0008C8, "Member 'AB_DtB_FloatingRift_C::P_DtBRiftCoreFloating' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, DefaultSceneRoot) == 0x0008D0, "Member 'AB_DtB_FloatingRift_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, bIsRiftArcsActive_) == 0x0008D8, "Member 'AB_DtB_FloatingRift_C::bIsRiftArcsActive_' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, AIPawnAbilitySystemComponent) == 0x0008E0, "Member 'AB_DtB_FloatingRift_C::AIPawnAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, RiftLocated) == 0x0008E8, "Member 'AB_DtB_FloatingRift_C::RiftLocated' has a wrong offset!");
static_assert(offsetof(AB_DtB_FloatingRift_C, CallOutVolumeOverlap) == 0x0008F8, "Member 'AB_DtB_FloatingRift_C::CallOutVolumeOverlap' has a wrong offset!");

}

