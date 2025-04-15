#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferPurchasedWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget
// 0x0078 (0x0078 - 0x0000)
struct AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F45[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F46[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0030(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	EFrontEndCamera                               Temp_byte_Variable2;                               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F47[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnique_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPanelOnStack_ReturnValue;               // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFrontEndCamera                               K2Node_Select_Default;                             // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F48[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue2;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*             CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget");
static_assert(sizeof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget) == 0x000078, "Wrong size on AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, EntryPoint) == 0x000000, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, Temp_byte_Variable) == 0x000010, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_GetContext_ReturnValue2) == 0x000018, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_GetContext_ReturnValue3) == 0x000020, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_GetInputManager_ReturnValue) == 0x000028, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_GetInputManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, K2Node_MakeStruct_DataTableRowHandle) == 0x000030, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, Temp_byte_Variable2) == 0x000050, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_GetOfferInfo_ReturnValue) == 0x000058, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_IsUnique_ReturnValue) == 0x000060, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_IsUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, Temp_bool_Variable) == 0x000061, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_IsPanelOnStack_ReturnValue) == 0x000062, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_IsPanelOnStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, K2Node_Select_Default) == 0x000063, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_GetOfferInfo_ReturnValue2) == 0x000068, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_GetOfferInfo_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget, CallFunc_GetFirstGrantItemDefinition_ReturnValue) == 0x000070, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget::CallFunc_GetFirstGrantItemDefinition_ReturnValue' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.UpdateFromOffer
// 0x0110 (0x0110 - 0x0000)
struct AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer final
{
public:
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue2;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue2;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue2;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetName_ReturnValue;                      // 0x0038(0x0018)()
	int32                                         CallFunc_GetFirstGrantQuantity_ReturnValue;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F49[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0058(0x0018)()
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4A[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAccountItemDefinition*             CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4B[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0090(0x0080)()
};
static_assert(alignof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer");
static_assert(sizeof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer) == 0x000110, "Wrong size on AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_MakeLiteralName_ReturnValue) == 0x000000, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_MakeLiteralName_ReturnValue2) == 0x000008, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_MakeLiteralName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000018, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetDynamicMaterial_ReturnValue2) == 0x000020, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetDynamicMaterial_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetOfferInfo_ReturnValue) == 0x000028, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetOfferInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetOfferInfo_ReturnValue2) == 0x000030, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetOfferInfo_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetName_ReturnValue) == 0x000038, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetFirstGrantQuantity_ReturnValue) == 0x000050, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetFirstGrantQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_TextToUpper_ReturnValue) == 0x000058, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_Multiply_IntInt_ReturnValue) == 0x000070, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetFirstGrantItemDefinition_ReturnValue) == 0x000078, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetFirstGrantItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x000080, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_GetRarity_ReturnValue) == 0x000088, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer, CallFunc_BPGetRarityData_ReturnValue) == 0x000090, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.HandleBack
// 0x0001 (0x0001 - 0x0000)
struct AthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack) == 0x000001, "Wrong alignment on AthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack");
static_assert(sizeof(AthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack) == 0x000001, "Wrong size on AthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack, Passthrough) == 0x000000, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack::Passthrough' has a wrong offset!");

// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.PopScreen
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen final
{
public:
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen");
static_assert(sizeof(AthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen) == 0x000008, "Wrong size on AthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen");
static_assert(offsetof(AthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000000, "Member 'AthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

}

