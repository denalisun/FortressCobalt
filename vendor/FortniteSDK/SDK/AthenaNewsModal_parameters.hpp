#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNewsModal

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaNewsModal.AthenaNewsModal_C.ExecuteUbergraph_AthenaNewsModal
// 0x0028 (0x0028 - 0x0000)
struct AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3017[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCMSContext*                            CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal) == 0x000008, "Wrong alignment on AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal");
static_assert(sizeof(AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal) == 0x000028, "Wrong size on AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal");
static_assert(offsetof(AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal, EntryPoint) == 0x000000, "Member 'AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal, CallFunc_GetUINavigationManager_ReturnValue) == 0x000010, "Member 'AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal, CallFunc_GetContext_ReturnValue) == 0x000020, "Member 'AthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function AthenaNewsModal.AthenaNewsModal_C.OnMouseButtonDown_0
// 0x0210 (0x0210 - 0x0000)
struct AthenaNewsModal_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0068)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A0(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0158(0x00B8)()
};
static_assert(alignof(AthenaNewsModal_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on AthenaNewsModal_C_OnMouseButtonDown_0");
static_assert(sizeof(AthenaNewsModal_C_OnMouseButtonDown_0) == 0x000210, "Wrong size on AthenaNewsModal_C_OnMouseButtonDown_0");
static_assert(offsetof(AthenaNewsModal_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'AthenaNewsModal_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaNewsModal_C_OnMouseButtonDown_0, MouseEvent) == 0x000038, "Member 'AthenaNewsModal_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaNewsModal_C_OnMouseButtonDown_0, ReturnValue) == 0x0000A0, "Member 'AthenaNewsModal_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaNewsModal_C_OnMouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000158, "Member 'AthenaNewsModal_C_OnMouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

