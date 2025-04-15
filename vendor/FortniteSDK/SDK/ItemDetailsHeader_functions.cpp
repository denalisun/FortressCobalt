#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeader

#include "Basic.hpp"

#include "ItemDetailsHeader_classes.hpp"
#include "ItemDetailsHeader_parameters.hpp"


namespace SDK
{

// Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDetailsHeader_C::ExecuteUbergraph_ItemDetailsHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsHeader_C", "ExecuteUbergraph_ItemDetailsHeader");

	Params::ItemDetailsHeader_C_ExecuteUbergraph_ItemDetailsHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeader_C::HandleDifferentItemToCompareSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsHeader_C", "HandleDifferentItemToCompareSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeader_C::HandleDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsHeader_C", "HandleDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDetailsHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemDetailsHeader_C::UpdateItemsForWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsHeader_C", "UpdateItemsForWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UItemDetailsHeader_C::SetStyles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDetailsHeader_C", "SetStyles");

	UObject::ProcessEvent(Func, nullptr);
}

}

