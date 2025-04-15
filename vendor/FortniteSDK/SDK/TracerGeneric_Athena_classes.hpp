#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TracerGeneric_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TracerGeneric_Athena.TracerGeneric_Athena_C
// 0x0070 (0x0460 - 0x03F0)
class ATracerGeneric_Athena_C final : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UBulletWhipTrackerComponent_C*          BulletWhipTrackerComponent;                        // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousPlaneDotProd;                              // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasPlayedPassBySound;                             // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2462[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CachedDirectionVector;                             // 0x0408(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Start;                                             // 0x0414(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x0420(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByRadiusMin;                                   // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByRadiusMax;                                   // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2463[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             PassByFarSound;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PassByCloseSound;                                  // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassByClosenessIntensity;                          // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2464[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        PassByPawn;                                        // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedPassDistance;                                // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TracerGeneric_Athena(int32 EntryPoint);
	void OnDead();
	void OnInit(const struct FVector& Param_Start, const struct FVector& Param_End);
	void UserConstructionScript();
	void TrackPassBy(bool* Changed, float* Pass_Distance);
	void PlayPassBySound();
	class AFortPlayerPawn* GetLocalPawnForPassBy();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TracerGeneric_Athena_C">();
	}
	static class ATracerGeneric_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATracerGeneric_Athena_C>();
	}
};
static_assert(alignof(ATracerGeneric_Athena_C) == 0x000008, "Wrong alignment on ATracerGeneric_Athena_C");
static_assert(sizeof(ATracerGeneric_Athena_C) == 0x000460, "Wrong size on ATracerGeneric_Athena_C");
static_assert(offsetof(ATracerGeneric_Athena_C, UberGraphFrame) == 0x0003F0, "Member 'ATracerGeneric_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, BulletWhipTrackerComponent) == 0x0003F8, "Member 'ATracerGeneric_Athena_C::BulletWhipTrackerComponent' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, PreviousPlaneDotProd) == 0x000400, "Member 'ATracerGeneric_Athena_C::PreviousPlaneDotProd' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, bHasPlayedPassBySound) == 0x000404, "Member 'ATracerGeneric_Athena_C::bHasPlayedPassBySound' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, CachedDirectionVector) == 0x000408, "Member 'ATracerGeneric_Athena_C::CachedDirectionVector' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, Start) == 0x000414, "Member 'ATracerGeneric_Athena_C::Start' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, End) == 0x000420, "Member 'ATracerGeneric_Athena_C::End' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, PassByRadiusMin) == 0x00042C, "Member 'ATracerGeneric_Athena_C::PassByRadiusMin' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, PassByRadiusMax) == 0x000430, "Member 'ATracerGeneric_Athena_C::PassByRadiusMax' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, PassByFarSound) == 0x000438, "Member 'ATracerGeneric_Athena_C::PassByFarSound' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, PassByCloseSound) == 0x000440, "Member 'ATracerGeneric_Athena_C::PassByCloseSound' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, PassByClosenessIntensity) == 0x000448, "Member 'ATracerGeneric_Athena_C::PassByClosenessIntensity' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, PassByPawn) == 0x000450, "Member 'ATracerGeneric_Athena_C::PassByPawn' has a wrong offset!");
static_assert(offsetof(ATracerGeneric_Athena_C, CachedPassDistance) == 0x000458, "Member 'ATracerGeneric_Athena_C::CachedPassDistance' has a wrong offset!");

}

