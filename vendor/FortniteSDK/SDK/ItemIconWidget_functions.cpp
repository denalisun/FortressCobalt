#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemIconWidget

#include "Basic.hpp"

#include "ItemIconWidget_classes.hpp"
#include "ItemIconWidget_parameters.hpp"


namespace SDK
{

// Function ItemIconWidget.ItemIconWidget_C.ExecuteUbergraph_ItemIconWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconWidget_C::ExecuteUbergraph_ItemIconWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconWidget_C", "ExecuteUbergraph_ItemIconWidget");

	Params::ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconWidget.ItemIconWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemIconWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

