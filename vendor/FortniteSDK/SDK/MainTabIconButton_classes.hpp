#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabIconButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainTabIconButton.MainTabIconButton_C
// 0x0110 (0x0890 - 0x0780)
class UMainTabIconButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimatedPulse;                                     // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimateIn;                                         // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainTabTutorialBangWrapper_C*          BangWrapper;                                       // 0x0798(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x07A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ContentHB;                                         // 0x07A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageGlow;                                         // 0x07B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTab;                                          // 0x07B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x07C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x07C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x07E0(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          UseText;                                           // 0x0858(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3189[0x3];                                     // 0x0859(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SelectedIconTint;                                  // 0x085C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DeselectedIconTint;                                // 0x086C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredIconTint;                                   // 0x087C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBangEnabled;                                      // 0x088C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AllowStyleChange;                                  // 0x088D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MainTabIconButton(int32 EntryPoint);
	void Handle_StopTabCallout();
	void HandleTabDialogCLosed();
	void HandleTabAnimateInFinished();
	void HandleTabAdded();
	void OnCurrentTextStyleChanged();
	void OnUnhovered();
	void OnHovered();
	void Construct();
	void OnDeselected();
	void OnSelected();
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void Set_Text(const class FText& Param_ButtonText);
	void Set_Icon(const struct FSlateBrush& Param_IconBrush);
	void ShowText();
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void Update_Bang_State(bool Param_bBangEnabled, EFortUIFeature UIFeature, const class FText& UIFeatureRevealText);
	void SetTutorialNameID(class FName InTutorialNameID);
	void TabAnimateInFinished();
	void TabDialogClosed();
	void TabAdded();
	void StopTabCallout();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainTabIconButton_C">();
	}
	static class UMainTabIconButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainTabIconButton_C>();
	}
};
static_assert(alignof(UMainTabIconButton_C) == 0x000008, "Wrong alignment on UMainTabIconButton_C");
static_assert(sizeof(UMainTabIconButton_C) == 0x000890, "Wrong size on UMainTabIconButton_C");
static_assert(offsetof(UMainTabIconButton_C, UberGraphFrame) == 0x000780, "Member 'UMainTabIconButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, AnimatedPulse) == 0x000788, "Member 'UMainTabIconButton_C::AnimatedPulse' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, AnimateIn) == 0x000790, "Member 'UMainTabIconButton_C::AnimateIn' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, BangWrapper) == 0x000798, "Member 'UMainTabIconButton_C::BangWrapper' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, CenterButtonTextWidget) == 0x0007A0, "Member 'UMainTabIconButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, ContentHB) == 0x0007A8, "Member 'UMainTabIconButton_C::ContentHB' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, ImageGlow) == 0x0007B0, "Member 'UMainTabIconButton_C::ImageGlow' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, ImageTab) == 0x0007B8, "Member 'UMainTabIconButton_C::ImageTab' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, LeftSideImage) == 0x0007C0, "Member 'UMainTabIconButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, ButtonText) == 0x0007C8, "Member 'UMainTabIconButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, IconBrush) == 0x0007E0, "Member 'UMainTabIconButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, UseText) == 0x000858, "Member 'UMainTabIconButton_C::UseText' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, SelectedIconTint) == 0x00085C, "Member 'UMainTabIconButton_C::SelectedIconTint' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, DeselectedIconTint) == 0x00086C, "Member 'UMainTabIconButton_C::DeselectedIconTint' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, HoveredIconTint) == 0x00087C, "Member 'UMainTabIconButton_C::HoveredIconTint' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, bBangEnabled) == 0x00088C, "Member 'UMainTabIconButton_C::bBangEnabled' has a wrong offset!");
static_assert(offsetof(UMainTabIconButton_C, AllowStyleChange) == 0x00088D, "Member 'UMainTabIconButton_C::AllowStyleChange' has a wrong offset!");

}

