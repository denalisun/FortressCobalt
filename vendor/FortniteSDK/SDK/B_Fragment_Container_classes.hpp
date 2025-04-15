#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Fragment_Container

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "E_OutlanderFragmentTypes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Fragment_Container.B_Fragment_Container_C
// 0x0370 (0x1170 - 0x0E00)
class AB_Fragment_Container_C final : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E00(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_LightOn;                                         // 0x0E08(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Orb_Mesh;                                          // 0x0E10(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_ResOut;                                          // 0x0E18(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Orb_PickupEffect;                                // 0x0E20(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      BlockingCollision;                                 // 0x0E28(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Container_SK;                                      // 0x0E30(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        RotationRoot;                                      // 0x0E38(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        VerticalMovement;                                  // 0x0E40(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Awaken_Collision;                                  // 0x0E48(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MiniMapCollision;                                  // 0x0E50(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  MiniMapLoc;                                        // 0x0E58(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0x0E60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4; // 0x0E64(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3376[0x3];                                     // 0x0E65(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     VerticalMovementTimeline;                          // 0x0E68(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_HasFragmentAbility;                             // 0x0E70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_LlamaFragment;                                  // 0x0E90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FGameplayTagContainer                  TC_ChargeFragmentTag;                              // 0x0EB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_LlamaFragmentTag;                               // 0x0ED0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Event_FragmentCollected;                           // 0x0EF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     SentFragment;                                      // 0x0EF8(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_OutlanderFragmentTypes                      FragmentType;                                      // 0x0FA0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3377[0x3];                                     // 0x0FA1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ChargeFragmentColor;                               // 0x0FA4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LlamaFragmentColor;                                // 0x0FB4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3378[0x4];                                     // 0x0FC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAmmoItemDefinition*                FragmentAmmoData;                                  // 0x0FC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Current_Outlander;                                 // 0x0FD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        InteractingPlayerPawn;                             // 0x0FD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Outlander_LlamaFragment;                        // 0x0FE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ClearFragmentCooldown;                          // 0x0FE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Outlander_FragmentTeamSpeedBost;                // 0x0FF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FortPawnFilter;                                    // 0x0FF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LlamaFragmentPercent;                              // 0x1000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateToPlayerSpeed;                               // 0x1004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastInteractStartTime;                             // 0x1008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayedDestroyTime;                                // 0x100C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfTimeToPingMap;                             // 0x1010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfMapPings;                                  // 0x1014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAnyOutlanderStillAround;                         // 0x1018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanInteract;                                       // 0x1019(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                          IsAwake;                                           // 0x101A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasLoot;                                           // 0x101B(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOpen;                                            // 0x101C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          bIsUP;                                             // 0x101D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOn;                                              // 0x101E(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_3379[0x1];                                     // 0x101F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Container_Base_Mat;                                // 0x1020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Container_Screen_mat;                              // 0x1028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Container_Light_mat;                               // 0x1030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Orb_Mat;                                           // 0x1038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Turn_On_Sound;                                 // 0x1040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Hello_Sound;                                   // 0x1048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Hover_Sound;                                   // 0x1050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Goodbye_Sound;                                 // 0x1058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Orb_Thanks_Sound;                                  // 0x1060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InteractLlamaFragment;                             // 0x1068(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InteractChargeFragment;                            // 0x1080(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InteractNonOutlander;                              // 0x1098(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PickupLlamaFragment;                               // 0x10B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PickupChargeFragment;                              // 0x10C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                        OrbAudioComponent;                                 // 0x10E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOrbTaken;                                        // 0x10E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_337A[0x7];                                     // 0x10E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FailedOutlanderOnlyOneLlama;                       // 0x10F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedOutlanderMaxFragHeldDefault;                 // 0x1108(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility; // 0x1120(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedNonOutlanderActivated;                       // 0x1138(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                   FF_Interact;                                       // 0x1150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   FFInteractSoft;                                    // 0x1158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          DeployAnim;                                        // 0x1160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          UndeployAnim;                                      // 0x1168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Fragment_Container(int32 EntryPoint);
	void AnimationComplete();
	void PlayAnimation(class UAnimSequence* AnimToPlay);
	void SoftFeedback();
	void MultiFeedback();
	void BlueprintOnBeginInteract();
	void Reset_Activation();
	void StartHide();
	void ShowOnMiniMap();
	void MoveDown();
	void PowerDown();
	void MoveUp();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ActivateFX();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void VerticalMovementTimeline__down__EventFunc();
	void VerticalMovementTimeline__Up__EventFunc();
	void VerticalMovementTimeline__UpdateFunc();
	void VerticalMovementTimeline__FinishedFunc();
	void UserConstructionScript();
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void OnRep_BuffType();
	void DelayedDestroy();
	void OnRep_IsOpen();
	void UpdateShouldTick();
	void SetAwake(bool NewAwake);
	void SetOutlander(class AActor* NewOutlander);
	void OnRep_IsOn();
	void OnRep_IsOrbTaken();
	void ForceFeedbackInteract(bool Soft);

	bool BlueprintCanInteract(class AFortPawn* InteractingPawn) const;
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn) const;
	void IsOutlander(class AFortPawn* Pawn, bool* Param_IsOutlander) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Fragment_Container_C">();
	}
	static class AB_Fragment_Container_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Fragment_Container_C>();
	}
};
static_assert(alignof(AB_Fragment_Container_C) == 0x000008, "Wrong alignment on AB_Fragment_Container_C");
static_assert(sizeof(AB_Fragment_Container_C) == 0x001170, "Wrong size on AB_Fragment_Container_C");
static_assert(offsetof(AB_Fragment_Container_C, UberGraphFrame) == 0x000E00, "Member 'AB_Fragment_Container_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, P_LightOn) == 0x000E08, "Member 'AB_Fragment_Container_C::P_LightOn' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Mesh) == 0x000E10, "Member 'AB_Fragment_Container_C::Orb_Mesh' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, P_ResOut) == 0x000E18, "Member 'AB_Fragment_Container_C::P_ResOut' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, P_Orb_PickupEffect) == 0x000E20, "Member 'AB_Fragment_Container_C::P_Orb_PickupEffect' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, BlockingCollision) == 0x000E28, "Member 'AB_Fragment_Container_C::BlockingCollision' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_SK) == 0x000E30, "Member 'AB_Fragment_Container_C::Container_SK' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, RotationRoot) == 0x000E38, "Member 'AB_Fragment_Container_C::RotationRoot' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovement) == 0x000E40, "Member 'AB_Fragment_Container_C::VerticalMovement' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Awaken_Collision) == 0x000E48, "Member 'AB_Fragment_Container_C::Awaken_Collision' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, MiniMapCollision) == 0x000E50, "Member 'AB_Fragment_Container_C::MiniMapCollision' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, MiniMapLoc) == 0x000E58, "Member 'AB_Fragment_Container_C::MiniMapLoc' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4) == 0x000E60, "Member 'AB_Fragment_Container_C::VerticalMovementTimeline_Z_Offset_E77B23F44312E9BD5DA6EF9ACE127DE4' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4) == 0x000E64, "Member 'AB_Fragment_Container_C::VerticalMovementTimeline__Direction_E77B23F44312E9BD5DA6EF9ACE127DE4' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, VerticalMovementTimeline) == 0x000E68, "Member 'AB_Fragment_Container_C::VerticalMovementTimeline' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_HasFragmentAbility) == 0x000E70, "Member 'AB_Fragment_Container_C::TC_HasFragmentAbility' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_LlamaFragment) == 0x000E90, "Member 'AB_Fragment_Container_C::TC_LlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_ChargeFragmentTag) == 0x000EB0, "Member 'AB_Fragment_Container_C::TC_ChargeFragmentTag' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, TC_LlamaFragmentTag) == 0x000ED0, "Member 'AB_Fragment_Container_C::TC_LlamaFragmentTag' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Event_FragmentCollected) == 0x000EF0, "Member 'AB_Fragment_Container_C::Event_FragmentCollected' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, SentFragment) == 0x000EF8, "Member 'AB_Fragment_Container_C::SentFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FragmentType) == 0x000FA0, "Member 'AB_Fragment_Container_C::FragmentType' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, ChargeFragmentColor) == 0x000FA4, "Member 'AB_Fragment_Container_C::ChargeFragmentColor' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, LlamaFragmentColor) == 0x000FB4, "Member 'AB_Fragment_Container_C::LlamaFragmentColor' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FragmentAmmoData) == 0x000FC8, "Member 'AB_Fragment_Container_C::FragmentAmmoData' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Current_Outlander) == 0x000FD0, "Member 'AB_Fragment_Container_C::Current_Outlander' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractingPlayerPawn) == 0x000FD8, "Member 'AB_Fragment_Container_C::InteractingPlayerPawn' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, GE_Outlander_LlamaFragment) == 0x000FE0, "Member 'AB_Fragment_Container_C::GE_Outlander_LlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, GE_ClearFragmentCooldown) == 0x000FE8, "Member 'AB_Fragment_Container_C::GE_ClearFragmentCooldown' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, GE_Outlander_FragmentTeamSpeedBost) == 0x000FF0, "Member 'AB_Fragment_Container_C::GE_Outlander_FragmentTeamSpeedBost' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FortPawnFilter) == 0x000FF8, "Member 'AB_Fragment_Container_C::FortPawnFilter' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, LlamaFragmentPercent) == 0x001000, "Member 'AB_Fragment_Container_C::LlamaFragmentPercent' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, RotateToPlayerSpeed) == 0x001004, "Member 'AB_Fragment_Container_C::RotateToPlayerSpeed' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, LastInteractStartTime) == 0x001008, "Member 'AB_Fragment_Container_C::LastInteractStartTime' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, DelayedDestroyTime) == 0x00100C, "Member 'AB_Fragment_Container_C::DelayedDestroyTime' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, NumberOfTimeToPingMap) == 0x001010, "Member 'AB_Fragment_Container_C::NumberOfTimeToPingMap' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, NumberOfMapPings) == 0x001014, "Member 'AB_Fragment_Container_C::NumberOfMapPings' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsAnyOutlanderStillAround) == 0x001018, "Member 'AB_Fragment_Container_C::IsAnyOutlanderStillAround' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, CanInteract) == 0x001019, "Member 'AB_Fragment_Container_C::CanInteract' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsAwake) == 0x00101A, "Member 'AB_Fragment_Container_C::IsAwake' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, HasLoot) == 0x00101B, "Member 'AB_Fragment_Container_C::HasLoot' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsOpen) == 0x00101C, "Member 'AB_Fragment_Container_C::IsOpen' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, bIsUP) == 0x00101D, "Member 'AB_Fragment_Container_C::bIsUP' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsOn) == 0x00101E, "Member 'AB_Fragment_Container_C::IsOn' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_Base_Mat) == 0x001020, "Member 'AB_Fragment_Container_C::Container_Base_Mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_Screen_mat) == 0x001028, "Member 'AB_Fragment_Container_C::Container_Screen_mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Container_Light_mat) == 0x001030, "Member 'AB_Fragment_Container_C::Container_Light_mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Mat) == 0x001038, "Member 'AB_Fragment_Container_C::Orb_Mat' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Turn_On_Sound) == 0x001040, "Member 'AB_Fragment_Container_C::Orb_Turn_On_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Hello_Sound) == 0x001048, "Member 'AB_Fragment_Container_C::Orb_Hello_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Hover_Sound) == 0x001050, "Member 'AB_Fragment_Container_C::Orb_Hover_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Goodbye_Sound) == 0x001058, "Member 'AB_Fragment_Container_C::Orb_Goodbye_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, Orb_Thanks_Sound) == 0x001060, "Member 'AB_Fragment_Container_C::Orb_Thanks_Sound' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractLlamaFragment) == 0x001068, "Member 'AB_Fragment_Container_C::InteractLlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractChargeFragment) == 0x001080, "Member 'AB_Fragment_Container_C::InteractChargeFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, InteractNonOutlander) == 0x001098, "Member 'AB_Fragment_Container_C::InteractNonOutlander' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, PickupLlamaFragment) == 0x0010B0, "Member 'AB_Fragment_Container_C::PickupLlamaFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, PickupChargeFragment) == 0x0010C8, "Member 'AB_Fragment_Container_C::PickupChargeFragment' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, OrbAudioComponent) == 0x0010E0, "Member 'AB_Fragment_Container_C::OrbAudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, IsOrbTaken) == 0x0010E8, "Member 'AB_Fragment_Container_C::IsOrbTaken' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedOutlanderOnlyOneLlama) == 0x0010F0, "Member 'AB_Fragment_Container_C::FailedOutlanderOnlyOneLlama' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedOutlanderMaxFragHeldDefault) == 0x001108, "Member 'AB_Fragment_Container_C::FailedOutlanderMaxFragHeldDefault' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility) == 0x001120, "Member 'AB_Fragment_Container_C::FailedOutlanderActivatedButDoesNotYetPossessFragmentAbility' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FailedNonOutlanderActivated) == 0x001138, "Member 'AB_Fragment_Container_C::FailedNonOutlanderActivated' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FF_Interact) == 0x001150, "Member 'AB_Fragment_Container_C::FF_Interact' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, FFInteractSoft) == 0x001158, "Member 'AB_Fragment_Container_C::FFInteractSoft' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, DeployAnim) == 0x001160, "Member 'AB_Fragment_Container_C::DeployAnim' has a wrong offset!");
static_assert(offsetof(AB_Fragment_Container_C, UndeployAnim) == 0x001168, "Member 'AB_Fragment_Container_C::UndeployAnim' has a wrong offset!");

}

