#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialWindow.TutorialWindow_C
// 0x0040 (0x0428 - 0x03E8)
class UTutorialWindow_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_2E90[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonBox;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      IconTextButton;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRequestRetry;                                    // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRequestRetry__DelegateSignature();
	void ExecuteUbergraph_TutorialWindow(int32 EntryPoint);
	void SetDescription(const class FText& Param_Description);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialWindow_C">();
	}
	static class UTutorialWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialWindow_C>();
	}
};
static_assert(alignof(UTutorialWindow_C) == 0x000008, "Wrong alignment on UTutorialWindow_C");
static_assert(sizeof(UTutorialWindow_C) == 0x000428, "Wrong size on UTutorialWindow_C");
static_assert(offsetof(UTutorialWindow_C, UberGraphFrame) == 0x0003F0, "Member 'UTutorialWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, ButtonBox) == 0x0003F8, "Member 'UTutorialWindow_C::ButtonBox' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, Description) == 0x000400, "Member 'UTutorialWindow_C::Description' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, IconTextButton) == 0x000408, "Member 'UTutorialWindow_C::IconTextButton' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, Title) == 0x000410, "Member 'UTutorialWindow_C::Title' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, OnRequestRetry) == 0x000418, "Member 'UTutorialWindow_C::OnRequestRetry' has a wrong offset!");

}

