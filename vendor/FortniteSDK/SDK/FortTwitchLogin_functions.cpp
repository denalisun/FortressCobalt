#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortTwitchLogin

#include "Basic.hpp"

#include "FortTwitchLogin_classes.hpp"
#include "FortTwitchLogin_parameters.hpp"


namespace SDK
{

// Function FortTwitchLogin.FortTwitchLogin_C.OnRequestToolTipChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewTooltipText                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UFortTwitchLogin_C::OnRequestToolTipChange__DelegateSignature(const class FText& NewTooltipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "OnRequestToolTipChange__DelegateSignature");

	Params::FortTwitchLogin_C_OnRequestToolTipChange__DelegateSignature Parms{};

	Parms.NewTooltipText = std::move(NewTooltipText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.ExecuteUbergraph_FortTwitchLogin
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::ExecuteUbergraph_FortTwitchLogin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "ExecuteUbergraph_FortTwitchLogin");

	Params::FortTwitchLogin_C_ExecuteUbergraph_FortTwitchLogin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnShowLoginError
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             ErrorTitle                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             ErrorMessage                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFortTwitchLogin_C::OnShowLoginError(const class FText& ErrorTitle, const class FText& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "OnShowLoginError");

	Params::FortTwitchLogin_C_OnShowLoginError Parms{};

	Parms.ErrorTitle = std::move(ErrorTitle);
	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature");

	Params::FortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");

	Params::FortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	Params::FortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature");

	Params::FortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature");

	Params::FortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature");

	Params::FortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginFlowModalDismissed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortTwitchLoginModalWidget*      Modal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget* Modal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "OnLoginFlowModalDismissed");

	Params::FortTwitchLogin_C_OnLoginFlowModalDismissed Parms{};

	Parms.Modal = Modal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnCancelButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UFortTwitchLogin_C::OnCancelButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "OnCancelButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginFlowModalCreated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortTwitchLoginModalWidget*      Modal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget* Modal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "OnLoginFlowModalCreated");

	Params::FortTwitchLogin_C_OnLoginFlowModalCreated Parms{};

	Parms.Modal = Modal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bLoggedIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           AccountName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::OnLoginStatusChanged(bool bLoggedIn, const class FString& AccountName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "OnLoginStatusChanged");

	Params::FortTwitchLogin_C_OnLoginStatusChanged Parms{};

	Parms.bLoggedIn = bLoggedIn;
	Parms.AccountName = std::move(AccountName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.Initialize Data
// (BlueprintCallable, BlueprintEvent)

void UFortTwitchLogin_C::Initialize_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "Initialize Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortTwitchLogin.FortTwitchLogin_C.DialogResult_5994C6BA48DC4D282A16D7BA54384F79
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortTwitchLogin_C::DialogResult_5994C6BA48DC4D282A16D7BA54384F79(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "DialogResult_5994C6BA48DC4D282A16D7BA54384F79");

	Params::FortTwitchLogin_C_DialogResult_5994C6BA48DC4D282A16D7BA54384F79 Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FortTwitchLogin.FortTwitchLogin_C.CenterOnWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UFortTwitchLogin_C::CenterOnWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "CenterOnWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortTwitchLogin.FortTwitchLogin_C.CenterActiveAuthButton
// (Public, BlueprintCallable, BlueprintEvent)

void UFortTwitchLogin_C::CenterActiveAuthButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "CenterActiveAuthButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortTwitchLogin.FortTwitchLogin_C.Fire SignIn Analytic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortTwitchLogin_C::Fire_SignIn_Analytic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "Fire SignIn Analytic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortTwitchLogin.FortTwitchLogin_C.Fire Logged In Analytic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortTwitchLogin_C::Fire_Logged_In_Analytic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "Fire Logged In Analytic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FortTwitchLogin.FortTwitchLogin_C.Build Player Name Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute     ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FFortAnalyticsEventAttribute UFortTwitchLogin_C::Build_Player_Name_Analytic_Attribute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "Build Player Name Analytic Attribute");

	Params::FortTwitchLogin_C_Build_Player_Name_Analytic_Attribute Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FortTwitchLogin.FortTwitchLogin_C.Build Twitch Name Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute     ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FFortAnalyticsEventAttribute UFortTwitchLogin_C::Build_Twitch_Name_Analytic_Attribute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "Build Twitch Name Analytic Attribute");

	Params::FortTwitchLogin_C_Build_Twitch_Name_Analytic_Attribute Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FortTwitchLogin.FortTwitchLogin_C.Build Player Id Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttribute     ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FFortAnalyticsEventAttribute UFortTwitchLogin_C::Build_Player_Id_Analytic_Attribute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTwitchLogin_C", "Build Player Id Analytic Attribute");

	Params::FortTwitchLogin_C_Build_Player_Id_Analytic_Attribute Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

