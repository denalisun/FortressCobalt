#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformSlotScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature final
{
public:
	TArray<class UFortItem*>                      ItemsToSacrifice;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                         SacrificePoints;                                   // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentTier;                                       // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature");
static_assert(sizeof(ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature) == 0x000018, "Wrong size on ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature");
static_assert(offsetof(ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature, ItemsToSacrifice) == 0x000000, "Member 'ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature::ItemsToSacrifice' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature, SacrificePoints) == 0x000010, "Member 'ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature::SacrificePoints' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature, CurrentTier) == 0x000014, "Member 'ItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature::CurrentTier' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature final
{
public:
	bool                                          TransformActive;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature) == 0x000001, "Wrong alignment on ItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature");
static_assert(sizeof(ItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature) == 0x000001, "Wrong size on ItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature");
static_assert(offsetof(ItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature, TransformActive) == 0x000000, "Member 'ItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature::TransformActive' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
// 0x0048 (0x0048 - 0x0000)
struct ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedButtonIndex_ReturnValue;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemTransformSlotEntry_C*              CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SacrificePoints;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_CurrentTier;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              K2Node_ComponentBoundEvent_SelectedItem;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_TransformActive;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C79[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_CustomEvent_AssociatedButton2;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonIndex2;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7A[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_CustomEvent_AssociatedButton;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonIndex;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen");
static_assert(sizeof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen) == 0x000048, "Wrong size on ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, EntryPoint) == 0x000000, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, CallFunc_GetSelectedButtonIndex_ReturnValue) == 0x000004, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::CallFunc_GetSelectedButtonIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, CallFunc_Array_Get_Item) == 0x000008, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_ComponentBoundEvent_SacrificePoints) == 0x000010, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_ComponentBoundEvent_SacrificePoints' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_ComponentBoundEvent_CurrentTier) == 0x000014, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_ComponentBoundEvent_CurrentTier' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_ComponentBoundEvent_SelectedItem) == 0x000018, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_ComponentBoundEvent_TransformActive) == 0x000020, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_ComponentBoundEvent_TransformActive' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_CustomEvent_AssociatedButton2) == 0x000028, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_CustomEvent_AssociatedButton2' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_CustomEvent_ButtonIndex2) == 0x000030, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_CustomEvent_ButtonIndex2' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_CustomEvent_AssociatedButton) == 0x000038, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_CustomEvent_AssociatedButton' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen, K2Node_CustomEvent_ButtonIndex) == 0x000040, "Member 'ItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen::K2Node_CustomEvent_ButtonIndex' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_DoubleClicked
// 0x0010 (0x0010 - 0x0000)
struct ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked final
{
public:
	class UCommonButton*                          AssociatedButton;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonIndex;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked");
static_assert(sizeof(ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked) == 0x000010, "Wrong size on ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked");
static_assert(offsetof(ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked, AssociatedButton) == 0x000000, "Member 'ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked::AssociatedButton' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked, ButtonIndex) == 0x000008, "Member 'ItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked::ButtonIndex' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_Clicked
// 0x0010 (0x0010 - 0x0000)
struct ItemTransformSlotScreen_C_HandleSlotButton_Clicked final
{
public:
	class UCommonButton*                          AssociatedButton;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonIndex;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_HandleSlotButton_Clicked) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_HandleSlotButton_Clicked");
static_assert(sizeof(ItemTransformSlotScreen_C_HandleSlotButton_Clicked) == 0x000010, "Wrong size on ItemTransformSlotScreen_C_HandleSlotButton_Clicked");
static_assert(offsetof(ItemTransformSlotScreen_C_HandleSlotButton_Clicked, AssociatedButton) == 0x000000, "Member 'ItemTransformSlotScreen_C_HandleSlotButton_Clicked::AssociatedButton' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_HandleSlotButton_Clicked, ButtonIndex) == 0x000008, "Member 'ItemTransformSlotScreen_C_HandleSlotButton_Clicked::ButtonIndex' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature final
{
public:
	bool                                          TransformActive;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature) == 0x000001, "Wrong alignment on ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature");
static_assert(sizeof(ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature) == 0x000001, "Wrong size on ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature");
static_assert(offsetof(ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature, TransformActive) == 0x000000, "Member 'ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature::TransformActive' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature final
{
public:
	int32                                         SacrificePoints;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentTier;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature) == 0x000004, "Wrong alignment on ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature");
static_assert(sizeof(ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature) == 0x000008, "Wrong size on ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature");
static_assert(offsetof(ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature, SacrificePoints) == 0x000000, "Member 'ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature::SacrificePoints' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature, CurrentTier) == 0x000004, "Member 'ItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature::CurrentTier' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature final
{
public:
	class UFortItem*                              SelectedItem;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature");
static_assert(sizeof(ItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature) == 0x000008, "Wrong size on ItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature");
static_assert(offsetof(ItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature, SelectedItem) == 0x000000, "Member 'ItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature::SelectedItem' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
// 0x0004 (0x0004 - 0x0000)
struct ItemTransformSlotScreen_C_OpenItemPicker final
{
public:
	int32                                         CallFunc_GetSelectedButtonIndex_ReturnValue;       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_OpenItemPicker) == 0x000004, "Wrong alignment on ItemTransformSlotScreen_C_OpenItemPicker");
static_assert(sizeof(ItemTransformSlotScreen_C_OpenItemPicker) == 0x000004, "Wrong size on ItemTransformSlotScreen_C_OpenItemPicker");
static_assert(offsetof(ItemTransformSlotScreen_C_OpenItemPicker, CallFunc_GetSelectedButtonIndex_ReturnValue) == 0x000000, "Member 'ItemTransformSlotScreen_C_OpenItemPicker::CallFunc_GetSelectedButtonIndex_ReturnValue' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
// 0x0048 (0x0048 - 0x0000)
struct ItemTransformSlotScreen_C_SetupSlotScreen final
{
public:
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue2;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue3;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue4;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButton* AssociatedButton, int32 ButtonIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue5;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7B[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonButton* AssociatedButton, int32 ButtonIndex)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonGroup*                     CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_SetupSlotScreen) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_SetupSlotScreen");
static_assert(sizeof(ItemTransformSlotScreen_C_SetupSlotScreen) == 0x000048, "Wrong size on ItemTransformSlotScreen_C_SetupSlotScreen");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, CallFunc_Array_Add_ReturnValue) == 0x000000, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, CallFunc_Array_Add_ReturnValue2) == 0x000004, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::CallFunc_Array_Add_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, CallFunc_Array_Add_ReturnValue3) == 0x000008, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::CallFunc_Array_Add_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, CallFunc_Array_Add_ReturnValue4) == 0x00000C, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::CallFunc_Array_Add_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, CallFunc_Array_Add_ReturnValue5) == 0x000020, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::CallFunc_Array_Add_ReturnValue5' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, K2Node_CreateDelegate_OutputDelegate2) == 0x000028, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_SetupSlotScreen, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'ItemTransformSlotScreen_C_SetupSlotScreen::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
// 0x0004 (0x0004 - 0x0000)
struct ItemTransformSlotScreen_C_CloseItemPicker final
{
public:
	int32                                         CallFunc_GetSelectedButtonIndex_ReturnValue;       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_CloseItemPicker) == 0x000004, "Wrong alignment on ItemTransformSlotScreen_C_CloseItemPicker");
static_assert(sizeof(ItemTransformSlotScreen_C_CloseItemPicker) == 0x000004, "Wrong size on ItemTransformSlotScreen_C_CloseItemPicker");
static_assert(offsetof(ItemTransformSlotScreen_C_CloseItemPicker, CallFunc_GetSelectedButtonIndex_ReturnValue) == 0x000000, "Member 'ItemTransformSlotScreen_C_CloseItemPicker::CallFunc_GetSelectedButtonIndex_ReturnValue' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
// 0x0018 (0x0018 - 0x0000)
struct ItemTransformSlotScreen_C_ResetScreen final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C7D[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_ResetScreen) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_ResetScreen");
static_assert(sizeof(ItemTransformSlotScreen_C_ResetScreen) == 0x000018, "Wrong size on ItemTransformSlotScreen_C_ResetScreen");
static_assert(offsetof(ItemTransformSlotScreen_C_ResetScreen, Temp_int_Variable) == 0x000000, "Member 'ItemTransformSlotScreen_C_ResetScreen::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ResetScreen, Temp_object_Variable) == 0x000008, "Member 'ItemTransformSlotScreen_C_ResetScreen::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ResetScreen, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'ItemTransformSlotScreen_C_ResetScreen::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_ResetScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'ItemTransformSlotScreen_C_ResetScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
// 0x0020 (0x0020 - 0x0000)
struct ItemTransformSlotScreen_C_Get_Transform_Data final
{
public:
	TArray<class UFortItem*>                      Param_SacrificeItems;                              // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor)
	int32                                         CurrentSacrificePoints;                            // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentTier;                                       // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Transform_Data_CurrentSacrificePoints; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Transform_Data_CurrentTier;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_Get_Transform_Data) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_Get_Transform_Data");
static_assert(sizeof(ItemTransformSlotScreen_C_Get_Transform_Data) == 0x000020, "Wrong size on ItemTransformSlotScreen_C_Get_Transform_Data");
static_assert(offsetof(ItemTransformSlotScreen_C_Get_Transform_Data, Param_SacrificeItems) == 0x000000, "Member 'ItemTransformSlotScreen_C_Get_Transform_Data::Param_SacrificeItems' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_Get_Transform_Data, CurrentSacrificePoints) == 0x000010, "Member 'ItemTransformSlotScreen_C_Get_Transform_Data::CurrentSacrificePoints' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_Get_Transform_Data, CurrentTier) == 0x000014, "Member 'ItemTransformSlotScreen_C_Get_Transform_Data::CurrentTier' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_Get_Transform_Data, CallFunc_Get_Transform_Data_CurrentSacrificePoints) == 0x000018, "Member 'ItemTransformSlotScreen_C_Get_Transform_Data::CallFunc_Get_Transform_Data_CurrentSacrificePoints' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_Get_Transform_Data, CallFunc_Get_Transform_Data_CurrentTier) == 0x00001C, "Member 'ItemTransformSlotScreen_C_Get_Transform_Data::CallFunc_Get_Transform_Data_CurrentTier' has a wrong offset!");

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Navigate to Button
// 0x0018 (0x0018 - 0x0000)
struct ItemTransformSlotScreen_C_Navigate_to_Button final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C7E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          CallFunc_GetButtonAtIndex_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformSlotScreen_C_Navigate_to_Button) == 0x000008, "Wrong alignment on ItemTransformSlotScreen_C_Navigate_to_Button");
static_assert(sizeof(ItemTransformSlotScreen_C_Navigate_to_Button) == 0x000018, "Wrong size on ItemTransformSlotScreen_C_Navigate_to_Button");
static_assert(offsetof(ItemTransformSlotScreen_C_Navigate_to_Button, Param_Index) == 0x000000, "Member 'ItemTransformSlotScreen_C_Navigate_to_Button::Param_Index' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_Navigate_to_Button, CallFunc_GetButtonAtIndex_ReturnValue) == 0x000008, "Member 'ItemTransformSlotScreen_C_Navigate_to_Button::CallFunc_GetButtonAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformSlotScreen_C_Navigate_to_Button, CallFunc_GetUINavigationManager_ReturnValue) == 0x000010, "Member 'ItemTransformSlotScreen_C_Navigate_to_Button::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

}

