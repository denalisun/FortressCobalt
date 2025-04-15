#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformResultItems

#include "Basic.hpp"

#include "ItemTransformResultItems_classes.hpp"
#include "ItemTransformResultItems_parameters.hpp"


namespace SDK
{

// Function ItemTransformResultItems.ItemTransformResultItems_C.ExecuteUbergraph_ItemTransformResultItems
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultItems_C::ExecuteUbergraph_ItemTransformResultItems(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformResultItems_C", "ExecuteUbergraph_ItemTransformResultItems");

	Params::ItemTransformResultItems_C_ExecuteUbergraph_ItemTransformResultItems Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformResultItems_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformResultItems_C", "PreConstruct");

	Params::ItemTransformResultItems_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Transform_Key                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>                SacrificeItems                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                                   CurrentTier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultItems_C::UpdateItems(class UFortItem* Transform_Key, TArray<class UFortItem*>& SacrificeItems, int32 CurrentTier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformResultItems_C", "UpdateItems");

	Params::ItemTransformResultItems_C_UpdateItems Parms{};

	Parms.Transform_Key = Transform_Key;
	Parms.SacrificeItems = std::move(SacrificeItems);
	Parms.CurrentTier = CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

	SacrificeItems = std::move(Parms.SacrificeItems);
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.CalculateRecycleXP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>                SacrificeItems                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                                   TotalHeroXP                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalSchematicXP                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalWorkerXP                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultItems_C::CalculateRecycleXP(TArray<class UFortItem*>& SacrificeItems, int32* TotalHeroXP, int32* TotalSchematicXP, int32* TotalWorkerXP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformResultItems_C", "CalculateRecycleXP");

	Params::ItemTransformResultItems_C_CalculateRecycleXP Parms{};

	Parms.SacrificeItems = std::move(SacrificeItems);

	UObject::ProcessEvent(Func, &Parms);

	SacrificeItems = std::move(Parms.SacrificeItems);

	if (TotalHeroXP != nullptr)
		*TotalHeroXP = Parms.TotalHeroXP;

	if (TotalSchematicXP != nullptr)
		*TotalSchematicXP = Parms.TotalSchematicXP;

	if (TotalWorkerXP != nullptr)
		*TotalWorkerXP = Parms.TotalWorkerXP;
}


// Function ItemTransformResultItems.ItemTransformResultItems_C.UpdateMainReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentTier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultItems_C::UpdateMainReward(class UFortItem* Item, int32 CurrentTier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformResultItems_C", "UpdateMainReward");

	Params::ItemTransformResultItems_C_UpdateMainReward Parms{};

	Parms.Item = Item;
	Parms.CurrentTier = CurrentTier;

	UObject::ProcessEvent(Func, &Parms);
}

}

