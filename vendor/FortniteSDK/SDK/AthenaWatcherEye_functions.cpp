#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaWatcherEye

#include "Basic.hpp"

#include "AthenaWatcherEye_classes.hpp"
#include "AthenaWatcherEye_parameters.hpp"


namespace SDK
{

// Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWatcherEye_C::ExecuteUbergraph_AthenaWatcherEye(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "ExecuteUbergraph_AthenaWatcherEye");

	Params::AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::ManySpectatorsAdded_Watcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "ManySpectatorsAdded_Watcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ManySpectatorsJoining                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaWatcherEye_C::Begin_Watcher(bool ManySpectatorsJoining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "Begin_Watcher");

	Params::AthenaWatcherEye_C_Begin_Watcher Parms{};

	Parms.ManySpectatorsJoining = ManySpectatorsJoining;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::End_Watcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "End_Watcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::Hide_Watcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "Hide_Watcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::Show_Watcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "Show_Watcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::SpectatorAdded_Watcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "SpectatorAdded_Watcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher
// (BlueprintCallable, BlueprintEvent)

void UAthenaWatcherEye_C::SpectatorRemoved_Watcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatcherEye_C", "SpectatorRemoved_Watcher");

	UObject::ProcessEvent(Func, nullptr);
}

}

