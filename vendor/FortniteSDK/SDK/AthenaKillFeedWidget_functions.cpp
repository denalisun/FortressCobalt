#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaKillFeedWidget

#include "Basic.hpp"

#include "AthenaKillFeedWidget_classes.hpp"
#include "AthenaKillFeedWidget_parameters.hpp"


namespace SDK
{

// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.ExecuteUbergraph_AthenaKillFeedWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaKillFeedWidget_C::ExecuteUbergraph_AthenaKillFeedWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaKillFeedWidget_C", "ExecuteUbergraph_AthenaKillFeedWidget");

	Params::AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaKillFeedWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaKillFeedWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaKillFeedWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaKillFeedWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.UpdateKillFeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaKillFeedWidget_C::UpdateKillFeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaKillFeedWidget_C", "UpdateKillFeed");

	UObject::ProcessEvent(Func, nullptr);
}

}

