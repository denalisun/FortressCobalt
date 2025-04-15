#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendCodePC

#include "Basic.hpp"

#include "FriendCodePC_classes.hpp"
#include "FriendCodePC_parameters.hpp"


namespace SDK
{

// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendCodePC_C::ExecuteUbergraph_FriendCodePC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendCodePC_C", "ExecuteUbergraph_FriendCodePC");

	Params::FriendCodePC_C_ExecuteUbergraph_FriendCodePC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendCodePC.FriendCodePC_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UFriendCodePC_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendCodePC_C", "OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendCodePC_C", "OnMouseLeave");

	Params::FriendCodePC_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendCodePC_C", "OnMouseEnter");

	Params::FriendCodePC_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendCodePC.FriendCodePC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendCodePC_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendCodePC_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Result                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UFriendCodePC_C::GetFriendCodeUrl(class FString* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendCodePC_C", "GetFriendCodeUrl");

	Params::FriendCodePC_C_GetFriendCodeUrl Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function FriendCodePC.FriendCodePC_C.GetCodeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Result                                                 (Parm, OutParm)

void UFriendCodePC_C::GetCodeText(class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendCodePC_C", "GetCodeText");

	Params::FriendCodePC_C_GetCodeText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

}

