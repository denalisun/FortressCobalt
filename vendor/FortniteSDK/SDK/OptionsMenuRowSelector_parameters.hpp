#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuRowSelector

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature final
{
public:
	int32                                         Tab_Id;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature");
static_assert(sizeof(OptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature");
static_assert(offsetof(OptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature, Tab_Id) == 0x000000, "Member 'OptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature::Tab_Id' has a wrong offset!");

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
// 0x00E8 (0x00E8 - 0x0000)
struct OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_AssociatedButton;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonIndex;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3695[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0020(0x0068)()
	class UCommonButtonGroup*                     CallFunc_SpawnObject_ReturnValue;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3696[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x00A0(0x0018)(ConstParm)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3697[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x00C4(0x0008)(NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3698[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButton* AssociatedButton, int32 ButtonIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector) == 0x000008, "Wrong alignment on OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector");
static_assert(sizeof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector) == 0x0000E8, "Wrong size on OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, EntryPoint) == 0x000000, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, CallFunc_Create_ReturnValue) == 0x000008, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_CustomEvent_AssociatedButton) == 0x000010, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_CustomEvent_AssociatedButton' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_CustomEvent_ButtonIndex) == 0x000018, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_CustomEvent_ButtonIndex' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_Event_MouseEvent) == 0x000020, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, CallFunc_SpawnObject_ReturnValue) == 0x000088, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_Event_IsDesignTime) == 0x000090, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, CallFunc_AddChild_ReturnValue) == 0x000098, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, Temp_text_Variable) == 0x0000A0, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_DynamicCast_AsHorizontal_Box_Slot) == 0x0000B8, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_DynamicCast_AsHorizontal_Box_Slot' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_MakeStruct_SlateChildSize) == 0x0000C4, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, Temp_int_Variable) == 0x0000CC, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'OptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OptionsMenuRowSelector_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsMenuRowSelector_C_PreConstruct) == 0x000001, "Wrong alignment on OptionsMenuRowSelector_C_PreConstruct");
static_assert(sizeof(OptionsMenuRowSelector_C_PreConstruct) == 0x000001, "Wrong size on OptionsMenuRowSelector_C_PreConstruct");
static_assert(offsetof(OptionsMenuRowSelector_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OptionsMenuRowSelector_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
// 0x0068 (0x0068 - 0x0000)
struct OptionsMenuRowSelector_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuRowSelector_C_OnMouseLeave) == 0x000008, "Wrong alignment on OptionsMenuRowSelector_C_OnMouseLeave");
static_assert(sizeof(OptionsMenuRowSelector_C_OnMouseLeave) == 0x000068, "Wrong size on OptionsMenuRowSelector_C_OnMouseLeave");
static_assert(offsetof(OptionsMenuRowSelector_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'OptionsMenuRowSelector_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0 final
{
public:
	class UCommonButton*                          AssociatedButton;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonIndex;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0) == 0x000008, "Wrong alignment on OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0");
static_assert(sizeof(OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0) == 0x000010, "Wrong size on OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0");
static_assert(offsetof(OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0, AssociatedButton) == 0x000000, "Member 'OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0::AssociatedButton' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0, ButtonIndex) == 0x000008, "Member 'OptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0::ButtonIndex' has a wrong offset!");

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
// 0x00B0 (0x00B0 - 0x0000)
struct OptionsMenuRowSelector_C_Initialize_Row_Selector final
{
public:
	class FText                                   Row_Text;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FText>                           Buttons;                                           // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FText>                           Param_Hover_Texts;                                 // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                          Require_Selection;                                 // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3699[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       Tab_Tooltip;                                       // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369A[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0060(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369B[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0080(0x0008)(NoDestructor)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsMenuRowSelector_C_Initialize_Row_Selector) == 0x000008, "Wrong alignment on OptionsMenuRowSelector_C_Initialize_Row_Selector");
static_assert(sizeof(OptionsMenuRowSelector_C_Initialize_Row_Selector) == 0x0000B0, "Wrong size on OptionsMenuRowSelector_C_Initialize_Row_Selector");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, Row_Text) == 0x000000, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::Row_Text' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, Buttons) == 0x000018, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::Buttons' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, Param_Hover_Texts) == 0x000028, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::Param_Hover_Texts' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, Require_Selection) == 0x000038, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::Require_Selection' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, Tab_Tooltip) == 0x000040, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::Tab_Tooltip' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, Temp_int_Array_Index_Variable) == 0x000048, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, CallFunc_Create_ReturnValue) == 0x000058, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, CallFunc_Array_Get_Item) == 0x000060, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, K2Node_MakeStruct_SlateChildSize) == 0x000080, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, CallFunc_AddChild_ReturnValue) == 0x000098, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, K2Node_DynamicCast_AsHorizontal_Box_Slot) == 0x0000A0, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::K2Node_DynamicCast_AsHorizontal_Box_Slot' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Initialize_Row_Selector, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'OptionsMenuRowSelector_C_Initialize_Row_Selector::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuRowSelector_C_Update_Row_Selector final
{
public:
	int32                                         Tab_Number;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuRowSelector_C_Update_Row_Selector) == 0x000004, "Wrong alignment on OptionsMenuRowSelector_C_Update_Row_Selector");
static_assert(sizeof(OptionsMenuRowSelector_C_Update_Row_Selector) == 0x000004, "Wrong size on OptionsMenuRowSelector_C_Update_Row_Selector");
static_assert(offsetof(OptionsMenuRowSelector_C_Update_Row_Selector, Tab_Number) == 0x000000, "Member 'OptionsMenuRowSelector_C_Update_Row_Selector::Tab_Number' has a wrong offset!");

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
// 0x0038 (0x0038 - 0x0000)
struct OptionsMenuRowSelector_C_Button_Hovered final
{
public:
	class UCommonButton*                          Param_Button_Hovered;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369C[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0018)()
};
static_assert(alignof(OptionsMenuRowSelector_C_Button_Hovered) == 0x000008, "Wrong alignment on OptionsMenuRowSelector_C_Button_Hovered");
static_assert(sizeof(OptionsMenuRowSelector_C_Button_Hovered) == 0x000038, "Wrong size on OptionsMenuRowSelector_C_Button_Hovered");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, Param_Button_Hovered) == 0x000000, "Member 'OptionsMenuRowSelector_C_Button_Hovered::Param_Button_Hovered' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, Temp_int_Variable) == 0x000008, "Member 'OptionsMenuRowSelector_C_Button_Hovered::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'OptionsMenuRowSelector_C_Button_Hovered::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'OptionsMenuRowSelector_C_Button_Hovered::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'OptionsMenuRowSelector_C_Button_Hovered::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000019, "Member 'OptionsMenuRowSelector_C_Button_Hovered::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'OptionsMenuRowSelector_C_Button_Hovered::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuRowSelector_C_Button_Hovered, CallFunc_Array_Get_Item) == 0x000020, "Member 'OptionsMenuRowSelector_C_Button_Hovered::CallFunc_Array_Get_Item' has a wrong offset!");

}

