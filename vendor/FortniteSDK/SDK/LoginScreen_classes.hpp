#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "Account_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
// 0x00D0 (0x04E0 - 0x0410)
class ULoginScreen_C final : public UFortUIStateWidget_Login
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          BackBorder;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      BackButton;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*                ConsoleProfileWidget;                              // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     LoginFlowStack;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      Widget_BuildWatermark;                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*      FrontEnd_Music_Controller;                         // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusWidget_C*                        StatusWindow;                                      // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USignInWidget_C*                        SignInWindow;                                      // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                      AccountLinkWindow;                                 // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLoginMenuVisible;                                 // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_246A[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULoginResultWIdget_C*                   LoginResultWindow;                                 // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEulaWidget_C*                          EulaWindow;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BenchmarkDialogTitle;                              // 0x0478(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   BenchmarkDialogMessage;                            // 0x0490(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                LoginMenuWidget;                                   // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplashScreenWidget_C*                  SplashScreenWindow;                                // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHealthWarningWidget_C*                 HealthWarningWindow;                               // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayedBeforeSelect_C*                  PlayedBeforeWindow;                                // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoginCredentialSelect_C*               LoginCredentialSelect;                             // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNewAccountWarning_C*                   NewAccountWarningWidget;                           // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URedirectToEpicAccount_C*               RedirectToEpicAccountWidget;                       // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoginScreen(int32 EntryPoint);
	void HandleEpicAccountForward(EFortLoginAccountType Platform);
	void HandleCredentialSelected(EFortLoginAccountType ChosenCredential);
	void HandleNewAccountCreation();
	void HandleEpicAccountSelected();
	void TempBackEvent(class UCommonButton* Button);
	void HandlePlayedBeforeSelected(bool PlayedBefore);
	void OnWebLoginClosed();
	void OnWebLoginDisplay(class UWidget* WebWidget);
	void OnShowHealthWarning();
	void Event_Closed_MOTD();
	void OnLoggedOutWithError(const class FText& ErrorText);
	void HandleLoggedOutErrorDismissed();
	void OnShowLoginMessage(bool bShow, const class FText& Tile, const class FText& Body);
	void OnPostLoginLogoutComplete(const class FText& Reason);
	void OnNeedsPurchaseOrAccountLinking(bool bLinkedAccountNeedsPurchase);
	void HandleViewOnlyClose();
	void AccountLinking_ViewEula();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnLogoutComplete();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnSplashScreenClosed();
	void AccountLinking_RequestAutoLogin();
	void AccountLinking_RequestSignIn();
	void AccountLinking_LinkingFailed(const class FText& FailReason);
	void AccountLinking_PopStatus();
	void AccountLinking_PushStatus(const class FText& StatusText);
	void HandlerBenchmarkFlow();
	void HandleResultConfirmed();
	void HandleEulaResponse(bool Accepted);
	void OnPatchingComplete(bool bProceed);
	void OnEulaAvailable(const class FText& EulaText);
	void OnLoginSuceeded();
	void OnLoginFailed(const class FText& Reason);
	void HandleOnStartLogin(const class FString& LoginEmail, const class FString& LoginPassword, EExternalAccountType Account_Type);
	void OnExitState(EFortUIState NextUIState);
	void OnEnterState(EFortUIState PreviousUIState);
	void DialogResult_B952A8754B3836D2151B4981F531542E(EFortDialogResult Result, class FName ResultName);
	void ShowSignInWindow(bool DirectSignin);
	void ShowStatusWindow(const class FText& StatusText);
	void ShowAccountLinkingWindow(bool InLinkedAccountNeedsPurchase);
	void UpdateStatusTitle(const class FText& Title);
	void ToggleLoginMenu();
	void ShowResultWindow(const class FText& Title, const class FText& Description, bool bShowError, bool bLoggedOut);
	void SetResultTitle(const class FText& Title, bool bShowError);
	void SetResultsDescription(const class FText& Description);
	void ShowEulaWindow(const class FText& Text, bool ViewOnly);
	void ShouldShowBenchmark(bool* Return_Value);
	void RunBenchmark();
	void SkipBenchmark();
	struct FEventReply OnMouseButtonUp_MenuBorder(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	class UWidget* GetLoginMenu();
	void ShowSplashScreen();
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	void RollbackToSplashScreen();
	void HideNonSplashScreenContent();
	void EmptyLoginStack();
	void CheckSkipSplashScreen();
	void SafePopContent();
	void ShowHealthWarning();
	void CloseWebLogin(bool* bWasClosed);
	void DismissWebLogin();
	void ShowExternalLogin(class UWidget* NativeWidget);
	void ShowPlayedBeforeSelect();
	void ShowLoginCredentialSelect();
	void ShowRedirectToEpicAccount(EFortLoginAccountType LoginType);
	void ShowNewAccountWarningModal(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginScreen_C">();
	}
	static class ULoginScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginScreen_C>();
	}
};
static_assert(alignof(ULoginScreen_C) == 0x000008, "Wrong alignment on ULoginScreen_C");
static_assert(sizeof(ULoginScreen_C) == 0x0004E0, "Wrong size on ULoginScreen_C");
static_assert(offsetof(ULoginScreen_C, UberGraphFrame) == 0x000410, "Member 'ULoginScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, BackBorder) == 0x000418, "Member 'ULoginScreen_C::BackBorder' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, BackButton) == 0x000420, "Member 'ULoginScreen_C::BackButton' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, ConsoleProfileWidget) == 0x000428, "Member 'ULoginScreen_C::ConsoleProfileWidget' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, LoginFlowStack) == 0x000430, "Member 'ULoginScreen_C::LoginFlowStack' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, Widget_BuildWatermark) == 0x000438, "Member 'ULoginScreen_C::Widget_BuildWatermark' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, FrontEnd_Music_Controller) == 0x000440, "Member 'ULoginScreen_C::FrontEnd_Music_Controller' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, StatusWindow) == 0x000448, "Member 'ULoginScreen_C::StatusWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, SignInWindow) == 0x000450, "Member 'ULoginScreen_C::SignInWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, AccountLinkWindow) == 0x000458, "Member 'ULoginScreen_C::AccountLinkWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, bLoginMenuVisible) == 0x000460, "Member 'ULoginScreen_C::bLoginMenuVisible' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, LoginResultWindow) == 0x000468, "Member 'ULoginScreen_C::LoginResultWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, EulaWindow) == 0x000470, "Member 'ULoginScreen_C::EulaWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, BenchmarkDialogTitle) == 0x000478, "Member 'ULoginScreen_C::BenchmarkDialogTitle' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, BenchmarkDialogMessage) == 0x000490, "Member 'ULoginScreen_C::BenchmarkDialogMessage' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, LoginMenuWidget) == 0x0004A8, "Member 'ULoginScreen_C::LoginMenuWidget' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, SplashScreenWindow) == 0x0004B0, "Member 'ULoginScreen_C::SplashScreenWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, HealthWarningWindow) == 0x0004B8, "Member 'ULoginScreen_C::HealthWarningWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, PlayedBeforeWindow) == 0x0004C0, "Member 'ULoginScreen_C::PlayedBeforeWindow' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, LoginCredentialSelect) == 0x0004C8, "Member 'ULoginScreen_C::LoginCredentialSelect' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, NewAccountWarningWidget) == 0x0004D0, "Member 'ULoginScreen_C::NewAccountWarningWidget' has a wrong offset!");
static_assert(offsetof(ULoginScreen_C, RedirectToEpicAccountWidget) == 0x0004D8, "Member 'ULoginScreen_C::RedirectToEpicAccountWidget' has a wrong offset!");

}

