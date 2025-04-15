#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardsListEntry

#include "Basic.hpp"

#include "RewardListEntryType_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function RewardsListEntry.RewardsListEntry_C.ExecuteUbergraph_RewardsListEntry
// 0x03F0 (0x03F0 - 0x0000)
struct RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERewardListEntryType                          Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable5;                               // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable6;                               // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E57[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0018(0x0078)()
	struct FLinearColor                           CallFunc_GetRarityColor_ReturnValue;               // 0x0090(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A0(0x0028)()
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue2; // 0x00C8(0x0078)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0140(0x0018)()
	int32                                         Temp_int_Variable2;                                // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E58[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01B0(0x0018)()
	struct FLinearColor                           CallFunc_GetRarityColor_ReturnValue2;              // 0x01C8(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor2;                     // 0x01D8(0x0028)()
	int32                                         CallFunc_GetNumInStack_ReturnValue;                // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E59[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue2;              // 0x0208(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5A[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue3;              // 0x0228(0x0018)()
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5B[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0248(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5C[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPrimaryCategory_ItemCategoryText;      // 0x0268(0x0018)()
	bool                                          CallFunc_GetPrimaryCategory_ReturnValue;           // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5D[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue3; // 0x0288(0x0078)()
	int32                                         Temp_int_Variable3;                                // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5E[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPrimaryCategory_ItemCategoryText2;     // 0x0308(0x0018)()
	bool                                          CallFunc_GetPrimaryCategory_ReturnValue2;          // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5F[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0328(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue4;              // 0x0368(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData3;             // 0x0380(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x03C0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x03D0(0x0018)()
	ERewardListEntryType                          Temp_byte_Variable7;                               // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E60[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select3_Default;                            // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry) == 0x000008, "Wrong alignment on RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry");
static_assert(sizeof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry) == 0x0003F0, "Wrong size on RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, EntryPoint) == 0x000000, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_int_Variable) == 0x000004, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_byte_Variable) == 0x000008, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_byte_Variable2) == 0x000009, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_byte_Variable3) == 0x00000A, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_byte_Variable4) == 0x00000B, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_bool_Variable) == 0x00000C, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_byte_Variable5) == 0x00000D, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_byte_Variable6) == 0x00000E, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_byte_Variable6' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_Select_Default) == 0x00000F, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetType_ReturnValue) == 0x000010, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue) == 0x000018, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetRarityColor_ReturnValue) == 0x000090, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetRarityColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_MakeStruct_SlateColor) == 0x0000A0, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue2) == 0x0000C8, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetDisplayName_ReturnValue) == 0x000140, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_int_Variable2) == 0x000158, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_MakeStruct_FormatArgumentData) == 0x000160, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_MakeArray_Array) == 0x0001A0, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_Format_ReturnValue) == 0x0001B0, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetRarityColor_ReturnValue2) == 0x0001C8, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetRarityColor_ReturnValue2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_MakeStruct_SlateColor2) == 0x0001D8, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_MakeStruct_SlateColor2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetNumInStack_ReturnValue) == 0x000200, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetNumInStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetDisplayName_ReturnValue2) == 0x000208, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetDisplayName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000220, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_Greater_IntInt_ReturnValue) == 0x000224, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetDisplayName_ReturnValue3) == 0x000228, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetDisplayName_ReturnValue3' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_Select2_Default) == 0x000240, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetEmptyText_ReturnValue) == 0x000248, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000260, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetPrimaryCategory_ItemCategoryText) == 0x000268, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetPrimaryCategory_ItemCategoryText' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetPrimaryCategory_ReturnValue) == 0x000280, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetPrimaryCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue3) == 0x000288, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue3' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_int_Variable3) == 0x000300, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_int_Variable3' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetPrimaryCategory_ItemCategoryText2) == 0x000308, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetPrimaryCategory_ItemCategoryText2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetPrimaryCategory_ReturnValue2) == 0x000320, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetPrimaryCategory_ReturnValue2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_MakeStruct_FormatArgumentData2) == 0x000328, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_GetDisplayName_ReturnValue4) == 0x000368, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_GetDisplayName_ReturnValue4' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_MakeStruct_FormatArgumentData3) == 0x000380, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_MakeStruct_FormatArgumentData3' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_MakeArray_Array2) == 0x0003C0, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, CallFunc_Format_ReturnValue2) == 0x0003D0, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::CallFunc_Format_ReturnValue2' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, Temp_byte_Variable7) == 0x0003E8, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::Temp_byte_Variable7' has a wrong offset!");
static_assert(offsetof(RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry, K2Node_Select3_Default) == 0x0003EC, "Member 'RewardsListEntry_C_ExecuteUbergraph_RewardsListEntry::K2Node_Select3_Default' has a wrong offset!");

}

