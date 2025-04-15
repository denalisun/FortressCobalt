#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Main

#include "Basic.hpp"

#include "FrontendCamera_Main_classes.hpp"
#include "FrontendCamera_Main_parameters.hpp"


namespace SDK
{

// Function FrontendCamera_Main.FrontendCamera_Main_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontendCamera_Main_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Main_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontendCamera_Main.FrontendCamera_Main_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontendCamera_Main_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Main_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontendCamera_Main.FrontendCamera_Main_C.ExecuteUbergraph_FrontendCamera_Main
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontendCamera_Main_C::ExecuteUbergraph_FrontendCamera_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_Main_C", "ExecuteUbergraph_FrontendCamera_Main");

	Params::FrontendCamera_Main_C_ExecuteUbergraph_FrontendCamera_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

