#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Queue

#include "Basic.hpp"

#include "FrontEndRewards_Queue_classes.hpp"
#include "FrontEndRewards_Queue_parameters.hpp"


namespace SDK
{

// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ExecuteUbergraph_FrontEndRewards_Queue
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Queue_C::ExecuteUbergraph_FrontEndRewards_Queue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "ExecuteUbergraph_FrontEndRewards_Queue");

	Params::FrontEndRewards_Queue_C_ExecuteUbergraph_FrontEndRewards_Queue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Queue_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "PreConstruct");

	Params::FrontEndRewards_Queue_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.QueueReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData*      RewardItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URewardsIcon_C*                   OutIcon                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Queue_C::QueueReward(class UFortRewardNotificationData* RewardItem, bool IsDesignTime, class URewardsIcon_C** OutIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "QueueReward");

	Params::FrontEndRewards_Queue_C_QueueReward Parms{};

	Parms.RewardItem = RewardItem;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIcon != nullptr)
		*OutIcon = Parms.OutIcon;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.DequeueReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData*      OutReward                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Queue_C::DequeueReward(class UFortRewardNotificationData** OutReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "DequeueReward");

	Params::FrontEndRewards_Queue_C_DequeueReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutReward != nullptr)
		*OutReward = Parms.OutReward;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.ClearQueue
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::ClearQueue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "ClearQueue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.CloneIconList
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewardsIcon_C*>           IconListClone                                          (Parm, OutParm, ZeroConstructor)

void UFrontEndRewards_Queue_C::CloneIconList(TArray<class URewardsIcon_C*>* IconListClone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "CloneIconList");

	Params::FrontEndRewards_Queue_C_CloneIconList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IconListClone != nullptr)
		*IconListClone = std::move(Parms.IconListClone);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.RandomizeDesignView
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::RandomizeDesignView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "RandomizeDesignView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.PopIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*                   OutIcon                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Queue_C::PopIcon(class URewardsIcon_C** OutIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "PopIcon");

	Params::FrontEndRewards_Queue_C_PopIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIcon != nullptr)
		*OutIcon = Parms.OutIcon;
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.HandleIconHideAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*                   Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Queue_C::HandleIconHideAnimationFinished(class URewardsIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "HandleIconHideAnimationFinished");

	Params::FrontEndRewards_Queue_C_HandleIconHideAnimationFinished Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconSlide
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::TickIconSlide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "TickIconSlide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartDequeueAnimation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::StartDequeueAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "StartDequeueAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.SlideIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*                   Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Queue_C::SlideIcon(class URewardsIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "SlideIcon");

	Params::FrontEndRewards_Queue_C_SlideIcon Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.StartInitAnimation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::StartInitAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "StartInitAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_Queue.FrontEndRewards_Queue_C.TickIconInit
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Queue_C::TickIconInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Queue_C", "TickIconInit");

	UObject::ProcessEvent(Func, nullptr);
}

}

