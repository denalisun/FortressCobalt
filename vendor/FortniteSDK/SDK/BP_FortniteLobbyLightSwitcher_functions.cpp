#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortniteLobbyLightSwitcher

#include "Basic.hpp"

#include "BP_FortniteLobbyLightSwitcher_classes.hpp"
#include "BP_FortniteLobbyLightSwitcher_parameters.hpp"


namespace SDK
{

// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FortniteLobbyLightSwitcher_C::ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "ExecuteUbergraph_BP_FortniteLobbyLightSwitcher");

	Params::BP_FortniteLobbyLightSwitcher_C_ExecuteUbergraph_BP_FortniteLobbyLightSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::DisableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "DisableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::EnableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "EnableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FortniteLobbyLightSwitcher_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FortniteLobbyLightSwitcher_C::SetVisiblityofSceneLighting(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortniteLobbyLightSwitcher_C", "SetVisiblityofSceneLighting");

	Params::BP_FortniteLobbyLightSwitcher_C_SetVisiblityofSceneLighting Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}

}

