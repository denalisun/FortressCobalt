#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MicIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MicIndicator.MicIndicator_C
// 0x0030 (0x0278 - 0x0248)
class UMicIndicator_C final : public UFortMicIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UOverlay*                               Zero1MinusNotSpeaking;                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Zero2MinusSpeaking;                                // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Zero3MinusMuted;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MicStateSwitcher;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsMuted;                                          // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsTalking;                                        // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MicIndicator(int32 EntryPoint);
	void OnPlayerMuted(bool Param_bIsMuted);
	void OnPlayerTalkingChanged(bool Param_bIsTalking);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MicIndicator_C">();
	}
	static class UMicIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMicIndicator_C>();
	}
};
static_assert(alignof(UMicIndicator_C) == 0x000008, "Wrong alignment on UMicIndicator_C");
static_assert(sizeof(UMicIndicator_C) == 0x000278, "Wrong size on UMicIndicator_C");
static_assert(offsetof(UMicIndicator_C, UberGraphFrame) == 0x000248, "Member 'UMicIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, Zero1MinusNotSpeaking) == 0x000250, "Member 'UMicIndicator_C::Zero1MinusNotSpeaking' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, Zero2MinusSpeaking) == 0x000258, "Member 'UMicIndicator_C::Zero2MinusSpeaking' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, Zero3MinusMuted) == 0x000260, "Member 'UMicIndicator_C::Zero3MinusMuted' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, MicStateSwitcher) == 0x000268, "Member 'UMicIndicator_C::MicStateSwitcher' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, bIsMuted) == 0x000270, "Member 'UMicIndicator_C::bIsMuted' has a wrong offset!");
static_assert(offsetof(UMicIndicator_C, bIsTalking) == 0x000271, "Member 'UMicIndicator_C::bIsTalking' has a wrong offset!");

}

