#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewardsCurrent

#include "Basic.hpp"

#include "DailyRewardsCurrent_classes.hpp"
#include "DailyRewardsCurrent_parameters.hpp"


namespace SDK
{

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewardsCurrent_C::ExecuteUbergraph_DailyRewardsCurrent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewardsCurrent_C", "ExecuteUbergraph_DailyRewardsCurrent");

	Params::DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewardsCurrent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewardsCurrent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item_To_Represent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewardsCurrent_C::Set_Item(class UFortItem* Item_To_Represent, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewardsCurrent_C", "Set Item");

	Params::DailyRewardsCurrent_C_Set_Item Parms{};

	Parms.Item_To_Represent = Item_To_Represent;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDailyRewardsCurrent_C::Set_Item_Flare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewardsCurrent_C", "Set Item Flare");

	UObject::ProcessEvent(Func, nullptr);
}

}

