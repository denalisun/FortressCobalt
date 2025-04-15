#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletWhipTrackerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BulletWhipTrackerComponent.BulletWhipTrackerComponent_C
// 0x0060 (0x0150 - 0x00F0)
class UBulletWhipTrackerComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        PassByPawn;                                        // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousPlaneDotProd;                              // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VelocityDirection;                                 // 0x0104(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0110(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedPassDistance;                                // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByClosenessIntensity;                          // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasPlayedPassBySound;                             // 0x0124(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF3[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PassByRadiusMax;                                   // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByRadiusMin;                                   // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PassByFarSound;                                    // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PassByCloseSound;                                  // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x0140(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x014C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BulletWhipTrackerComponent(int32 EntryPoint);
	void Disable();
	void Update_Velocity(const struct FVector& Current_Velocity);
	void Reset(const struct FVector& Param_StartLocation);
	void ReceiveTick(float DeltaSeconds);
	void TrackWhipStatus(bool* Changed, float* Whip_Distance);
	class USceneComponent* GetLocalPawnForTracking();
	void PlayWhipSound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BulletWhipTrackerComponent_C">();
	}
	static class UBulletWhipTrackerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBulletWhipTrackerComponent_C>();
	}
};
static_assert(alignof(UBulletWhipTrackerComponent_C) == 0x000008, "Wrong alignment on UBulletWhipTrackerComponent_C");
static_assert(sizeof(UBulletWhipTrackerComponent_C) == 0x000150, "Wrong size on UBulletWhipTrackerComponent_C");
static_assert(offsetof(UBulletWhipTrackerComponent_C, UberGraphFrame) == 0x0000F0, "Member 'UBulletWhipTrackerComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, PassByPawn) == 0x0000F8, "Member 'UBulletWhipTrackerComponent_C::PassByPawn' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, PreviousPlaneDotProd) == 0x000100, "Member 'UBulletWhipTrackerComponent_C::PreviousPlaneDotProd' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, VelocityDirection) == 0x000104, "Member 'UBulletWhipTrackerComponent_C::VelocityDirection' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, StartLocation) == 0x000110, "Member 'UBulletWhipTrackerComponent_C::StartLocation' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, CachedPassDistance) == 0x00011C, "Member 'UBulletWhipTrackerComponent_C::CachedPassDistance' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, PassByClosenessIntensity) == 0x000120, "Member 'UBulletWhipTrackerComponent_C::PassByClosenessIntensity' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, bHasPlayedPassBySound) == 0x000124, "Member 'UBulletWhipTrackerComponent_C::bHasPlayedPassBySound' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, PassByRadiusMax) == 0x000128, "Member 'UBulletWhipTrackerComponent_C::PassByRadiusMax' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, PassByRadiusMin) == 0x00012C, "Member 'UBulletWhipTrackerComponent_C::PassByRadiusMin' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, PassByFarSound) == 0x000130, "Member 'UBulletWhipTrackerComponent_C::PassByFarSound' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, PassByCloseSound) == 0x000138, "Member 'UBulletWhipTrackerComponent_C::PassByCloseSound' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, End) == 0x000140, "Member 'UBulletWhipTrackerComponent_C::End' has a wrong offset!");
static_assert(offsetof(UBulletWhipTrackerComponent_C, bActive) == 0x00014C, "Member 'UBulletWhipTrackerComponent_C::bActive' has a wrong offset!");

}

