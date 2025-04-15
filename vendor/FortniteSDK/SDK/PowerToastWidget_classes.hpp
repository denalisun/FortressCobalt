#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerToastWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PowerToastWidget.PowerToastWidget_C
// 0x00A8 (0x02F8 - 0x0250)
class UPowerToastWidget_C final : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       LookAtMe;                                          // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BoostedPower;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Power;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineSeparator;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerIconGlow;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TeamMemberPower;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotification*                    ToastNotification;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationFinishedDelay;                            // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24F8[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnFinishedToast;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           AnimationDelayTimer;                               // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          Show_Toast;                                        // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24F9[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SynchronizeTimeoutTimer;                           // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         SynchronizeTimeoutDuration;                        // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinishedToast__DelegateSignature();
	void ExecuteUbergraph_PowerToastWidget(int32 EntryPoint);
	void HandleSynchronizeTimeout();
	void OnTeamMemberFinishedSynchronizing_Event_0(const struct FUniqueNetIdRepl& NewTeamMemberId);
	void BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
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
	void UpdatePowerRating();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PowerToastWidget_C">();
	}
	static class UPowerToastWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPowerToastWidget_C>();
	}
};
static_assert(alignof(UPowerToastWidget_C) == 0x000008, "Wrong alignment on UPowerToastWidget_C");
static_assert(sizeof(UPowerToastWidget_C) == 0x0002F8, "Wrong size on UPowerToastWidget_C");
static_assert(offsetof(UPowerToastWidget_C, UberGraphFrame) == 0x000250, "Member 'UPowerToastWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, LookAtMe) == 0x000258, "Member 'UPowerToastWidget_C::LookAtMe' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Outro) == 0x000260, "Member 'UPowerToastWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Intro) == 0x000268, "Member 'UPowerToastWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, BoostedPower) == 0x000270, "Member 'UPowerToastWidget_C::BoostedPower' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Description) == 0x000278, "Member 'UPowerToastWidget_C::Description' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Image_2) == 0x000280, "Member 'UPowerToastWidget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Image_Power) == 0x000288, "Member 'UPowerToastWidget_C::Image_Power' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, LineSeparator) == 0x000290, "Member 'UPowerToastWidget_C::LineSeparator' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, PlayerBanner) == 0x000298, "Member 'UPowerToastWidget_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, PowerIconGlow) == 0x0002A0, "Member 'UPowerToastWidget_C::PowerIconGlow' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, TeamMemberPower) == 0x0002A8, "Member 'UPowerToastWidget_C::TeamMemberPower' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Title) == 0x0002B0, "Member 'UPowerToastWidget_C::Title' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, ToastNotification) == 0x0002B8, "Member 'UPowerToastWidget_C::ToastNotification' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, AnimationFinishedDelay) == 0x0002C0, "Member 'UPowerToastWidget_C::AnimationFinishedDelay' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, OnFinishedToast) == 0x0002C8, "Member 'UPowerToastWidget_C::OnFinishedToast' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, AnimationDelayTimer) == 0x0002D8, "Member 'UPowerToastWidget_C::AnimationDelayTimer' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Show_Toast) == 0x0002E0, "Member 'UPowerToastWidget_C::Show_Toast' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, SynchronizeTimeoutTimer) == 0x0002E8, "Member 'UPowerToastWidget_C::SynchronizeTimeoutTimer' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, SynchronizeTimeoutDuration) == 0x0002F0, "Member 'UPowerToastWidget_C::SynchronizeTimeoutDuration' has a wrong offset!");

}

