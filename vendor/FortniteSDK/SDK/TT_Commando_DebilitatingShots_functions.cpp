#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Commando_DebilitatingShots

#include "Basic.hpp"

#include "TT_Commando_DebilitatingShots_classes.hpp"
#include "TT_Commando_DebilitatingShots_parameters.hpp"


namespace SDK
{

// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*                 AbilityInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*              Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTT_Commando_DebilitatingShots_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_DebilitatingShots_C", "InitializeAbilityInstanceInternal");

	Params::TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*                 AbilityInstance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*              Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Token                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTT_Commando_DebilitatingShots_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_DebilitatingShots_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = std::move(Tag);
	Parms.Context = Context;
	Parms.Token = std::move(Token);

	UObject::ProcessEvent(Func, &Parms);

	Tag = std::move(Parms.Tag);
	Token = std::move(Parms.Token);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

	return Parms.ReturnValue;
}


// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.BP_GetTokenizedDescriptionText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          ObjectToDescribe                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*              Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                     OutDescription                                         (Parm, OutParm, ZeroConstructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTT_Commando_DebilitatingShots_C::BP_GetTokenizedDescriptionText(class UObject* ObjectToDescribe, struct FGameplayTag& Tag, class UFortTooltipContext* Context, TArray<class FText>* OutDescription) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_DebilitatingShots_C", "BP_GetTokenizedDescriptionText");

	Params::TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText Parms{};

	Parms.ObjectToDescribe = ObjectToDescribe;
	Parms.Tag = std::move(Tag);
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	Tag = std::move(Parms.Tag);

	if (OutDescription != nullptr)
		*OutDescription = std::move(Parms.OutDescription);

	return Parms.ReturnValue;
}

}

