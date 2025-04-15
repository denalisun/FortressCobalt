#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuSlider

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OptionsMenuSlider.OptionsMenuSlider_C.SliderChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_C_SliderChanged__DelegateSignature final
{
public:
	float                                         Slider_Value;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_SliderChanged__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_C_SliderChanged__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_C_SliderChanged__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_C_SliderChanged__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_C_SliderChanged__DelegateSignature, Slider_Value) == 0x000000, "Member 'OptionsMenuSlider_C_SliderChanged__DelegateSignature::Slider_Value' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.ExecuteUbergraph_OptionsMenuSlider
// 0x0178 (0x0178 - 0x0000)
struct OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36D0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent2;                          // 0x0010(0x0068)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0080(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B8(0x0068)()
	float                                         K2Node_ComponentBoundEvent_Value2;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0128(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor2;                    // 0x0138(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue2;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue3;                    // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36D1[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0160(0x0018)()
};
static_assert(alignof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider");
static_assert(sizeof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider) == 0x000178, "Wrong size on OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, EntryPoint) == 0x000000, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, Temp_bool_Variable) == 0x000004, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_MakeLiteralName_ReturnValue) == 0x000008, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_Event_MouseEvent2) == 0x000010, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_Event_MouseEvent2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000078, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_Event_MyGeometry) == 0x000080, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_Event_MouseEvent) == 0x0000B8, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_ComponentBoundEvent_Value2) == 0x000120, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_ComponentBoundEvent_Value2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_ComponentBoundEvent_Value) == 0x000124, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_MakeStruct_LinearColor) == 0x000128, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_MakeStruct_LinearColor2) == 0x000138, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_MakeStruct_LinearColor2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetValue_ReturnValue) == 0x000148, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetValue_ReturnValue2) == 0x00014C, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetValue_ReturnValue2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_GetValue_ReturnValue3) == 0x000150, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_GetValue_ReturnValue3' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_Less_FloatFloat_ReturnValue) == 0x000154, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, K2Node_Select_Default) == 0x000158, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00015C, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider, CallFunc_Conv_FloatToText_ReturnValue) == 0x000160, "Member 'OptionsMenuSlider_C_ExecuteUbergraph_OptionsMenuSlider::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'OptionsMenuSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.OnMouseEnter
// 0x00A0 (0x00A0 - 0x0000)
struct OptionsMenuSlider_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuSlider_C_OnMouseEnter) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_OnMouseEnter");
static_assert(sizeof(OptionsMenuSlider_C_OnMouseEnter) == 0x0000A0, "Wrong size on OptionsMenuSlider_C_OnMouseEnter");
static_assert(offsetof(OptionsMenuSlider_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'OptionsMenuSlider_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'OptionsMenuSlider_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.OnMouseLeave
// 0x0068 (0x0068 - 0x0000)
struct OptionsMenuSlider_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuSlider_C_OnMouseLeave) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_OnMouseLeave");
static_assert(sizeof(OptionsMenuSlider_C_OnMouseLeave) == 0x000068, "Wrong size on OptionsMenuSlider_C_OnMouseLeave");
static_assert(offsetof(OptionsMenuSlider_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'OptionsMenuSlider_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.Update Slider
// 0x0068 (0x0068 - 0x0000)
struct OptionsMenuSlider_C_Update_Slider final
{
public:
	class FText                                   Slider_Text;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         Slider_Value;                                      // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D2[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Param_Hover_Text;                                  // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                       Tooltip_Text_Block;                                // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0048(0x0018)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_Update_Slider) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_Update_Slider");
static_assert(sizeof(OptionsMenuSlider_C_Update_Slider) == 0x000068, "Wrong size on OptionsMenuSlider_C_Update_Slider");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Slider_Text) == 0x000000, "Member 'OptionsMenuSlider_C_Update_Slider::Slider_Text' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Slider_Value) == 0x000018, "Member 'OptionsMenuSlider_C_Update_Slider::Slider_Value' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Param_Hover_Text) == 0x000020, "Member 'OptionsMenuSlider_C_Update_Slider::Param_Hover_Text' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, Tooltip_Text_Block) == 0x000038, "Member 'OptionsMenuSlider_C_Update_Slider::Tooltip_Text_Block' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, CallFunc_MakeLiteralName_ReturnValue) == 0x000040, "Member 'OptionsMenuSlider_C_Update_Slider::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, CallFunc_Conv_FloatToText_ReturnValue) == 0x000048, "Member 'OptionsMenuSlider_C_Update_Slider::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_Update_Slider, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'OptionsMenuSlider_C_Update_Slider::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.Center on Widget
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuSlider_C_Center_on_Widget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_Center_on_Widget) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_Center_on_Widget");
static_assert(sizeof(OptionsMenuSlider_C_Center_on_Widget) == 0x000008, "Wrong size on OptionsMenuSlider_C_Center_on_Widget");
static_assert(offsetof(OptionsMenuSlider_C_Center_on_Widget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'OptionsMenuSlider_C_Center_on_Widget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function OptionsMenuSlider.OptionsMenuSlider_C.OnFocusReceived
// 0x01D0 (0x01D0 - 0x0000)
struct OptionsMenuSlider_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D3[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0108(0x00B8)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36D4[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue2;      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_C_OnFocusReceived) == 0x000008, "Wrong alignment on OptionsMenuSlider_C_OnFocusReceived");
static_assert(sizeof(OptionsMenuSlider_C_OnFocusReceived) == 0x0001D0, "Wrong size on OptionsMenuSlider_C_OnFocusReceived");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'OptionsMenuSlider_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'OptionsMenuSlider_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'OptionsMenuSlider_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, CallFunc_GetUINavigationManager_ReturnValue) == 0x0000F8, "Member 'OptionsMenuSlider_C_OnFocusReceived::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000100, "Member 'OptionsMenuSlider_C_OnFocusReceived::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000108, "Member 'OptionsMenuSlider_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001C0, "Member 'OptionsMenuSlider_C_OnFocusReceived::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_C_OnFocusReceived, CallFunc_GetUINavigationManager_ReturnValue2) == 0x0001C8, "Member 'OptionsMenuSlider_C_OnFocusReceived::CallFunc_GetUINavigationManager_ReturnValue2' has a wrong offset!");

}

