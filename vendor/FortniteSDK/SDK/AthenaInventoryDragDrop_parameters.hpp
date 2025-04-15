#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryDragDrop

#include "Basic.hpp"

#include "AthenaDragDropAction_structs.hpp"


namespace SDK::Params
{

// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
// 0x0018 (0x0018 - 0x0000)
struct AthenaInventoryDragDrop_C_ShowDropIcon final
{
public:
	EAthenaDragDropAction                         Drop_Action;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3671[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaInventoryDragVisual_C*           K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaInventoryDragDrop_C_ShowDropIcon) == 0x000008, "Wrong alignment on AthenaInventoryDragDrop_C_ShowDropIcon");
static_assert(sizeof(AthenaInventoryDragDrop_C_ShowDropIcon) == 0x000018, "Wrong size on AthenaInventoryDragDrop_C_ShowDropIcon");
static_assert(offsetof(AthenaInventoryDragDrop_C_ShowDropIcon, Drop_Action) == 0x000000, "Member 'AthenaInventoryDragDrop_C_ShowDropIcon::Drop_Action' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDragDrop_C_ShowDropIcon, K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual) == 0x000008, "Member 'AthenaInventoryDragDrop_C_ShowDropIcon::K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDragDrop_C_ShowDropIcon, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaInventoryDragDrop_C_ShowDropIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

