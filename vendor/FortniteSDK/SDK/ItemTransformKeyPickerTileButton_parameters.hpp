#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyPickerTileButton

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
// 0x0030 (0x0030 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldUseNewItemCards_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA2[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        K2Node_Event_OwningList;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetCardDimensions_ReturnValue;            // 0x0028(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton) == 0x000030, "Wrong size on ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, EntryPoint) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, CallFunc_ShouldUseNewItemCards_ReturnValue) == 0x000004, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::CallFunc_ShouldUseNewItemCards_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, Temp_bool_Variable) == 0x000005, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, K2Node_Event_InData) == 0x000008, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, K2Node_Event_OwningList) == 0x000010, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::K2Node_Event_OwningList' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, K2Node_Select_Default) == 0x000020, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton, CallFunc_GetCardDimensions_ReturnValue) == 0x000028, "Member 'ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton::CallFunc_GetCardDimensions_ReturnValue' has a wrong offset!");

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        OwningList;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_SetData) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_SetData");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_SetData) == 0x000010, "Wrong size on ItemTransformKeyPickerTileButton_C_SetData");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_SetData, InData) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_SetData::InData' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_SetData, OwningList) == 0x000008, "Member 'ItemTransformKeyPickerTileButton_C_SetData::OwningList' has a wrong offset!");

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
// 0x0068 (0x0068 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_Update_Bang_State final
{
public:
	struct FGameplayTagContainer                  CatalystTags;                                      // 0x0000(0x0020)(Edit, BlueprintVisible)
	class AFortPlayerController*                  CallFunc_Get_Fort_PC_FortPC;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseNodeItem*                  CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA4[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_Get_Transform_Key_Catalysts_ReturnValue;  // 0x0038(0x0020)()
	class UFortAccountItem*                       CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue2;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_Update_Bang_State) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_Update_Bang_State");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_Update_Bang_State) == 0x000068, "Wrong size on ItemTransformKeyPickerTileButton_C_Update_Bang_State");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CatalystTags) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CatalystTags' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_Get_Fort_PC_FortPC) == 0x000020, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_Get_Fort_PC_FortPC' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue) == 0x000028, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_GetNumGameplayTagsInContainer_ReturnValue) == 0x000030, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_GetNumGameplayTagsInContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000034, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000035, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x000036, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_Get_Transform_Key_Catalysts_ReturnValue) == 0x000038, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_Get_Transform_Key_Catalysts_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_Get_Transform_Key_AsFort_Account_Item) == 0x000058, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_Get_Transform_Key_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue2) == 0x000060, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Update_Bang_State, CallFunc_Not_PreBool_ReturnValue2) == 0x000061, "Member 'ItemTransformKeyPickerTileButton_C_Update_Bang_State::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
// 0x0020 (0x0020 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_Get_Transform_Key final
{
public:
	class UFortAccountItem*                       AsFort_Account_Item;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetData_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       K2Node_DynamicCast_AsFort_Account_Item;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_Get_Transform_Key");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key) == 0x000020, "Wrong size on ItemTransformKeyPickerTileButton_C_Get_Transform_Key");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key, AsFort_Account_Item) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key::AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key, CallFunc_GetData_ReturnValue) == 0x000008, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key::CallFunc_GetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key, K2Node_DynamicCast_AsFort_Account_Item) == 0x000010, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key::K2Node_DynamicCast_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
// 0x0060 (0x0060 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable final
{
public:
	bool                                          bConsumedOnConversion;                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAccountItem*                       CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*   K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA6[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_GetRequiredCatalysts_ReturnValue;         // 0x0028(0x0020)()
	TArray<struct FGameplayTag>                   CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x0048(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable) == 0x000060, "Wrong size on ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, bConsumedOnConversion) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::bConsumedOnConversion' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, CallFunc_Get_Transform_Key_AsFort_Account_Item) == 0x000008, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::CallFunc_Get_Transform_Key_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000010, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition) == 0x000018, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, CallFunc_GetRequiredCatalysts_ReturnValue) == 0x000028, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::CallFunc_GetRequiredCatalysts_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, CallFunc_BreakGameplayTagContainer_GameplayTags) == 0x000048, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::CallFunc_BreakGameplayTagContainer_GameplayTags' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00005C, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable, CallFunc_BooleanAND_ReturnValue) == 0x00005D, "Member 'ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item As Seen
// 0x0068 (0x0068 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen final
{
public:
	struct FGameplayTagContainer                  CatalystTags;                                      // 0x0000(0x0020)(Edit, BlueprintVisible)
	class AFortPlayerController*                  CallFunc_Get_Fort_PC_FortPC;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_Get_Transform_Key_Catalysts_ReturnValue;  // 0x0028(0x0020)()
	class UFortHomebaseNodeItem*                  CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA7[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAccountItem*                       CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen) == 0x000068, "Wrong size on ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen, CatalystTags) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen::CatalystTags' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen, CallFunc_Get_Fort_PC_FortPC) == 0x000020, "Member 'ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen::CallFunc_Get_Fort_PC_FortPC' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen, CallFunc_Get_Transform_Key_Catalysts_ReturnValue) == 0x000028, "Member 'ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen::CallFunc_Get_Transform_Key_Catalysts_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen, CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue) == 0x000048, "Member 'ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen::CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen, CallFunc_GetNumGameplayTagsInContainer_ReturnValue) == 0x000050, "Member 'ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen::CallFunc_GetNumGameplayTagsInContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen, CallFunc_Get_Transform_Key_AsFort_Account_Item) == 0x000058, "Member 'ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen::CallFunc_Get_Transform_Key_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000060, "Member 'ItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
// 0x0060 (0x0060 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts final
{
public:
	struct FGameplayTagContainer                  ReturnValue;                                       // 0x0000(0x0020)(Parm, OutParm, ReturnParm)
	class UFortAccountItem*                       CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*   K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_GetRequiredCatalysts_ReturnValue;         // 0x0040(0x0020)()
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts) == 0x000060, "Wrong size on ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts, ReturnValue) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts::ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts, CallFunc_Get_Transform_Key_AsFort_Account_Item) == 0x000020, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts::CallFunc_Get_Transform_Key_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000028, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts, K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition) == 0x000030, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts::K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts, CallFunc_GetRequiredCatalysts_ReturnValue) == 0x000040, "Member 'ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts::CallFunc_GetRequiredCatalysts_ReturnValue' has a wrong offset!");

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
// 0x0020 (0x0020 - 0x0000)
struct ItemTransformKeyPickerTileButton_C_Get_Fort_PC final
{
public:
	class AFortPlayerController*                  FortPC;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyPickerTileButton_C_Get_Fort_PC) == 0x000008, "Wrong alignment on ItemTransformKeyPickerTileButton_C_Get_Fort_PC");
static_assert(sizeof(ItemTransformKeyPickerTileButton_C_Get_Fort_PC) == 0x000020, "Wrong size on ItemTransformKeyPickerTileButton_C_Get_Fort_PC");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Fort_PC, FortPC) == 0x000000, "Member 'ItemTransformKeyPickerTileButton_C_Get_Fort_PC::FortPC' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Fort_PC, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'ItemTransformKeyPickerTileButton_C_Get_Fort_PC::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Fort_PC, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000010, "Member 'ItemTransformKeyPickerTileButton_C_Get_Fort_PC::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyPickerTileButton_C_Get_Fort_PC, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ItemTransformKeyPickerTileButton_C_Get_Fort_PC::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

