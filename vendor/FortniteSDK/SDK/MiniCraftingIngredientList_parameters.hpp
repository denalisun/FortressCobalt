#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniCraftingIngredientList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry
// 0x0008 (0x0008 - 0x0000)
struct MiniCraftingIngredientList_C_AddListEntry final
{
public:
	class UFortItemQuantityListEntryBase*         ListEntry;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniCraftingIngredientList_C_AddListEntry) == 0x000008, "Wrong alignment on MiniCraftingIngredientList_C_AddListEntry");
static_assert(sizeof(MiniCraftingIngredientList_C_AddListEntry) == 0x000008, "Wrong size on MiniCraftingIngredientList_C_AddListEntry");
static_assert(offsetof(MiniCraftingIngredientList_C_AddListEntry, ListEntry) == 0x000000, "Member 'MiniCraftingIngredientList_C_AddListEntry::ListEntry' has a wrong offset!");

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList
// 0x0028 (0x0028 - 0x0000)
struct MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(NoDestructor)
	uint8                                         Pad_3C95[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemQuantityListEntryBase*         K2Node_Event_ListEntry;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildWrapBox_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList) == 0x000008, "Wrong alignment on MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList");
static_assert(sizeof(MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList) == 0x000028, "Wrong size on MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList");
static_assert(offsetof(MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList, EntryPoint) == 0x000000, "Member 'MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList, K2Node_MakeStruct_Margin) == 0x000004, "Member 'MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList, K2Node_Event_ListEntry) == 0x000018, "Member 'MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList::K2Node_Event_ListEntry' has a wrong offset!");
static_assert(offsetof(MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList, CallFunc_AddChildWrapBox_ReturnValue) == 0x000020, "Member 'MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList::CallFunc_AddChildWrapBox_ReturnValue' has a wrong offset!");

}

