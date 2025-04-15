#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputReflector

#include "Basic.hpp"

#include "CommonUI_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// 0x0050 (0x0050 - 0x0000)
struct InputReflector_C_ExecuteUbergraph_InputReflector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3984[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           CallFunc_GetFeatureState_OutFeatureState;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     CallFunc_GetFeatureState_OutReason;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3985[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_Event_AddedButton;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommonInputActionHandlerData          K2Node_Event_Data;                                 // 0x0020(0x0018)(NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InputReflector_C_ExecuteUbergraph_InputReflector) == 0x000008, "Wrong alignment on InputReflector_C_ExecuteUbergraph_InputReflector");
static_assert(sizeof(InputReflector_C_ExecuteUbergraph_InputReflector) == 0x000050, "Wrong size on InputReflector_C_ExecuteUbergraph_InputReflector");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, EntryPoint) == 0x000000, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::EntryPoint' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, CallFunc_GetFeatureState_OutFeatureState) == 0x000010, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, CallFunc_GetFeatureState_OutReason) == 0x000011, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, K2Node_SwitchEnum_CmpSuccess) == 0x000012, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, K2Node_Event_AddedButton) == 0x000018, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::K2Node_Event_AddedButton' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, K2Node_Event_Data) == 0x000020, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::K2Node_Event_Data' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000038, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000040, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(InputReflector_C_ExecuteUbergraph_InputReflector, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'InputReflector_C_ExecuteUbergraph_InputReflector::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function InputReflector.InputReflector_C.OnButtonAdded
// 0x0020 (0x0020 - 0x0000)
struct InputReflector_C_OnButtonAdded final
{
public:
	class UCommonButton*                          AddedButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommonInputActionHandlerData          Data;                                              // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(InputReflector_C_OnButtonAdded) == 0x000008, "Wrong alignment on InputReflector_C_OnButtonAdded");
static_assert(sizeof(InputReflector_C_OnButtonAdded) == 0x000020, "Wrong size on InputReflector_C_OnButtonAdded");
static_assert(offsetof(InputReflector_C_OnButtonAdded, AddedButton) == 0x000000, "Member 'InputReflector_C_OnButtonAdded::AddedButton' has a wrong offset!");
static_assert(offsetof(InputReflector_C_OnButtonAdded, Data) == 0x000008, "Member 'InputReflector_C_OnButtonAdded::Data' has a wrong offset!");

}

