#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HorizontalTabList

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
// 0x00A8 (0x00A8 - 0x0000)
struct HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ECD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName TabId)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ECE[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTabCount_ReturnValue;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ECF[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTabCount_ReturnValue2;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue2;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED0[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_TabId;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0038(0x0018)()
	bool                                          Temp_bool_Variable2;                               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ED1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_TabNameID;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_Event_TabButton;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                       K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED2[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                       K2Node_DynamicCast_AsIcon_Tab_Button2;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable5;                               // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable6;                               // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select3_Default;                            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED3[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList) == 0x000008, "Wrong alignment on HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList");
static_assert(sizeof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList) == 0x0000A8, "Wrong size on HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, EntryPoint) == 0x000000, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::EntryPoint' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable) == 0x000004, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable2) == 0x000018, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_bool_Variable) == 0x000019, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CustomEvent_bUsingGamepad) == 0x00001A, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable3) == 0x00001B, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_IsDesignTime) == 0x00001C, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetTabCount_ReturnValue) == 0x000020, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetTabCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetTabCount_ReturnValue2) == 0x000028, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetTabCount_ReturnValue2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_LessEqual_IntInt_ReturnValue2) == 0x00002C, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_LessEqual_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable4) == 0x00002D, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Select_Default) == 0x00002E, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CustomEvent_TabId) == 0x000030, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CustomEvent_TabId' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetEmptyText_ReturnValue) == 0x000038, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_bool_Variable2) == 0x000050, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_TabNameID) == 0x000058, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_TabButton) == 0x000060, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_TabButton' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_AsIcon_Tab_Button) == 0x000068, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_AsIcon_Tab_Button' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Select2_Default) == 0x000071, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000078, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_AsIcon_Tab_Button2) == 0x000080, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_AsIcon_Tab_Button2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_bSuccess2) == 0x000088, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable5) == 0x000089, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable6) == 0x00008A, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable6' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_bool_Variable3) == 0x00008B, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Select3_Default) == 0x00008C, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetContext_ReturnValue) == 0x000090, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CreateDelegate_OutputDelegate2) == 0x000098, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
// 0x0010 (0x0010 - 0x0000)
struct HorizontalTabList_C_HandleTabCreated final
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_HandleTabCreated) == 0x000008, "Wrong alignment on HorizontalTabList_C_HandleTabCreated");
static_assert(sizeof(HorizontalTabList_C_HandleTabCreated) == 0x000010, "Wrong size on HorizontalTabList_C_HandleTabCreated");
static_assert(offsetof(HorizontalTabList_C_HandleTabCreated, TabNameID) == 0x000000, "Member 'HorizontalTabList_C_HandleTabCreated::TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_HandleTabCreated, TabButton) == 0x000008, "Member 'HorizontalTabList_C_HandleTabCreated::TabButton' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) HorizontalTabList_C_CustomEvent_0 final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_CustomEvent_0) == 0x000008, "Wrong alignment on HorizontalTabList_C_CustomEvent_0");
static_assert(sizeof(HorizontalTabList_C_CustomEvent_0) == 0x000008, "Wrong size on HorizontalTabList_C_CustomEvent_0");
static_assert(offsetof(HorizontalTabList_C_CustomEvent_0, TabId) == 0x000000, "Member 'HorizontalTabList_C_CustomEvent_0::TabId' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HorizontalTabList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HorizontalTabList_C_PreConstruct) == 0x000001, "Wrong alignment on HorizontalTabList_C_PreConstruct");
static_assert(sizeof(HorizontalTabList_C_PreConstruct) == 0x000001, "Wrong size on HorizontalTabList_C_PreConstruct");
static_assert(offsetof(HorizontalTabList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HorizontalTabList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct HorizontalTabList_C_Handle_OnInputMethodChanged final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HorizontalTabList_C_Handle_OnInputMethodChanged) == 0x000001, "Wrong alignment on HorizontalTabList_C_Handle_OnInputMethodChanged");
static_assert(sizeof(HorizontalTabList_C_Handle_OnInputMethodChanged) == 0x000001, "Wrong size on HorizontalTabList_C_Handle_OnInputMethodChanged");
static_assert(offsetof(HorizontalTabList_C_Handle_OnInputMethodChanged, bUsingGamepad) == 0x000000, "Member 'HorizontalTabList_C_Handle_OnInputMethodChanged::bUsingGamepad' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings
// 0x0020 (0x0020 - 0x0000)
struct HorizontalTabList_C_ChangeInputBindings final
{
public:
	struct FDataTableRowHandle                    NextBinding;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FDataTableRowHandle                    PreviousBinding;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(HorizontalTabList_C_ChangeInputBindings) == 0x000008, "Wrong alignment on HorizontalTabList_C_ChangeInputBindings");
static_assert(sizeof(HorizontalTabList_C_ChangeInputBindings) == 0x000020, "Wrong size on HorizontalTabList_C_ChangeInputBindings");
static_assert(offsetof(HorizontalTabList_C_ChangeInputBindings, NextBinding) == 0x000000, "Member 'HorizontalTabList_C_ChangeInputBindings::NextBinding' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ChangeInputBindings, PreviousBinding) == 0x000010, "Member 'HorizontalTabList_C_ChangeInputBindings::PreviousBinding' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
// 0x0018 (0x0018 - 0x0000)
struct HorizontalTabList_C_Get_Tab_From_Id final
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          CallFunc_GetTabButtonByID_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_Get_Tab_From_Id) == 0x000008, "Wrong alignment on HorizontalTabList_C_Get_Tab_From_Id");
static_assert(sizeof(HorizontalTabList_C_Get_Tab_From_Id) == 0x000018, "Wrong size on HorizontalTabList_C_Get_Tab_From_Id");
static_assert(offsetof(HorizontalTabList_C_Get_Tab_From_Id, TabNameID) == 0x000000, "Member 'HorizontalTabList_C_Get_Tab_From_Id::TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_Get_Tab_From_Id, ReturnValue) == 0x000008, "Member 'HorizontalTabList_C_Get_Tab_From_Id::ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_Get_Tab_From_Id, CallFunc_GetTabButtonByID_ReturnValue) == 0x000010, "Member 'HorizontalTabList_C_Get_Tab_From_Id::CallFunc_GetTabButtonByID_ReturnValue' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility
// 0x0020 (0x0020 - 0x0000)
struct HorizontalTabList_C_UpdateGamepadKeyVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED5[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_UpdateGamepadKeyVisibility) == 0x000008, "Wrong alignment on HorizontalTabList_C_UpdateGamepadKeyVisibility");
static_assert(sizeof(HorizontalTabList_C_UpdateGamepadKeyVisibility) == 0x000020, "Wrong size on HorizontalTabList_C_UpdateGamepadKeyVisibility");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_bool_Variable) == 0x000000, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_byte_Variable) == 0x000001, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_byte_Variable2) == 0x000002, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_bool_Variable2) == 0x000003, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_byte_Variable3) == 0x000004, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_IsUsingGamepad_ReturnValue) == 0x000019, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, K2Node_Select_Default) == 0x00001B, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, K2Node_Select2_Default) == 0x00001C, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::K2Node_Select2_Default' has a wrong offset!");

}

