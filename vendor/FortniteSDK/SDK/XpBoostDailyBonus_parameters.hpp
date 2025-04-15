#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostDailyBonus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
// 0x01B0 (0x01B0 - 0x0000)
struct XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B65[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    K2Node_Event_NewInfo;                              // 0x0008(0x01A8)()
};
static_assert(alignof(XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus) == 0x000008, "Wrong alignment on XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus");
static_assert(sizeof(XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus) == 0x0001B0, "Wrong size on XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus");
static_assert(offsetof(XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus, EntryPoint) == 0x000000, "Member 'XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus::EntryPoint' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus, K2Node_Event_NewInfo) == 0x000008, "Member 'XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus::K2Node_Event_NewInfo' has a wrong offset!");

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.OnPlayerInfoChanged
// 0x01A8 (0x01A8 - 0x0000)
struct XpBoostDailyBonus_C_OnPlayerInfoChanged final
{
public:
	struct FFortTeamMemberInfo                    NewInfo;                                           // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(XpBoostDailyBonus_C_OnPlayerInfoChanged) == 0x000008, "Wrong alignment on XpBoostDailyBonus_C_OnPlayerInfoChanged");
static_assert(sizeof(XpBoostDailyBonus_C_OnPlayerInfoChanged) == 0x0001A8, "Wrong size on XpBoostDailyBonus_C_OnPlayerInfoChanged");
static_assert(offsetof(XpBoostDailyBonus_C_OnPlayerInfoChanged, NewInfo) == 0x000000, "Member 'XpBoostDailyBonus_C_OnPlayerInfoChanged::NewInfo' has a wrong offset!");

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
// 0x0100 (0x0100 - 0x0000)
struct XpBoostDailyBonus_C_Update_Daily_Bonus final
{
public:
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetRestXpBonusPercent_ReturnValue;        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B66[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0060(0x0018)()
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B67[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRestXpBalance_ReturnValue;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B68[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x00E0(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue2;             // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(XpBoostDailyBonus_C_Update_Daily_Bonus) == 0x000008, "Wrong alignment on XpBoostDailyBonus_C_Update_Daily_Bonus");
static_assert(sizeof(XpBoostDailyBonus_C_Update_Daily_Bonus) == 0x000100, "Wrong size on XpBoostDailyBonus_C_Update_Daily_Bonus");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_GetRestXpBonusPercent_ReturnValue) == 0x000048, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_GetRestXpBonusPercent_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_MakeArray_Array) == 0x000050, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_Format_ReturnValue) == 0x000060, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_GetContext_ReturnValue2) == 0x000078, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, Temp_bool_Variable) == 0x000080, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_GetRestXpBalance_ReturnValue) == 0x000084, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_GetRestXpBalance_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, Temp_byte_Variable) == 0x000089, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, Temp_byte_Variable2) == 0x00008A, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_Select_Default) == 0x00008B, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_MakeStruct_FormatArgumentData2) == 0x000090, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_MakeArray_Array2) == 0x0000D0, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_Format_ReturnValue2) == 0x0000E0, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_Format_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000F8, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_NotEqual_IntInt_ReturnValue2) == 0x0000F9, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_NotEqual_IntInt_ReturnValue2' has a wrong offset!");

}

