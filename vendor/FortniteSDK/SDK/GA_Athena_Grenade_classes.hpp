#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Grenade

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Grenade.GA_Athena_Grenade_C
// 0x0208 (0x0CB8 - 0x0AB0)
class UGA_Athena_Grenade_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 Prj_Athena_Grenade;                                // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              PlayerPawn;                                        // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TransformOffsetA1;                                 // 0x0AC8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TransformOffsetB1;                                 // 0x0AD4(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NegHorizontalSpread1;                              // 0x0AE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PosHorizontalSpread1;                              // 0x0AE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0AE8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialSpeed;                                      // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Athena_Grenade_Gravity;                            // 0x0AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               StartRotation;                                     // 0x0AFC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EventComplete;                                     // 0x0B08(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventActivation;                                   // 0x0B10(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortAbilityTargetSelection            T_Explosion;                                       // 0x0B18(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             ActivationSound;                                   // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0B80(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Vertical_Throw;                                    // 0x0C28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Anm_PlayRate;                                      // 0x0C2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       EC_Explode_Return;                                 // 0x0C30(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EC_Explode;                                        // 0x0CB0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Grenade(int32 EntryPoint);
	void Bounced_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Cancelled_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Created_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Destroyed_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Exploded_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void K2_ActivateAbility();
	void Stopped_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void ThrowAthenaGrenade(struct FVector* NewParam, struct FRotator* Rotation);
	void Touched_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Triggered_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Grenade_C">();
	}
	static class UGA_Athena_Grenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Grenade_C>();
	}
};
static_assert(alignof(UGA_Athena_Grenade_C) == 0x000008, "Wrong alignment on UGA_Athena_Grenade_C");
static_assert(sizeof(UGA_Athena_Grenade_C) == 0x000CB8, "Wrong size on UGA_Athena_Grenade_C");
static_assert(offsetof(UGA_Athena_Grenade_C, UberGraphFrame) == 0x000AB0, "Member 'UGA_Athena_Grenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, Prj_Athena_Grenade) == 0x000AB8, "Member 'UGA_Athena_Grenade_C::Prj_Athena_Grenade' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, PlayerPawn) == 0x000AC0, "Member 'UGA_Athena_Grenade_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, TransformOffsetA1) == 0x000AC8, "Member 'UGA_Athena_Grenade_C::TransformOffsetA1' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, TransformOffsetB1) == 0x000AD4, "Member 'UGA_Athena_Grenade_C::TransformOffsetB1' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, NegHorizontalSpread1) == 0x000AE0, "Member 'UGA_Athena_Grenade_C::NegHorizontalSpread1' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, PosHorizontalSpread1) == 0x000AE4, "Member 'UGA_Athena_Grenade_C::PosHorizontalSpread1' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, StartLocation) == 0x000AE8, "Member 'UGA_Athena_Grenade_C::StartLocation' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, InitialSpeed) == 0x000AF4, "Member 'UGA_Athena_Grenade_C::InitialSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, Athena_Grenade_Gravity) == 0x000AF8, "Member 'UGA_Athena_Grenade_C::Athena_Grenade_Gravity' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, StartRotation) == 0x000AFC, "Member 'UGA_Athena_Grenade_C::StartRotation' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, EventComplete) == 0x000B08, "Member 'UGA_Athena_Grenade_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, EventActivation) == 0x000B10, "Member 'UGA_Athena_Grenade_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, T_Explosion) == 0x000B18, "Member 'UGA_Athena_Grenade_C::T_Explosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, ActivationSound) == 0x000B78, "Member 'UGA_Athena_Grenade_C::ActivationSound' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, EventData) == 0x000B80, "Member 'UGA_Athena_Grenade_C::EventData' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, Vertical_Throw) == 0x000C28, "Member 'UGA_Athena_Grenade_C::Vertical_Throw' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, Anm_PlayRate) == 0x000C2C, "Member 'UGA_Athena_Grenade_C::Anm_PlayRate' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, EC_Explode_Return) == 0x000C30, "Member 'UGA_Athena_Grenade_C::EC_Explode_Return' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_C, EC_Explode) == 0x000CB0, "Member 'UGA_Athena_Grenade_C::EC_Explode' has a wrong offset!");

}

