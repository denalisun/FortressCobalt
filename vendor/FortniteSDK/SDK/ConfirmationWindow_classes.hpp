#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConfirmationWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
// 0x0288 (0x0670 - 0x03E8)
class UConfirmationWindow_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_2515[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonBox;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ContentSwitcher;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DescriptionScroll;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HoverDescription;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             LeftOptionalWidget;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox_NUI;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MainContentHorizontalBox;                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             OptionalWidget;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RootOverlay;                                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SelectableConfirmButtons;                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WaitThrobber;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_2516[0x8];                                     // 0x0468(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDialogDescription_NUI             ConfirmationDescription;                           // 0x0470(0x0170)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UIconTextButton_C*>              ConfirmButtons;                                    // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UIconTextButton_C*                      DeclineButton;                                     // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ResultNames;                                       // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bShowingConfirmation;                              // 0x0608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2517[0x3];                                     // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                ButtonBoxPadding;                                  // 0x060C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                                ButtonBoxPadding_VerticalBox;                      // 0x061C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_2518[0x4];                                     // 0x062C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           HoverTexts;                                        // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                           ButtonIconColor;                                   // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   WaitThrobberColorParamName;                        // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WaitThrobberColor;                                 // 0x0658(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle  WaitingForLatentActionHandle;                      // 0x0668(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bShowLightBoxAnims;                                // 0x066C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShouldTriggerCameraModeOnClose;                   // 0x066D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint);
	void OnActivated();
	void PreConstruct(bool IsDesignTime);
	void OnBeginOutro();
	void OnBeginIntro();
	void HandleOutroEnded();
	void HandleIntroEnded();
	void Construct();
	void SetDescription(const struct FFortDialogDescription_NUI& NewDescription);
	void Initialize();
	void AddConfirmButtons();
	void AddDeclineButton();
	void DeclineActionClicked(class UCommonButton* Button);
	bool IsSimpleConfirmAction();
	void ConfirmActionClicked(class UCommonButton* Button);
	bool HasAnyConfirmAction();
	void AddSingleConfirmButton(const struct FConfirmationDialogAction& ConfirmDialogAction, bool UseInputAction);
	struct FDataTableRowHandle GetInputAction(class FName RowName, bool UseInputAction);
	void GetResultName(class UIconTextButton_C* ConfirmButton, class FName* ResultName);
	void KillCurrentConfirmation();
	void Deinitialize();
	void SetupMainIcon();
	void SetupTitleAndDescription();
	void SetupLeft();
	void Set_Hover_Description(class UCommonButton* Button_to_Hover);
	void GetLatentActionWaitHandle(struct FFortDialogExternalLatentActionHandle* LatentActionHandle);
	void StopWaitingForLatentAction();
	void OnWaitForExternalLatentAction(const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void ClickButtonIfBot();
	void SetupNonInteractiveContent();
	void SetupLeftAdditionalContent();
	void SetupAdditionalContent();
	void CloseConfirmation();
	void CenterFirstButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConfirmationWindow_C">();
	}
	static class UConfirmationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfirmationWindow_C>();
	}
};
static_assert(alignof(UConfirmationWindow_C) == 0x000010, "Wrong alignment on UConfirmationWindow_C");
static_assert(sizeof(UConfirmationWindow_C) == 0x000670, "Wrong size on UConfirmationWindow_C");
static_assert(offsetof(UConfirmationWindow_C, UberGraphFrame) == 0x0003F0, "Member 'UConfirmationWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ButtonBox) == 0x0003F8, "Member 'UConfirmationWindow_C::ButtonBox' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ContentSwitcher) == 0x000400, "Member 'UConfirmationWindow_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, Description) == 0x000408, "Member 'UConfirmationWindow_C::Description' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, DescriptionScroll) == 0x000410, "Member 'UConfirmationWindow_C::DescriptionScroll' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, HoverDescription) == 0x000418, "Member 'UConfirmationWindow_C::HoverDescription' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, LeftOptionalWidget) == 0x000420, "Member 'UConfirmationWindow_C::LeftOptionalWidget' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, Lightbox_NUI) == 0x000428, "Member 'UConfirmationWindow_C::Lightbox_NUI' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, MainContentHorizontalBox) == 0x000430, "Member 'UConfirmationWindow_C::MainContentHorizontalBox' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, MainIcon) == 0x000438, "Member 'UConfirmationWindow_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, OptionalWidget) == 0x000440, "Member 'UConfirmationWindow_C::OptionalWidget' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, RootOverlay) == 0x000448, "Member 'UConfirmationWindow_C::RootOverlay' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, SelectableConfirmButtons) == 0x000450, "Member 'UConfirmationWindow_C::SelectableConfirmButtons' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, Title) == 0x000458, "Member 'UConfirmationWindow_C::Title' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, WaitThrobber) == 0x000460, "Member 'UConfirmationWindow_C::WaitThrobber' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ConfirmationDescription) == 0x000470, "Member 'UConfirmationWindow_C::ConfirmationDescription' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ConfirmButtons) == 0x0005E0, "Member 'UConfirmationWindow_C::ConfirmButtons' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, DeclineButton) == 0x0005F0, "Member 'UConfirmationWindow_C::DeclineButton' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ResultNames) == 0x0005F8, "Member 'UConfirmationWindow_C::ResultNames' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, bShowingConfirmation) == 0x000608, "Member 'UConfirmationWindow_C::bShowingConfirmation' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ButtonBoxPadding) == 0x00060C, "Member 'UConfirmationWindow_C::ButtonBoxPadding' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ButtonBoxPadding_VerticalBox) == 0x00061C, "Member 'UConfirmationWindow_C::ButtonBoxPadding_VerticalBox' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, HoverTexts) == 0x000630, "Member 'UConfirmationWindow_C::HoverTexts' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ButtonIconColor) == 0x000640, "Member 'UConfirmationWindow_C::ButtonIconColor' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, WaitThrobberColorParamName) == 0x000650, "Member 'UConfirmationWindow_C::WaitThrobberColorParamName' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, WaitThrobberColor) == 0x000658, "Member 'UConfirmationWindow_C::WaitThrobberColor' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, WaitingForLatentActionHandle) == 0x000668, "Member 'UConfirmationWindow_C::WaitingForLatentActionHandle' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, bShowLightBoxAnims) == 0x00066C, "Member 'UConfirmationWindow_C::bShowLightBoxAnims' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, bShouldTriggerCameraModeOnClose) == 0x00066D, "Member 'UConfirmationWindow_C::bShouldTriggerCameraModeOnClose' has a wrong offset!");

}

