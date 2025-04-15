#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MTXButton

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
// 0x00D0 (0x00D0 - 0x0000)
struct MTXButton_C_ExecuteUbergraph_MTXButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2504[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FFortPrivateAccountInfo                K2Node_CustomEvent_NewInfo;                        // 0x0020(0x0038)(NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           CallFunc_GetFeatureState_OutFeatureState;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     CallFunc_GetFeatureState_OutReason;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2505[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue3;                  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPrivateAccountInfo                CallFunc_GetLocalAccountInfo_Result;               // 0x0078(0x0038)(NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2506[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFortPrivateAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate2;             // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MTXButton_C_ExecuteUbergraph_MTXButton) == 0x000008, "Wrong alignment on MTXButton_C_ExecuteUbergraph_MTXButton");
static_assert(sizeof(MTXButton_C_ExecuteUbergraph_MTXButton) == 0x0000D0, "Wrong size on MTXButton_C_ExecuteUbergraph_MTXButton");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, EntryPoint) == 0x000000, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_CustomEvent_NewInfo) == 0x000020, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_CustomEvent_NewInfo' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetContext_ReturnValue2) == 0x000058, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_ComponentBoundEvent_Button) == 0x000060, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetFeatureState_OutFeatureState) == 0x000068, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetFeatureState_OutReason) == 0x000069, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_IsInZone_ReturnValue) == 0x00006A, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00006B, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_Not_PreBool_ReturnValue) == 0x00006C, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_BooleanAND_ReturnValue) == 0x00006D, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetContext_ReturnValue3) == 0x000070, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetLocalAccountInfo_Result) == 0x000078, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetLocalAccountInfo_Result' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000B0, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_CustomEvent_bUsingGamepad) == 0x0000B4, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_CreateDelegate_OutputDelegate2) == 0x0000B8, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetUINavigationManager_ReturnValue) == 0x0000C8, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function MTXButton.MTXButton_C.HandleInputActionChnaged
// 0x0001 (0x0001 - 0x0000)
struct MTXButton_C_HandleInputActionChnaged final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MTXButton_C_HandleInputActionChnaged) == 0x000001, "Wrong alignment on MTXButton_C_HandleInputActionChnaged");
static_assert(sizeof(MTXButton_C_HandleInputActionChnaged) == 0x000001, "Wrong size on MTXButton_C_HandleInputActionChnaged");
static_assert(offsetof(MTXButton_C_HandleInputActionChnaged, bUsingGamepad) == 0x000000, "Member 'MTXButton_C_HandleInputActionChnaged::bUsingGamepad' has a wrong offset!");

// Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Param_Button;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature, Param_Button) == 0x000000, "Member 'MTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature::Param_Button' has a wrong offset!");

// Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged
// 0x0038 (0x0038 - 0x0000)
struct MTXButton_C_HandleLocalAccountInfoChanged final
{
public:
	struct FFortPrivateAccountInfo                NewInfo;                                           // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(MTXButton_C_HandleLocalAccountInfoChanged) == 0x000004, "Wrong alignment on MTXButton_C_HandleLocalAccountInfoChanged");
static_assert(sizeof(MTXButton_C_HandleLocalAccountInfoChanged) == 0x000038, "Wrong size on MTXButton_C_HandleLocalAccountInfoChanged");
static_assert(offsetof(MTXButton_C_HandleLocalAccountInfoChanged, NewInfo) == 0x000000, "Member 'MTXButton_C_HandleLocalAccountInfoChanged::NewInfo' has a wrong offset!");

// Function MTXButton.MTXButton_C.UpdateAmount
// 0x003C (0x003C - 0x0000)
struct MTXButton_C_UpdateAmount final
{
public:
	struct FFortPrivateAccountInfo                FortPrivateAccountInfo;                            // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MTXButton_C_UpdateAmount) == 0x000004, "Wrong alignment on MTXButton_C_UpdateAmount");
static_assert(sizeof(MTXButton_C_UpdateAmount) == 0x00003C, "Wrong size on MTXButton_C_UpdateAmount");
static_assert(offsetof(MTXButton_C_UpdateAmount, FortPrivateAccountInfo) == 0x000000, "Member 'MTXButton_C_UpdateAmount::FortPrivateAccountInfo' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateAmount, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'MTXButton_C_UpdateAmount::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_0
// 0x0090 (0x0090 - 0x0000)
struct MTXButton_C_Get_Button_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2507[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2508[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue2;             // 0x0040(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue3;             // 0x0058(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0070(0x0018)()
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MTXButton_C_Get_Button_ToolTipWidget_0) == 0x000008, "Wrong alignment on MTXButton_C_Get_Button_ToolTipWidget_0");
static_assert(sizeof(MTXButton_C_Get_Button_ToolTipWidget_0) == 0x000090, "Wrong size on MTXButton_C_Get_Button_ToolTipWidget_0");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_IsInZone_ReturnValue) == 0x000018, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_IsUsingGamepad_ReturnValue) == 0x000019, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_MakeLiteralText_ReturnValue) == 0x000020, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, Temp_bool_Variable) == 0x000038, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_MakeLiteralText_ReturnValue2) == 0x000040, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_MakeLiteralText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_MakeLiteralText_ReturnValue3) == 0x000058, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_MakeLiteralText_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, K2Node_Select_Default) == 0x000070, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MTXButton_C_Get_Button_ToolTipWidget_0, CallFunc_Create_Basic_Tooltip_Output) == 0x000088, "Member 'MTXButton_C_Get_Button_ToolTipWidget_0::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function MTXButton.MTXButton_C.UpdateState
// 0x0028 (0x0028 - 0x0000)
struct MTXButton_C_UpdateState final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2509[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select2_Default;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MTXButton_C_UpdateState) == 0x000008, "Wrong alignment on MTXButton_C_UpdateState");
static_assert(sizeof(MTXButton_C_UpdateState) == 0x000028, "Wrong size on MTXButton_C_UpdateState");
static_assert(offsetof(MTXButton_C_UpdateState, Temp_int_Variable) == 0x000000, "Member 'MTXButton_C_UpdateState::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, Temp_int_Variable2) == 0x000004, "Member 'MTXButton_C_UpdateState::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, Temp_bool_Variable) == 0x000008, "Member 'MTXButton_C_UpdateState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, Temp_byte_Variable) == 0x000009, "Member 'MTXButton_C_UpdateState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, Temp_byte_Variable2) == 0x00000A, "Member 'MTXButton_C_UpdateState::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'MTXButton_C_UpdateState::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, CallFunc_GetContext_ReturnValue2) == 0x000018, "Member 'MTXButton_C_UpdateState::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, CallFunc_IsUsingGamepad_ReturnValue) == 0x000020, "Member 'MTXButton_C_UpdateState::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, CallFunc_IsInZone_ReturnValue) == 0x000021, "Member 'MTXButton_C_UpdateState::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, K2Node_Select_Default) == 0x000022, "Member 'MTXButton_C_UpdateState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, Temp_bool_Variable2) == 0x000023, "Member 'MTXButton_C_UpdateState::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_UpdateState, K2Node_Select2_Default) == 0x000024, "Member 'MTXButton_C_UpdateState::K2Node_Select2_Default' has a wrong offset!");

}

