#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardHeaderRowWidget

#include "Basic.hpp"

#include "LeaderboardHeaderRowWidget_classes.hpp"
#include "LeaderboardHeaderRowWidget_parameters.hpp"


namespace SDK
{

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaderboardHeaderRowWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.ExecuteUbergraph_LeaderboardHeaderRowWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardHeaderRowWidget_C::ExecuteUbergraph_LeaderboardHeaderRowWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "ExecuteUbergraph_LeaderboardHeaderRowWidget");

	Params::LeaderboardHeaderRowWidget_C_ExecuteUbergraph_LeaderboardHeaderRowWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.SetStatNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaderboardHeaderRowWidget_C::SetStatNameText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "SetStatNameText");

	Params::LeaderboardHeaderRowWidget_C_SetStatNameText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

