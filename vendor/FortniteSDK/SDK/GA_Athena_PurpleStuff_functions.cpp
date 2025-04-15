#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_PurpleStuff

#include "Basic.hpp"

#include "GA_Athena_PurpleStuff_classes.hpp"
#include "GA_Athena_PurpleStuff_parameters.hpp"


namespace SDK
{

// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.ExecuteUbergraph_GA_Athena_PurpleStuff
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PurpleStuff_C::ExecuteUbergraph_GA_Athena_PurpleStuff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "ExecuteUbergraph_GA_Athena_PurpleStuff");

	Params::GA_Athena_PurpleStuff_C_ExecuteUbergraph_GA_Athena_PurpleStuff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_PurpleStuff_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Triggered_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PurpleStuff_C::Triggered_B88CC86E452E3CEFD0EF0C961F5C2364(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "Triggered_B88CC86E452E3CEFD0EF0C961F5C2364");

	Params::GA_Athena_PurpleStuff_C_Triggered_B88CC86E452E3CEFD0EF0C961F5C2364 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PurpleStuff_C::Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364");

	Params::GA_Athena_PurpleStuff_C_Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Completed_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_PurpleStuff_C::Completed_B88CC86E452E3CEFD0EF0C961F5C2364(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "Completed_B88CC86E452E3CEFD0EF0C961F5C2364");

	Params::GA_Athena_PurpleStuff_C_Completed_B88CC86E452E3CEFD0EF0C961F5C2364 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Athena_PurpleStuff_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_PurpleStuff_C", "K2_CanActivateAbility");

	Params::GA_Athena_PurpleStuff_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

