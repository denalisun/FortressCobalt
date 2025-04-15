#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCountOverCost

#include "Basic.hpp"

#include "ItemCountOverCost_classes.hpp"
#include "ItemCountOverCost_parameters.hpp"


namespace SDK
{

// Function ItemCountOverCost.ItemCountOverCost_C.ExecuteUbergraph_ItemCountOverCost
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCountOverCost_C::ExecuteUbergraph_ItemCountOverCost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountOverCost_C", "ExecuteUbergraph_ItemCountOverCost");

	Params::ItemCountOverCost_C_ExecuteUbergraph_ItemCountOverCost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCountOverCost.ItemCountOverCost_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCountOverCost_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountOverCost_C", "PreConstruct");

	Params::ItemCountOverCost_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCountOverCost.ItemCountOverCost_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCountOverCost_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountOverCost_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCountOverCost.ItemCountOverCost_C.Get Meets Criteria Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UItemCountOverCost_C::Get_Meets_Criteria_Color()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountOverCost_C", "Get Meets Criteria Color");

	Params::ItemCountOverCost_C_Get_Meets_Criteria_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemCountOverCost.ItemCountOverCost_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemCountOverCost_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountOverCost_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCountOverCost.ItemCountOverCost_C.Calculate Total Item Def in Inventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*              Param_ItemDefinition                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Count                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCountOverCost_C::Calculate_Total_Item_Def_in_Inventory(class UFortItemDefinition* Param_ItemDefinition, int32* Param_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountOverCost_C", "Calculate Total Item Def in Inventory");

	Params::ItemCountOverCost_C_Calculate_Total_Item_Def_in_Inventory Parms{};

	Parms.Param_ItemDefinition = Param_ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Count != nullptr)
		*Param_Count = Parms.Param_Count;
}

}

