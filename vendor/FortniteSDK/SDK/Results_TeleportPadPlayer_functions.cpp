#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeleportPadPlayer

#include "Basic.hpp"

#include "Results_TeleportPadPlayer_classes.hpp"
#include "Results_TeleportPadPlayer_parameters.hpp"


namespace SDK
{

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::OnMissionStatsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnMissionStatsClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 TargetId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           TargetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnAddFriendClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_OnAddFriendClicked__DelegateSignature Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetName = std::move(TargetName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 TargetId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           TargetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnUpVoteClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_OnUpVoteClicked__DelegateSignature Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetName = std::move(TargetName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_TeleportPadPlayer_C*     TeleportPadPlayer                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "OnTeleportPadIntroFinished__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_OnTeleportPadIntroFinished__DelegateSignature Parms{};

	Parms.TeleportPadPlayer = TeleportPadPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::ExecuteUbergraph_Results_TeleportPadPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "ExecuteUbergraph_Results_TeleportPadPlayer");

	Params::Results_TeleportPadPlayer_C_ExecuteUbergraph_Results_TeleportPadPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_TeleportPadPlayer_C::BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::Results_TeleportPadPlayer_C_BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Outro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Outro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Teleport_Pad_Screen_Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Teleport Pad Screen Intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Outro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Team Score Screen Outro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro
// (BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Team_Score_Screen_Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Team Score Screen Intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UFortUIScoreReport*               InScoreReport                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 InConsoleUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UResults_TeleportPadPlayer_C::Initialize(struct FUniqueNetIdRepl& InUniqueId, class UFortUIScoreReport*& InScoreReport, const struct FUniqueNetIdRepl& InConsoleUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Initialize");

	Params::Results_TeleportPadPlayer_C_Initialize Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InScoreReport = InScoreReport;
	Parms.InConsoleUniqueId = std::move(InConsoleUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	InUniqueId = std::move(Parms.InUniqueId);
	InScoreReport = Parms.InScoreReport;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::SetIsValidPad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "SetIsValidPad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bIsValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::IsValidPad(bool* Param_bIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "IsValidPad");

	Params::Results_TeleportPadPlayer_C_IsValidPad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsValid != nullptr)
		*Param_bIsValid = Parms.Param_bIsValid;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::ThumbsUpPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "ThumbsUpPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsLocalPlayersPad                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeleportPadPlayer_C::IsLocalPlayersPad(bool* bIsLocalPlayersPad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "IsLocalPlayersPad");

	Params::Results_TeleportPadPlayer_C_IsLocalPlayersPad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsLocalPlayersPad != nullptr)
		*bIsLocalPlayersPad = Parms.bIsLocalPlayersPad;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.On_InvitePopupMenuAnchor_GetMenuContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UResults_TeleportPadPlayer_C::On_InvitePopupMenuAnchor_GetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "On_InvitePopupMenuAnchor_GetMenuContent");

	Params::Results_TeleportPadPlayer_C_On_InvitePopupMenuAnchor_GetMenuContent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetInviteButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_TeleportPadPlayer_C::SetInviteButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TeleportPadPlayer_C", "SetInviteButtonVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

