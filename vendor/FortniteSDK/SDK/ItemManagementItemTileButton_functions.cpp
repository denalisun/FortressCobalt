#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementItemTileButton

#include "Basic.hpp"

#include "ItemManagementItemTileButton_classes.hpp"
#include "ItemManagementItemTileButton_parameters.hpp"


namespace SDK
{

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.ExecuteUbergraph_ItemManagementItemTileButton
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTileButton_C::ExecuteUbergraph_ItemManagementItemTileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "ExecuteUbergraph_ItemManagementItemTileButton");

	Params::ItemManagementItemTileButton_C_ExecuteUbergraph_ItemManagementItemTileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementItemTileButton_C::BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::ItemManagementItemTileButton_C_BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemChangedBP
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleItemChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "HandleItemChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTileButton_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "OnDragCancelled");

	Params::ItemManagementItemTileButton_C_OnDragCancelled Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   EquipSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTileButton_C::HandleEquipSlotChanged(int32 EquipSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "HandleEquipSlotChanged");

	Params::ItemManagementItemTileButton_C_HandleEquipSlotChanged Parms{};

	Parms.EquipSlot = EquipSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleHasItemToCompareDetailsWithChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "HandleHasItemToCompareDetailsWithChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToDetailChanged
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleHasItemToDetailChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "HandleHasItemToDetailChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "HandleDifferentItemManagementModeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemMulchStateChanged
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleItemMulchStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "HandleItemMulchStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateMulchStateBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateMulchStateBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "UpdateMulchStateBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "UpdateStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UItemManagementItemTileButton_C::On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "On_ItemWidgetHolder_MouseButtonDown");

	Params::ItemManagementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	MouseEvent = std::move(Parms.MouseEvent);

	return Parms.ReturnValue;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTileButton_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "OnDragDetected");

	Params::ItemManagementItemTileButton_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	PointerEvent = std::move(Parms.PointerEvent);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.SetEquipSlotOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EquipSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTileButton_C::SetEquipSlotOverlay(int32 EquipSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "SetEquipSlotOverlay");

	Params::ItemManagementItemTileButton_C_SetEquipSlotOverlay Parms{};

	Parms.EquipSlot = EquipSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateInteractionWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateInteractionWidgetVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "UpdateInteractionWidgetVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateBangState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "UpdateBangState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateQuantityProduced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateQuantityProduced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "UpdateQuantityProduced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleSlottedSurvivor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleSlottedSurvivor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementItemTileButton_C", "HandleSlottedSurvivor");

	UObject::ProcessEvent(Func, nullptr);
}

}

