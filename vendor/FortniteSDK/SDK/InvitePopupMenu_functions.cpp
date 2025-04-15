#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InvitePopupMenu

#include "Basic.hpp"

#include "InvitePopupMenu_classes.hpp"
#include "InvitePopupMenu_parameters.hpp"


namespace SDK
{

// Function InvitePopupMenu.InvitePopupMenu_C.ExecuteUbergraph_InvitePopupMenu
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::ExecuteUbergraph_InvitePopupMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "ExecuteUbergraph_InvitePopupMenu");

	Params::InvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InvitePopupMenu.InvitePopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UInvitePopupMenu_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature");

	Params::InvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature");

	Params::InvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");

	Params::InvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InvitePopupMenu.InvitePopupMenu_C.CanInviteToParty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_CanInviteToParty                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInvitePopupMenu_C::CanInviteToParty(bool* Param_CanInviteToParty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "CanInviteToParty");

	Params::InvitePopupMenu_C_CanInviteToParty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CanInviteToParty != nullptr)
		*Param_CanInviteToParty = Parms.Param_CanInviteToParty;
}


// Function InvitePopupMenu.InvitePopupMenu_C.CanAddAsFriend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bCanFriendPlayer                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInvitePopupMenu_C::CanAddAsFriend(bool* bCanFriendPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "CanAddAsFriend");

	Params::InvitePopupMenu_C_CanAddAsFriend Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCanFriendPlayer != nullptr)
		*bCanFriendPlayer = Parms.bCanFriendPlayer;
}


// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerAsFriend
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInvitePopupMenu_C::InvitePlayerAsFriend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "InvitePlayerAsFriend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerToParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInvitePopupMenu_C::InvitePlayerToParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "InvitePlayerToParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InvitePopupMenu.InvitePopupMenu_C.InitializeValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 InUniqueNetId                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 InConsoleNetId                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                             InPlayerName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UInvitePopupMenu_C::InitializeValues(const struct FUniqueNetIdRepl& InUniqueNetId, const struct FUniqueNetIdRepl& InConsoleNetId, const class FText& InPlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "InitializeValues");

	Params::InvitePopupMenu_C_InitializeValues Parms{};

	Parms.InUniqueNetId = std::move(InUniqueNetId);
	Parms.InConsoleNetId = std::move(InConsoleNetId);
	Parms.InPlayerName = std::move(InPlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InvitePopupMenu.InvitePopupMenu_C.GetNetId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl                 NetId                                                  (Parm, OutParm, HasGetValueTypeHash)

void UInvitePopupMenu_C::GetNetId(struct FUniqueNetIdRepl* NetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InvitePopupMenu_C", "GetNetId");

	Params::InvitePopupMenu_C_GetNetId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NetId != nullptr)
		*NetId = std::move(Parms.NetId);
}

}

