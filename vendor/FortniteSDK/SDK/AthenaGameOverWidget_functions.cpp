#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGameOverWidget

#include "Basic.hpp"

#include "AthenaGameOverWidget_classes.hpp"
#include "AthenaGameOverWidget_parameters.hpp"


namespace SDK
{

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.ExecuteUbergraph_AthenaGameOverWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGameOverWidget_C::ExecuteUbergraph_AthenaGameOverWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "ExecuteUbergraph_AthenaGameOverWidget");

	Params::AthenaGameOverWidget_C_ExecuteUbergraph_AthenaGameOverWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaGameOverWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaGameOverWidget_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGameOverWidget_C::BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature");

	Params::AthenaGameOverWidget_C_BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.On Kill Feed Updated
// (BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::On_Kill_Feed_Updated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "On Kill Feed Updated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaGameOverWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaGameOverWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPawnDied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport           DeathReport                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaGameOverWidget_C::OnPawnDied(struct FFortPlayerDeathReport& DeathReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "OnPawnDied");

	Params::AthenaGameOverWidget_C_OnPawnDied Parms{};

	Parms.DeathReport = std::move(DeathReport);

	UObject::ProcessEvent(Func, &Parms);

	DeathReport = std::move(Parms.DeathReport);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlaceChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::OnPlaceChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "OnPlaceChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnViewTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::OnViewTargetChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "OnViewTargetChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.HideExtraStuffForSpectating
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::HideExtraStuffForSpectating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "HideExtraStuffForSpectating");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnWinnerAnnounced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Winner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaGameOverWidget_C::OnWinnerAnnounced(const class FString& Winner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "OnWinnerAnnounced");

	Params::AthenaGameOverWidget_C_OnWinnerAnnounced Parms{};

	Parms.Winner = std::move(Winner);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.HighlightCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HighlightCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGameOverWidget_C::HighlightCountChanged(int32 HighlightCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "HighlightCountChanged");

	Params::AthenaGameOverWidget_C_HighlightCountChanged Parms{};

	Parms.HighlightCount = HighlightCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReturnToLobby
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGameOverWidget_C::Handle_ReturnToLobby(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "Handle_ReturnToLobby");

	Params::AthenaGameOverWidget_C_Handle_ReturnToLobby Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputRefresh
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::InputRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "InputRefresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowNextTeammate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGameOverWidget_C::Handle_FollowNextTeammate(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "Handle_FollowNextTeammate");

	Params::AthenaGameOverWidget_C_Handle_FollowNextTeammate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowPreviousTeammate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGameOverWidget_C::Handle_FollowPreviousTeammate(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "Handle_FollowPreviousTeammate");

	Params::AthenaGameOverWidget_C_Handle_FollowPreviousTeammate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::InputSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "InputSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReportPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGameOverWidget_C::Handle_ReportPlayer(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "Handle_ReportPlayer");

	Params::AthenaGameOverWidget_C_Handle_ReportPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ViewMatchStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGameOverWidget_C::Handle_ViewMatchStats(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "Handle_ViewMatchStats");

	Params::AthenaGameOverWidget_C_Handle_ViewMatchStats Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlayerOrTeamWon
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::OnPlayerOrTeamWon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "OnPlayerOrTeamWon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetKillersName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport           FortPlayerDeathReport                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaGameOverWidget_C::SetKillersName(struct FFortPlayerDeathReport& FortPlayerDeathReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "SetKillersName");

	Params::AthenaGameOverWidget_C_SetKillersName Parms{};

	Parms.FortPlayerDeathReport = std::move(FortPlayerDeathReport);

	UObject::ProcessEvent(Func, &Parms);

	FortPlayerDeathReport = std::move(Parms.FortPlayerDeathReport);
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.CanFollowNextOrPreviousTeammate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAthenaGameOverWidget_C::CanFollowNextOrPreviousTeammate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "CanFollowNextOrPreviousTeammate");

	Params::AthenaGameOverWidget_C_CanFollowNextOrPreviousTeammate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*           ViewModel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGameOverWidget_C::SetViewModel(class UAthenaPlayerViewModel* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGameOverWidget_C", "SetViewModel");

	Params::AthenaGameOverWidget_C_SetViewModel Parms{};

	Parms.ViewModel = ViewModel;

	UObject::ProcessEvent(Func, &Parms);
}

}

