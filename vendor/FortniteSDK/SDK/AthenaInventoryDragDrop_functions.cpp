#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryDragDrop

#include "Basic.hpp"

#include "AthenaInventoryDragDrop_classes.hpp"
#include "AthenaInventoryDragDrop_parameters.hpp"


namespace SDK
{

// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaDragDropAction                   Drop_Action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryDragDrop_C::ShowDropIcon(EAthenaDragDropAction Drop_Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryDragDrop_C", "ShowDropIcon");

	Params::AthenaInventoryDragDrop_C_ShowDropIcon Parms{};

	Parms.Drop_Action = Drop_Action;

	UObject::ProcessEvent(Func, &Parms);
}

}

