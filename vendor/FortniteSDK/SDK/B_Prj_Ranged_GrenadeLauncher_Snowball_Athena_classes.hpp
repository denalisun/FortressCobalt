#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ranged_GrenadeLauncher_Snowball_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Ranged_GrenadeLauncher_Snowball_Athena.B_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C
// 0x0198 (0x0970 - 0x07D8)
class AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C final : public AFortProjectileBase
{
public:
	uint8                                         Pad_3BC8[0x8];                                     // 0x07D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07E0(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        Snowball_Loop;                                     // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        RibbonTrail_PS;                                    // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               RibbonTrail_PSC;                                   // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrailLifetime;                                     // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              WaterPhysMat;                                      // 0x0814(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BC9[0x3];                                     // 0x0815(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Bounce_WaterSplash_PS;                             // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               WaterSplash_PSC;                                   // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Bounce_Generic_PSC;                                // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Bounce_Generic_PS;                                 // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Explosion_PS;                                      // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Explosion_PSC;                                     // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StopLocation;                                      // 0x0848(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BCA[0x4];                                     // 0x0854(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      ObjectsToTraceAgainst;                             // 0x0858(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                               StopRotX;                                          // 0x0868(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BCB[0x4];                                     // 0x0874(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Grenade_Explosion_Sound;                           // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Explosion_Flesh_Damage_PS;                         // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Explosion_Water_PSC;                               // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpawnBounceFXHitActor;                             // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             OnBounceHitResult;                                 // 0x0898(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         FuseTimer_Spawn;                                   // 0x0918(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuseTimerAfterBounce;                              // 0x091C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               WaterLandDelayRipplePSC;                           // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WaterLandDelayPS;                                  // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               GrenadeInWaterLocation;                            // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Grenade_Explosion_Water_Sound;                     // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              StopSurfaceType;                                   // 0x0940(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BCC[0x3];                                     // 0x0941(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               StopRotZ;                                          // 0x0944(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UForceFeedbackEffect*                   ExplosionForceFeedbackNear;                        // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ExplosionForceFeedbackFar;                         // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasStopped;                                        // 0x0960(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BCD[0x7];                                     // 0x0961(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Explosion_InAir_PS;                                // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Snowball_Athena(int32 EntryPoint);
	void DelayBeforeExplode_();
	void OnBounce(const struct FHitResult& Hit);
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void FuseTimerMax();
	void UserConstructionScript();
	void SpawnBounceFX(struct FHitResult& Hit, class AActor** HitActor, EPhysicalSurface* SurfaceType, struct FRotator* HitResultRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C">();
	}
	static class AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C>();
	}
};
static_assert(alignof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C) == 0x000008, "Wrong alignment on AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C");
static_assert(sizeof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C) == 0x000970, "Wrong size on AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, UberGraphFrame) == 0x0007E0, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Snowball_Loop) == 0x0007E8, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Snowball_Loop' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, RotatingMovement) == 0x0007F0, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Mesh) == 0x0007F8, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, RibbonTrail_PS) == 0x000800, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::RibbonTrail_PS' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, RibbonTrail_PSC) == 0x000808, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::RibbonTrail_PSC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, TrailLifetime) == 0x000810, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::TrailLifetime' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, WaterPhysMat) == 0x000814, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::WaterPhysMat' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Bounce_WaterSplash_PS) == 0x000818, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Bounce_WaterSplash_PS' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, WaterSplash_PSC) == 0x000820, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::WaterSplash_PSC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Bounce_Generic_PSC) == 0x000828, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Bounce_Generic_PSC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Bounce_Generic_PS) == 0x000830, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Bounce_Generic_PS' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Explosion_PS) == 0x000838, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Explosion_PS' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Explosion_PSC) == 0x000840, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Explosion_PSC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, StopLocation) == 0x000848, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::StopLocation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, ObjectsToTraceAgainst) == 0x000858, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::ObjectsToTraceAgainst' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, StopRotX) == 0x000868, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::StopRotX' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Grenade_Explosion_Sound) == 0x000878, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Grenade_Explosion_Sound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Explosion_Flesh_Damage_PS) == 0x000880, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Explosion_Flesh_Damage_PS' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Explosion_Water_PSC) == 0x000888, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Explosion_Water_PSC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, SpawnBounceFXHitActor) == 0x000890, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::SpawnBounceFXHitActor' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, OnBounceHitResult) == 0x000898, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::OnBounceHitResult' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, FuseTimer_Spawn) == 0x000918, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::FuseTimer_Spawn' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, FuseTimerAfterBounce) == 0x00091C, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::FuseTimerAfterBounce' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, WaterLandDelayRipplePSC) == 0x000920, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::WaterLandDelayRipplePSC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, WaterLandDelayPS) == 0x000928, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::WaterLandDelayPS' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, GrenadeInWaterLocation) == 0x000930, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::GrenadeInWaterLocation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Grenade_Explosion_Water_Sound) == 0x000938, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Grenade_Explosion_Water_Sound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, StopSurfaceType) == 0x000940, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::StopSurfaceType' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, StopRotZ) == 0x000944, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::StopRotZ' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, ExplosionForceFeedbackNear) == 0x000950, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::ExplosionForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, ExplosionForceFeedbackFar) == 0x000958, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::ExplosionForceFeedbackFar' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, HasStopped) == 0x000960, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::HasStopped' has a wrong offset!");
static_assert(offsetof(AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C, Explosion_InAir_PS) == 0x000968, "Member 'AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C::Explosion_InAir_PS' has a wrong offset!");

}

