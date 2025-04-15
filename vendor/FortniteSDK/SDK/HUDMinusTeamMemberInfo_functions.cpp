#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDMinusTeamMemberInfo

#include "Basic.hpp"

#include "HUDMinusTeamMemberInfo_classes.hpp"
#include "HUDMinusTeamMemberInfo_parameters.hpp"


namespace SDK
{

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDMinusTeamMemberInfo_C::ExecuteUbergraph_HUDMinusTeamMemberInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "ExecuteUbergraph_HUD-TeamMemberInfo");

	Params::HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDMinusTeamMemberInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              UpdatedMemberInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUDMinusTeamMemberInfo_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Update");

	Params::HUDMinusTeamMemberInfo_C_Update Parms{};

	Parms.UpdatedMemberInfo = std::move(UpdatedMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDMinusTeamMemberInfo_C::SetHealth(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-TeamMemberInfo_C", "SetHealth");

	Params::HUDMinusTeamMemberInfo_C_SetHealth Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

