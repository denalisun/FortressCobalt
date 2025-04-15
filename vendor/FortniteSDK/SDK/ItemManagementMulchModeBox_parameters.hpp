#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementMulchModeBox

#include "Basic.hpp"

#include "CommonUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox
// 0x00C0 (0x00C0 - 0x0000)
struct ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_390C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0008(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UItemWindow_C*                          CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemManagementMulchDetailsPanel_C*     K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_390D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UItemManagementMulchDetailsPanel_C*     K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_390E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle2;             // 0x0078(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate4;             // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bCursorModeEnabled)>      K2Node_CreateDelegate_OutputDelegate5;             // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox) == 0x000008, "Wrong alignment on ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox");
static_assert(sizeof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox) == 0x0000C0, "Wrong size on ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, EntryPoint) == 0x000000, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_MakeStruct_DataTableRowHandle) == 0x000008, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, CallFunc_Create_ReturnValue) == 0x000028, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel) == 0x000030, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_CreateDelegate_OutputDelegate2) == 0x000040, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2) == 0x000050, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel2' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_DynamicCast_bSuccess2) == 0x000058, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_CreateDelegate_OutputDelegate3) == 0x000060, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, CallFunc_GetUINavigationManager_ReturnValue) == 0x000070, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_MakeStruct_DataTableRowHandle2) == 0x000078, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_MakeStruct_DataTableRowHandle2' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_CreateDelegate_OutputDelegate4) == 0x000088, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, CallFunc_GetContext_ReturnValue) == 0x000098, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, CallFunc_GetContext_ReturnValue2) == 0x0000A0, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, K2Node_CreateDelegate_OutputDelegate5) == 0x0000A8, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox, CallFunc_IsInZone_ReturnValue) == 0x0000B8, "Member 'ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox::CallFunc_IsInZone_ReturnValue' has a wrong offset!");

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack
// 0x0001 (0x0001 - 0x0000)
struct ItemManagementMulchModeBox_C_HandleBack final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemManagementMulchModeBox_C_HandleBack) == 0x000001, "Wrong alignment on ItemManagementMulchModeBox_C_HandleBack");
static_assert(sizeof(ItemManagementMulchModeBox_C_HandleBack) == 0x000001, "Wrong size on ItemManagementMulchModeBox_C_HandleBack");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleBack, Passthrough) == 0x000000, "Member 'ItemManagementMulchModeBox_C_HandleBack::Passthrough' has a wrong offset!");

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo
// 0x0038 (0x0038 - 0x0000)
struct ItemManagementMulchModeBox_C_HandleInfo final
{
public:
	bool                                          Pass_Through;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_390F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	TArray<class UFortItemDefinition*>            CallFunc_GetItemDefinitions_ReturnValue;           // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemManagementMulchModeBox_C_HandleInfo) == 0x000008, "Wrong alignment on ItemManagementMulchModeBox_C_HandleInfo");
static_assert(sizeof(ItemManagementMulchModeBox_C_HandleInfo) == 0x000038, "Wrong size on ItemManagementMulchModeBox_C_HandleInfo");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleInfo, Pass_Through) == 0x000000, "Member 'ItemManagementMulchModeBox_C_HandleInfo::Pass_Through' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleInfo, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'ItemManagementMulchModeBox_C_HandleInfo::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleInfo, CallFunc_GetItemDefinitions_ReturnValue) == 0x000020, "Member 'ItemManagementMulchModeBox_C_HandleInfo::CallFunc_GetItemDefinitions_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleInfo, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000030, "Member 'ItemManagementMulchModeBox_C_HandleInfo::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged
// 0x0020 (0x0020 - 0x0000)
struct ItemManagementMulchModeBox_C_HandleMulchListChanged final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EInputActionState                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputActionState                             Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3910[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortItem*>                      CallFunc_GetItemsToMulch_ReturnValue;              // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EInputActionState                             K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemManagementMulchModeBox_C_HandleMulchListChanged) == 0x000008, "Wrong alignment on ItemManagementMulchModeBox_C_HandleMulchListChanged");
static_assert(sizeof(ItemManagementMulchModeBox_C_HandleMulchListChanged) == 0x000020, "Wrong size on ItemManagementMulchModeBox_C_HandleMulchListChanged");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleMulchListChanged, Temp_bool_Variable) == 0x000000, "Member 'ItemManagementMulchModeBox_C_HandleMulchListChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleMulchListChanged, Temp_byte_Variable) == 0x000001, "Member 'ItemManagementMulchModeBox_C_HandleMulchListChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleMulchListChanged, Temp_byte_Variable2) == 0x000002, "Member 'ItemManagementMulchModeBox_C_HandleMulchListChanged::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleMulchListChanged, CallFunc_GetItemsToMulch_ReturnValue) == 0x000008, "Member 'ItemManagementMulchModeBox_C_HandleMulchListChanged::CallFunc_GetItemsToMulch_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleMulchListChanged, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'ItemManagementMulchModeBox_C_HandleMulchListChanged::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleMulchListChanged, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'ItemManagementMulchModeBox_C_HandleMulchListChanged::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleMulchListChanged, K2Node_Select_Default) == 0x00001D, "Member 'ItemManagementMulchModeBox_C_HandleMulchListChanged::K2Node_Select_Default' has a wrong offset!");

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging
// 0x0003 (0x0003 - 0x0000)
struct ItemManagementMulchModeBox_C_HandleCursorModeChanging final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleBack_PassThrough;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemManagementMulchModeBox_C_HandleCursorModeChanging) == 0x000001, "Wrong alignment on ItemManagementMulchModeBox_C_HandleCursorModeChanging");
static_assert(sizeof(ItemManagementMulchModeBox_C_HandleCursorModeChanging) == 0x000003, "Wrong size on ItemManagementMulchModeBox_C_HandleCursorModeChanging");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleCursorModeChanging, IsEnabled) == 0x000000, "Member 'ItemManagementMulchModeBox_C_HandleCursorModeChanging::IsEnabled' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleCursorModeChanging, CallFunc_HandleBack_PassThrough) == 0x000001, "Member 'ItemManagementMulchModeBox_C_HandleCursorModeChanging::CallFunc_HandleBack_PassThrough' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleCursorModeChanging, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'ItemManagementMulchModeBox_C_HandleCursorModeChanging::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory
// 0x0010 (0x0010 - 0x0000)
struct ItemManagementMulchModeBox_C_HandleLeaveInventory final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3911[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemManagementMulchModeBox_C_HandleLeaveInventory) == 0x000008, "Wrong alignment on ItemManagementMulchModeBox_C_HandleLeaveInventory");
static_assert(sizeof(ItemManagementMulchModeBox_C_HandleLeaveInventory) == 0x000010, "Wrong size on ItemManagementMulchModeBox_C_HandleLeaveInventory");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleLeaveInventory, Passthrough) == 0x000000, "Member 'ItemManagementMulchModeBox_C_HandleLeaveInventory::Passthrough' has a wrong offset!");
static_assert(offsetof(ItemManagementMulchModeBox_C_HandleLeaveInventory, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ItemManagementMulchModeBox_C_HandleLeaveInventory::CallFunc_GetContext_ReturnValue' has a wrong offset!");

}

