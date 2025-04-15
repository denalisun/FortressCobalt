#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PopupCenterMessageModalPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C
// 0x0078 (0x0460 - 0x03E8)
class UPopupCenterMessageModalPanel_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_1A06[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       CenterMessageText;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaveButton_C*                         LeaveButton;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MessageOverlay;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   WaitingForPlayersText;                             // 0x0410(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WaitingForOutpostOwnerText;                        // 0x0428(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           MatchTimerHandle;                                  // 0x0440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FText                                   WaitingForMatchToBeginText;                        // 0x0448(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PopupCenterMessageModalPanel(int32 EntryPoint);
	void OnActivated();
	void StartMatchTimer();
	void UpdateMatchTimer();
	void UpdateState(ECenterPopupMessageStateEnum NewState);
	void UpdateMatchTimerText(bool* StopTimer);
	void LeaveZone();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PopupCenterMessageModalPanel_C">();
	}
	static class UPopupCenterMessageModalPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopupCenterMessageModalPanel_C>();
	}
};
static_assert(alignof(UPopupCenterMessageModalPanel_C) == 0x000008, "Wrong alignment on UPopupCenterMessageModalPanel_C");
static_assert(sizeof(UPopupCenterMessageModalPanel_C) == 0x000460, "Wrong size on UPopupCenterMessageModalPanel_C");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, UberGraphFrame) == 0x0003F0, "Member 'UPopupCenterMessageModalPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, CenterMessageText) == 0x0003F8, "Member 'UPopupCenterMessageModalPanel_C::CenterMessageText' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, LeaveButton) == 0x000400, "Member 'UPopupCenterMessageModalPanel_C::LeaveButton' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, MessageOverlay) == 0x000408, "Member 'UPopupCenterMessageModalPanel_C::MessageOverlay' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, WaitingForPlayersText) == 0x000410, "Member 'UPopupCenterMessageModalPanel_C::WaitingForPlayersText' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, WaitingForOutpostOwnerText) == 0x000428, "Member 'UPopupCenterMessageModalPanel_C::WaitingForOutpostOwnerText' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, MatchTimerHandle) == 0x000440, "Member 'UPopupCenterMessageModalPanel_C::MatchTimerHandle' has a wrong offset!");
static_assert(offsetof(UPopupCenterMessageModalPanel_C, WaitingForMatchToBeginText) == 0x000448, "Member 'UPopupCenterMessageModalPanel_C::WaitingForMatchToBeginText' has a wrong offset!");

}

