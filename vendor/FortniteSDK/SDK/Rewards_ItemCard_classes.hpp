#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rewards_ItemCard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "Slate_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Rewards_ItemCard.Rewards_ItemCard_C
// 0x0140 (0x0350 - 0x0210)
class URewards_ItemCard_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPopInPrimary;                                  // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimPopIn;                                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         ButtonInspect;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCardL;                                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCardM;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OutpostStorageMessage;                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxLargeCard;                                 // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxDropShadow;                                 // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         SlideStartTime;                                    // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3940[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnSlideAnimationFinished;                          // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              SlideStartAlignment;                               // 0x0278(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SlideTargetAlignment;                              // 0x0280(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SlideAnimationHandle;                              // 0x0288(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         SlideAnimationDuration;                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideStartScale;                                   // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideTargetScale;                                  // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               SlideStartAnchors;                                 // 0x029C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FAnchors                               SlideTargetAnchors;                                // 0x02AC(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         SlideStartOffset;                                  // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideTargetOffset;                                 // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideStartAngle;                                   // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SlideTargetAngle;                                  // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3941[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnInspectClicked;                                  // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnResizeAnimationFinished;                         // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              SlideStartTranslation;                             // 0x02F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SlideTargetTranslation;                            // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnPopInAnimationFinished;                          // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                              ItemToRepresent;                                   // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 CurrentCard;                                       // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsResizing;                                        // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3942[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ResizeDuration;                                    // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResizeStartTime;                                   // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3943[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ResizeHandle;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         ResizeTargetScale;                                 // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResizeStartScale;                                  // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropShadowTargetDepth;                             // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropShadowStartDepth;                              // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropShadowPadding;                                 // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSlideAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard);
	void OnInspectClicked__DelegateSignature(class URewards_ItemCard_C* Card);
	void OnResizeAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard);
	void OnPopInAnimationFinished__DelegateSignature();
	void ExecuteUbergraph_Rewards_ItemCard(int32 EntryPoint);
	void Construct();
	void BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void InitDesignView();
	void SetItemToRepresent(class UFortItem* Item);
	void TickSlideAnimation();
	void PlaySlideAnimation(const struct FVector2D& TargetAlignment, const struct FAnchors& TargetAnchors, float TargetScale, float TargetOffset, float TargetAngle, float Duration, float StaggerDelay, const struct FVector2D& TargetTranslation);
	void EndSlideAnimation();
	void StartSlideAnimation();
	void PlayScaleAnimation(float TargetScale, float Duration, float DropShadowDepth);
	void TickScaleAnimation();
	void SetInspectAction();
	void HandlePopInAnimationFinished();
	void GetItemToRepresent(class UFortItem** Param_ItemToRepresent);
	struct FVector2D GetCardSize();
	void SizeDown(float Duration, float Delay, float DropShadowDepth);
	void TickResizeAnimation();
	void SizeUp(float Duration, float Delay, float DropShadowDepth);
	void StartResizeAnimation();
	void ShowDropShadow(float ShadowDepth);
	void HideDropShadow();
	void SetDropShadowDepth(float ShadowDepth);
	void SetDropShadowSize();
	void InitDropShadow();
	void GetDropShadowDepth(float* DropShadowDepth);
	void PlayPrimaryPopInAnimation();
	void PlaySecondaryPopInAnimation();
	void SetTransparent();
	void SkipPopInAnimation();
	void SetOpaque();
	void SetOutpostInventoryNotification(bool ShouldShow);
	void SetQuantityOverride(int32 QuantityOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Rewards_ItemCard_C">();
	}
	static class URewards_ItemCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewards_ItemCard_C>();
	}
};
static_assert(alignof(URewards_ItemCard_C) == 0x000008, "Wrong alignment on URewards_ItemCard_C");
static_assert(sizeof(URewards_ItemCard_C) == 0x000350, "Wrong size on URewards_ItemCard_C");
static_assert(offsetof(URewards_ItemCard_C, UberGraphFrame) == 0x000210, "Member 'URewards_ItemCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, AnimPopInPrimary) == 0x000218, "Member 'URewards_ItemCard_C::AnimPopInPrimary' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, AnimPopIn) == 0x000220, "Member 'URewards_ItemCard_C::AnimPopIn' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ButtonInspect) == 0x000228, "Member 'URewards_ItemCard_C::ButtonInspect' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, CommonBorder_0) == 0x000230, "Member 'URewards_ItemCard_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ItemCardL) == 0x000238, "Member 'URewards_ItemCard_C::ItemCardL' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ItemCardM) == 0x000240, "Member 'URewards_ItemCard_C::ItemCardM' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, OutpostStorageMessage) == 0x000248, "Member 'URewards_ItemCard_C::OutpostStorageMessage' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ScaleBoxLargeCard) == 0x000250, "Member 'URewards_ItemCard_C::ScaleBoxLargeCard' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SizeBoxDropShadow) == 0x000258, "Member 'URewards_ItemCard_C::SizeBoxDropShadow' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideStartTime) == 0x000260, "Member 'URewards_ItemCard_C::SlideStartTime' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, OnSlideAnimationFinished) == 0x000268, "Member 'URewards_ItemCard_C::OnSlideAnimationFinished' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideStartAlignment) == 0x000278, "Member 'URewards_ItemCard_C::SlideStartAlignment' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideTargetAlignment) == 0x000280, "Member 'URewards_ItemCard_C::SlideTargetAlignment' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideAnimationHandle) == 0x000288, "Member 'URewards_ItemCard_C::SlideAnimationHandle' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideAnimationDuration) == 0x000290, "Member 'URewards_ItemCard_C::SlideAnimationDuration' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideStartScale) == 0x000294, "Member 'URewards_ItemCard_C::SlideStartScale' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideTargetScale) == 0x000298, "Member 'URewards_ItemCard_C::SlideTargetScale' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideStartAnchors) == 0x00029C, "Member 'URewards_ItemCard_C::SlideStartAnchors' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideTargetAnchors) == 0x0002AC, "Member 'URewards_ItemCard_C::SlideTargetAnchors' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideStartOffset) == 0x0002BC, "Member 'URewards_ItemCard_C::SlideStartOffset' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideTargetOffset) == 0x0002C0, "Member 'URewards_ItemCard_C::SlideTargetOffset' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideStartAngle) == 0x0002C4, "Member 'URewards_ItemCard_C::SlideStartAngle' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideTargetAngle) == 0x0002C8, "Member 'URewards_ItemCard_C::SlideTargetAngle' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, OnInspectClicked) == 0x0002D0, "Member 'URewards_ItemCard_C::OnInspectClicked' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, OnResizeAnimationFinished) == 0x0002E0, "Member 'URewards_ItemCard_C::OnResizeAnimationFinished' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideStartTranslation) == 0x0002F0, "Member 'URewards_ItemCard_C::SlideStartTranslation' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, SlideTargetTranslation) == 0x0002F8, "Member 'URewards_ItemCard_C::SlideTargetTranslation' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, OnPopInAnimationFinished) == 0x000300, "Member 'URewards_ItemCard_C::OnPopInAnimationFinished' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ItemToRepresent) == 0x000310, "Member 'URewards_ItemCard_C::ItemToRepresent' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, CurrentCard) == 0x000318, "Member 'URewards_ItemCard_C::CurrentCard' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, IsResizing) == 0x000320, "Member 'URewards_ItemCard_C::IsResizing' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ResizeDuration) == 0x000324, "Member 'URewards_ItemCard_C::ResizeDuration' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ResizeStartTime) == 0x000328, "Member 'URewards_ItemCard_C::ResizeStartTime' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ResizeHandle) == 0x000330, "Member 'URewards_ItemCard_C::ResizeHandle' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ResizeTargetScale) == 0x000338, "Member 'URewards_ItemCard_C::ResizeTargetScale' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, ResizeStartScale) == 0x00033C, "Member 'URewards_ItemCard_C::ResizeStartScale' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, DropShadowTargetDepth) == 0x000340, "Member 'URewards_ItemCard_C::DropShadowTargetDepth' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, DropShadowStartDepth) == 0x000344, "Member 'URewards_ItemCard_C::DropShadowStartDepth' has a wrong offset!");
static_assert(offsetof(URewards_ItemCard_C, DropShadowPadding) == 0x000348, "Member 'URewards_ItemCard_C::DropShadowPadding' has a wrong offset!");

}

