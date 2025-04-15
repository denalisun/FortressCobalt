#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectCycleWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.ExecuteUbergraph_ItemInspectCycleWidget
// 0x0040 (0x0040 - 0x0000)
struct ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              K2Node_Event_OldItem;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              K2Node_Event_NewItem;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_OffsetFromPreviousItem;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_393F[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget) == 0x000008, "Wrong alignment on ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget");
static_assert(sizeof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget) == 0x000040, "Wrong size on ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, EntryPoint) == 0x000000, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, K2Node_Event_OldItem) == 0x000010, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::K2Node_Event_OldItem' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, K2Node_Event_NewItem) == 0x000018, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::K2Node_Event_NewItem' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, K2Node_Event_OffsetFromPreviousItem) == 0x000020, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::K2Node_Event_OffsetFromPreviousItem' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, K2Node_ComponentBoundEvent_Button2) == 0x000028, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget, CallFunc_IsUsingGamepad_ReturnValue) == 0x000038, "Member 'ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.OnItemCycled
// 0x0018 (0x0018 - 0x0000)
struct ItemInspectCycleWidget_C_OnItemCycled final
{
public:
	class UFortItem*                              OldItem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              NewItem;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OffsetFromPreviousItem;                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemInspectCycleWidget_C_OnItemCycled) == 0x000008, "Wrong alignment on ItemInspectCycleWidget_C_OnItemCycled");
static_assert(sizeof(ItemInspectCycleWidget_C_OnItemCycled) == 0x000018, "Wrong size on ItemInspectCycleWidget_C_OnItemCycled");
static_assert(offsetof(ItemInspectCycleWidget_C_OnItemCycled, OldItem) == 0x000000, "Member 'ItemInspectCycleWidget_C_OnItemCycled::OldItem' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_OnItemCycled, NewItem) == 0x000008, "Member 'ItemInspectCycleWidget_C_OnItemCycled::NewItem' has a wrong offset!");
static_assert(offsetof(ItemInspectCycleWidget_C_OnItemCycled, OffsetFromPreviousItem) == 0x000010, "Member 'ItemInspectCycleWidget_C_OnItemCycled::OffsetFromPreviousItem' has a wrong offset!");

}

