#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RedirectToEpicAccount

#include "Basic.hpp"

#include "RedirectToEpicAccount_classes.hpp"
#include "RedirectToEpicAccount_parameters.hpp"


namespace SDK
{

// Function RedirectToEpicAccount.RedirectToEpicAccount_C.ExecuteUbergraph_RedirectToEpicAccount
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedirectToEpicAccount_C::ExecuteUbergraph_RedirectToEpicAccount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedirectToEpicAccount_C", "ExecuteUbergraph_RedirectToEpicAccount");

	Params::RedirectToEpicAccount_C_ExecuteUbergraph_RedirectToEpicAccount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RedirectToEpicAccount.RedirectToEpicAccount_C.OnSetSwitcher
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEpicAccountForwardingEnabled                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URedirectToEpicAccount_C::OnSetSwitcher(bool bEpicAccountForwardingEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedirectToEpicAccount_C", "OnSetSwitcher");

	Params::RedirectToEpicAccount_C_OnSetSwitcher Parms{};

	Parms.bEpicAccountForwardingEnabled = bEpicAccountForwardingEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RedirectToEpicAccount.RedirectToEpicAccount_C.BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedirectToEpicAccount_C::BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedirectToEpicAccount_C", "BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::RedirectToEpicAccount_C_BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}

