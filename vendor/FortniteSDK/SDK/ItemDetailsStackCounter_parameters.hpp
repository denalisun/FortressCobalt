#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsStackCounter

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E16[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bItemChanged;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bAmmoChanged;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIngredientsChanged;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter) == 0x000008, "Wrong alignment on ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter");
static_assert(sizeof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter) == 0x000020, "Wrong size on ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, EntryPoint) == 0x000000, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, K2Node_Event_IsDesignTime) == 0x000018, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, K2Node_CustomEvent_bItemChanged) == 0x000019, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::K2Node_CustomEvent_bItemChanged' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, K2Node_CustomEvent_bAmmoChanged) == 0x00001A, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::K2Node_CustomEvent_bAmmoChanged' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, K2Node_CustomEvent_bIngredientsChanged) == 0x00001B, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::K2Node_CustomEvent_bIngredientsChanged' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter, CallFunc_IsValid_ReturnValue2) == 0x00001D, "Member 'ItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleOnItemChanged
// 0x0003 (0x0003 - 0x0000)
struct ItemDetailsStackCounter_C_HandleOnItemChanged final
{
public:
	bool                                          bItemChanged;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAmmoChanged;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIngredientsChanged;                               // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemDetailsStackCounter_C_HandleOnItemChanged) == 0x000001, "Wrong alignment on ItemDetailsStackCounter_C_HandleOnItemChanged");
static_assert(sizeof(ItemDetailsStackCounter_C_HandleOnItemChanged) == 0x000003, "Wrong size on ItemDetailsStackCounter_C_HandleOnItemChanged");
static_assert(offsetof(ItemDetailsStackCounter_C_HandleOnItemChanged, bItemChanged) == 0x000000, "Member 'ItemDetailsStackCounter_C_HandleOnItemChanged::bItemChanged' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_HandleOnItemChanged, bAmmoChanged) == 0x000001, "Member 'ItemDetailsStackCounter_C_HandleOnItemChanged::bAmmoChanged' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_HandleOnItemChanged, bIngredientsChanged) == 0x000002, "Member 'ItemDetailsStackCounter_C_HandleOnItemChanged::bIngredientsChanged' has a wrong offset!");

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ItemDetailsStackCounter_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemDetailsStackCounter_C_PreConstruct) == 0x000001, "Wrong alignment on ItemDetailsStackCounter_C_PreConstruct");
static_assert(sizeof(ItemDetailsStackCounter_C_PreConstruct) == 0x000001, "Wrong size on ItemDetailsStackCounter_C_PreConstruct");
static_assert(offsetof(ItemDetailsStackCounter_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ItemDetailsStackCounter_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update Stack Count
// 0x0060 (0x0060 - 0x0000)
struct ItemDetailsStackCounter_C_Update_Stack_Count final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E17[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Truncate_Integer_Value_Formatted_Value;   // 0x0008(0x0018)()
	int32                                         CallFunc_GetNumInStack_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E18[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E19[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0048(0x0018)()
};
static_assert(alignof(ItemDetailsStackCounter_C_Update_Stack_Count) == 0x000008, "Wrong alignment on ItemDetailsStackCounter_C_Update_Stack_Count");
static_assert(sizeof(ItemDetailsStackCounter_C_Update_Stack_Count) == 0x000060, "Wrong size on ItemDetailsStackCounter_C_Update_Stack_Count");
static_assert(offsetof(ItemDetailsStackCounter_C_Update_Stack_Count, Temp_bool_Variable) == 0x000000, "Member 'ItemDetailsStackCounter_C_Update_Stack_Count::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Update_Stack_Count, CallFunc_Truncate_Integer_Value_Formatted_Value) == 0x000008, "Member 'ItemDetailsStackCounter_C_Update_Stack_Count::CallFunc_Truncate_Integer_Value_Formatted_Value' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Update_Stack_Count, CallFunc_GetNumInStack_ReturnValue) == 0x000020, "Member 'ItemDetailsStackCounter_C_Update_Stack_Count::CallFunc_GetNumInStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Update_Stack_Count, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'ItemDetailsStackCounter_C_Update_Stack_Count::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Update_Stack_Count, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'ItemDetailsStackCounter_C_Update_Stack_Count::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Update_Stack_Count, K2Node_Select_Default) == 0x000048, "Member 'ItemDetailsStackCounter_C_Update_Stack_Count::K2Node_Select_Default' has a wrong offset!");

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
// 0x0006 (0x0006 - 0x0000)
struct ItemDetailsStackCounter_C_Refresh_Visibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemDetailsStackCounter_C_Refresh_Visibility) == 0x000001, "Wrong alignment on ItemDetailsStackCounter_C_Refresh_Visibility");
static_assert(sizeof(ItemDetailsStackCounter_C_Refresh_Visibility) == 0x000006, "Wrong size on ItemDetailsStackCounter_C_Refresh_Visibility");
static_assert(offsetof(ItemDetailsStackCounter_C_Refresh_Visibility, Temp_bool_Variable) == 0x000000, "Member 'ItemDetailsStackCounter_C_Refresh_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Refresh_Visibility, Temp_byte_Variable) == 0x000001, "Member 'ItemDetailsStackCounter_C_Refresh_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Refresh_Visibility, Temp_byte_Variable2) == 0x000002, "Member 'ItemDetailsStackCounter_C_Refresh_Visibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Refresh_Visibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000003, "Member 'ItemDetailsStackCounter_C_Refresh_Visibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Refresh_Visibility, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'ItemDetailsStackCounter_C_Refresh_Visibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsStackCounter_C_Refresh_Visibility, K2Node_Select_Default) == 0x000005, "Member 'ItemDetailsStackCounter_C_Refresh_Visibility::K2Node_Select_Default' has a wrong offset!");

}

