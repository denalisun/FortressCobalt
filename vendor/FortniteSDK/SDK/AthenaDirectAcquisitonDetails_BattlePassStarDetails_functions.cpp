#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitonDetails_BattlePassStarDetails

#include "Basic.hpp"

#include "AthenaDirectAcquisitonDetails_BattlePassStarDetails_classes.hpp"
#include "AthenaDirectAcquisitonDetails_BattlePassStarDetails_parameters.hpp"


namespace SDK
{

// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C", "ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails");

	Params::AthenaDirectAcquisitonDetails_BattlePassStarDetails_C_ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.SetNumOfBattlePassStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumOfBattlePassStars                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::SetNumOfBattlePassStars(int32 NumOfBattlePassStars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C", "SetNumOfBattlePassStars");

	Params::AthenaDirectAcquisitonDetails_BattlePassStarDetails_C_SetNumOfBattlePassStars Parms{};

	Parms.NumOfBattlePassStars = NumOfBattlePassStars;

	UObject::ProcessEvent(Func, &Parms);
}

}

