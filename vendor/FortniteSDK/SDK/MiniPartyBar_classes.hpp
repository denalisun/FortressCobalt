#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniPartyBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniPartyBar.MiniPartyBar_C
// 0x0058 (0x0268 - 0x0210)
class UMiniPartyBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonLocalPlayer;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineSeparator;                                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                     LocalPlayer;                                       // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                     RemoteMember0;                                     // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                     RemoteMember1;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyMember_C*                     RemoteMember2;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bLobbyTimerShow;                                   // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLobbyStarted;                                     // 0x0249(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3853[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundCue_Countdown_10SecLeft;                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCue_Countdown_10SecTick;                      // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*          NewLocalPlayerWidget;                              // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MiniPartyBar(int32 EntryPoint);
	void BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState);
	class UWidget* Get_Banners_Tooltip_Widget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniPartyBar_C">();
	}
	static class UMiniPartyBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniPartyBar_C>();
	}
};
static_assert(alignof(UMiniPartyBar_C) == 0x000008, "Wrong alignment on UMiniPartyBar_C");
static_assert(sizeof(UMiniPartyBar_C) == 0x000268, "Wrong size on UMiniPartyBar_C");
static_assert(offsetof(UMiniPartyBar_C, UberGraphFrame) == 0x000210, "Member 'UMiniPartyBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, ButtonLocalPlayer) == 0x000218, "Member 'UMiniPartyBar_C::ButtonLocalPlayer' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, LineSeparator) == 0x000220, "Member 'UMiniPartyBar_C::LineSeparator' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, LocalPlayer) == 0x000228, "Member 'UMiniPartyBar_C::LocalPlayer' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, RemoteMember0) == 0x000230, "Member 'UMiniPartyBar_C::RemoteMember0' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, RemoteMember1) == 0x000238, "Member 'UMiniPartyBar_C::RemoteMember1' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, RemoteMember2) == 0x000240, "Member 'UMiniPartyBar_C::RemoteMember2' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, bLobbyTimerShow) == 0x000248, "Member 'UMiniPartyBar_C::bLobbyTimerShow' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, bLobbyStarted) == 0x000249, "Member 'UMiniPartyBar_C::bLobbyStarted' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, SoundCue_Countdown_10SecLeft) == 0x000250, "Member 'UMiniPartyBar_C::SoundCue_Countdown_10SecLeft' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, SoundCue_Countdown_10SecTick) == 0x000258, "Member 'UMiniPartyBar_C::SoundCue_Countdown_10SecTick' has a wrong offset!");
static_assert(offsetof(UMiniPartyBar_C, NewLocalPlayerWidget) == 0x000260, "Member 'UMiniPartyBar_C::NewLocalPlayerWidget' has a wrong offset!");

}

