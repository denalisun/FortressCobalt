#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBarXpText

#include "Basic.hpp"

#include "XpBarXpText_classes.hpp"
#include "XpBarXpText_parameters.hpp"


namespace SDK
{

// Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBarXpText_C::ExecuteUbergraph_XpBarXpText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarXpText_C", "ExecuteUbergraph_XpBarXpText");

	Params::XpBarXpText_C_ExecuteUbergraph_XpBarXpText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo           NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpBarXpText_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarXpText_C", "HandleAccountUpdate");

	Params::XpBarXpText_C_HandleAccountUpdate Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBarXpText.XpBarXpText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBarXpText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarXpText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpBarXpText.XpBarXpText_C.Update Xp Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo           Account_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpBarXpText_C::Update_Xp_Text(const struct FFortPublicAccountInfo& Account_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarXpText_C", "Update Xp Text");

	Params::XpBarXpText_C_Update_Xp_Text Parms{};

	Parms.Account_Info = std::move(Account_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Next_Level_Skill_Points                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBarXpText_C::Get_Skill_Points_For_Next_Level(int32* Next_Level_Skill_Points)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarXpText_C", "Get Skill Points For Next Level");

	Params::XpBarXpText_C_Get_Skill_Points_For_Next_Level Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Next_Level_Skill_Points != nullptr)
		*Next_Level_Skill_Points = Parms.Next_Level_Skill_Points;
}

}

