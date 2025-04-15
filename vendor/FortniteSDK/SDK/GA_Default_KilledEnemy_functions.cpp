#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Default_KilledEnemy

#include "Basic.hpp"

#include "GA_Default_KilledEnemy_classes.hpp"
#include "GA_Default_KilledEnemy_parameters.hpp"


namespace SDK
{

// Function GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.ExecuteUbergraph_GA_Default_KilledEnemy
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Default_KilledEnemy_C::ExecuteUbergraph_GA_Default_KilledEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Default_KilledEnemy_C", "ExecuteUbergraph_GA_Default_KilledEnemy");

	Params::GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Default_KilledEnemy_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Default_KilledEnemy_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

