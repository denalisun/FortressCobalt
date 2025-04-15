#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HitPointBar

#include "Basic.hpp"

#include "HitPointBar_classes.hpp"
#include "HitPointBar_parameters.hpp"


namespace SDK
{

// Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::ExecuteUbergraph_HitPointBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "ExecuteUbergraph_HitPointBar");

	Params::HitPointBar_C_ExecuteUbergraph_HitPointBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "Tick");

	Params::HitPointBar_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHitPointBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "PreConstruct");

	Params::HitPointBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.UpdateMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::UpdateMaxValue(float Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "UpdateMaxValue");

	Params::HitPointBar_C_UpdateMaxValue Parms{};

	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortHitPointModificationReason         Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::UpdateCurrentValue(float Current, EFortHitPointModificationReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "UpdateCurrentValue");

	Params::HitPointBar_C_UpdateCurrentValue Parms{};

	Parms.Current = Current;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Update Fill Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Update_Fill_Bar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "Update Fill Bar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitPointBar_C::UpdateCurrentValueWithoutReason(float Current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "UpdateCurrentValueWithoutReason");

	Params::HitPointBar_C_UpdateCurrentValueWithoutReason Parms{};

	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitPointBar.HitPointBar_C.Initialize Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Initialize_Bar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "Initialize Bar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitPointBar.HitPointBar_C.Update Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Update_Delta_Bar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "Update Delta Bar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitPointBar.HitPointBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::UpdateVolatileForUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "UpdateVolatileForUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitPointBar.HitPointBar_C.SetInitialValues
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::SetInitialValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitPointBar_C", "SetInitialValues");

	UObject::ProcessEvent(Func, nullptr);
}

}

