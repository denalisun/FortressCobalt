#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEquipProgress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEquipProgress.AthenaEquipProgress_C
// 0x0038 (0x0270 - 0x0238)
class UAthenaEquipProgress_C final : public UFortHUDEquipProgressBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ImageTimer;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTimer;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Root;                                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextTimeRemaining;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Progress;                                          // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaEquipProgress(int32 EntryPoint);
	void Destruct();
	void OnUIGameplayCue_Event_0(class FName CueName, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEquipProgress_C">();
	}
	static class UAthenaEquipProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEquipProgress_C>();
	}
};
static_assert(alignof(UAthenaEquipProgress_C) == 0x000008, "Wrong alignment on UAthenaEquipProgress_C");
static_assert(sizeof(UAthenaEquipProgress_C) == 0x000270, "Wrong size on UAthenaEquipProgress_C");
static_assert(offsetof(UAthenaEquipProgress_C, UberGraphFrame) == 0x000238, "Member 'UAthenaEquipProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEquipProgress_C, ImageTimer) == 0x000240, "Member 'UAthenaEquipProgress_C::ImageTimer' has a wrong offset!");
static_assert(offsetof(UAthenaEquipProgress_C, OverlayTimer) == 0x000248, "Member 'UAthenaEquipProgress_C::OverlayTimer' has a wrong offset!");
static_assert(offsetof(UAthenaEquipProgress_C, Root) == 0x000250, "Member 'UAthenaEquipProgress_C::Root' has a wrong offset!");
static_assert(offsetof(UAthenaEquipProgress_C, TextTimeRemaining) == 0x000258, "Member 'UAthenaEquipProgress_C::TextTimeRemaining' has a wrong offset!");
static_assert(offsetof(UAthenaEquipProgress_C, Duration) == 0x000260, "Member 'UAthenaEquipProgress_C::Duration' has a wrong offset!");
static_assert(offsetof(UAthenaEquipProgress_C, StartTime) == 0x000264, "Member 'UAthenaEquipProgress_C::StartTime' has a wrong offset!");
static_assert(offsetof(UAthenaEquipProgress_C, Progress) == 0x000268, "Member 'UAthenaEquipProgress_C::Progress' has a wrong offset!");

}

