#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_Camera

#include "Basic.hpp"

#include "WM_Camera_classes.hpp"
#include "WM_Camera_parameters.hpp"


namespace SDK
{

// Function WM_Camera.WM_Camera_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWM_Camera_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__UpdateFunc
// (BlueprintEvent)

void AWM_Camera_C::TL_CameraDeactivateAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "TL_CameraDeactivateAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__FinishedFunc
// (BlueprintEvent)

void AWM_Camera_C::TL_CameraDeactivateAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "TL_CameraDeactivateAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.TL_CameraActivateAnim__UpdateFunc
// (BlueprintEvent)

void AWM_Camera_C::TL_CameraActivateAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "TL_CameraActivateAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.TL_CameraActivateAnim__FinishedFunc
// (BlueprintEvent)

void AWM_Camera_C::TL_CameraActivateAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "TL_CameraActivateAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.StopWiggle
// (BlueprintCallable, BlueprintEvent)

void AWM_Camera_C::StopWiggle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "StopWiggle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AWM_Camera_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)

void AWM_Camera_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.CameraWiggle
// (BlueprintCallable, BlueprintEvent)

void AWM_Camera_C::CameraWiggle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "CameraWiggle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.CameraNoise__UpdateFunc
// (BlueprintEvent)

void AWM_Camera_C::CameraNoise__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "CameraNoise__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.CameraNoise__FinishedFunc
// (BlueprintEvent)

void AWM_Camera_C::CameraNoise__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "CameraNoise__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.CameraDeactivateAnim
// (BlueprintCallable, BlueprintEvent)

void AWM_Camera_C::CameraDeactivateAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "CameraDeactivateAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.CameraActivateAnim
// (BlueprintCallable, BlueprintEvent)

void AWM_Camera_C::CameraActivateAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "CameraActivateAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Camera.WM_Camera_C.ExecuteUbergraph_WM_Camera
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_Camera_C::ExecuteUbergraph_WM_Camera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Camera_C", "ExecuteUbergraph_WM_Camera");

	Params::WM_Camera_C_ExecuteUbergraph_WM_Camera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

