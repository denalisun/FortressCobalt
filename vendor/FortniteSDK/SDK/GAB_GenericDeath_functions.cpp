#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericDeath

#include "Basic.hpp"

#include "GAB_GenericDeath_classes.hpp"
#include "GAB_GenericDeath_parameters.hpp"


namespace SDK
{

// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericDeath_C::ExecuteUbergraph_GAB_GenericDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "ExecuteUbergraph_GAB_GenericDeath");

	Params::GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_GenericDeath_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_GenericDeath_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_C::PickDeathMontageSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "PickDeathMontageSection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_GenericDeath_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "K2_OnEndAbility");

	Params::GAB_GenericDeath_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_C::OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_C::OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_C::OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_C::OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventHitData                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_GenericDeath_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "InitializeDeathHitDirection");

	Params::GAB_GenericDeath_C_InitializeDeathHitDirection Parms{};

	Parms.EventHitData = std::move(EventHitData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaxNumberOfSections                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             OriginalSectionName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SectionName                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericDeath_C::GetRandomSectionName(int32 MaxNumberOfSections, class FName OriginalSectionName, class FName* SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "GetRandomSectionName");

	Params::GAB_GenericDeath_C_GetRandomSectionName Parms{};

	Parms.MaxNumberOfSections = MaxNumberOfSections;
	Parms.OriginalSectionName = OriginalSectionName;

	UObject::ProcessEvent(Func, &Parms);

	if (SectionName != nullptr)
		*SectionName = Parms.SectionName;
}

}

