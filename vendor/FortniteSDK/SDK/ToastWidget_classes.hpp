#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ToastWidget.ToastWidget_C
// 0x0070 (0x0280 - 0x0210)
class UToastWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_MainWidget;                           // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ImageBorder;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NotificationImage;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      OpenButton;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotification*                    ToastNotification;                                 // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationFinishedDelay;                            // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24E9[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnFinishedToast;                                   // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           AnimationDelayTimer;                               // 0x0278(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnFinishedToast__DelegateSignature();
	void ExecuteUbergraph_ToastWidget(int32 EntryPoint);
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void HandleAnimationDelay();
	void HandleOutroFinished();
	void HandleIntroFinished();
	void Construct();
	void SetToast(class UFortUINotification* Toast);
	void ShowText(const class FText& Text, class UCommonTextBlock* TextBlock);
	void StartIntro();
	ESlateVisibility GetOpenButtonVisibility();
	void SetImage();
	void ApplyAdditionalStyling();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastWidget_C">();
	}
	static class UToastWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastWidget_C>();
	}
};
static_assert(alignof(UToastWidget_C) == 0x000008, "Wrong alignment on UToastWidget_C");
static_assert(sizeof(UToastWidget_C) == 0x000280, "Wrong size on UToastWidget_C");
static_assert(offsetof(UToastWidget_C, UberGraphFrame) == 0x000210, "Member 'UToastWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, Outro) == 0x000218, "Member 'UToastWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, Intro) == 0x000220, "Member 'UToastWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, CommonBorder_MainWidget) == 0x000228, "Member 'UToastWidget_C::CommonBorder_MainWidget' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, Description) == 0x000230, "Member 'UToastWidget_C::Description' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, ImageBorder) == 0x000238, "Member 'UToastWidget_C::ImageBorder' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, NotificationImage) == 0x000240, "Member 'UToastWidget_C::NotificationImage' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, OpenButton) == 0x000248, "Member 'UToastWidget_C::OpenButton' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, Title) == 0x000250, "Member 'UToastWidget_C::Title' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, ToastNotification) == 0x000258, "Member 'UToastWidget_C::ToastNotification' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, AnimationFinishedDelay) == 0x000260, "Member 'UToastWidget_C::AnimationFinishedDelay' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, OnFinishedToast) == 0x000268, "Member 'UToastWidget_C::OnFinishedToast' has a wrong offset!");
static_assert(offsetof(UToastWidget_C, AnimationDelayTimer) == 0x000278, "Member 'UToastWidget_C::AnimationDelayTimer' has a wrong offset!");

}

