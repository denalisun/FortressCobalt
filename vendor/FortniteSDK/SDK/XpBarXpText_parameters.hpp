#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBarXpText

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText
// 0x0088 (0x0088 - 0x0000)
struct XpBarXpText_C_ExecuteUbergraph_XpBarXpText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                 K2Node_CustomEvent_NewInfo;                        // 0x0004(0x0034)(NoDestructor)
	TDelegate<void(const struct FFortPublicAccountInfo& NewInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                 CallFunc_GetCurrentlyViewedAccountInfo_Result;     // 0x0050(0x0034)(NoDestructor)
};
static_assert(alignof(XpBarXpText_C_ExecuteUbergraph_XpBarXpText) == 0x000008, "Wrong alignment on XpBarXpText_C_ExecuteUbergraph_XpBarXpText");
static_assert(sizeof(XpBarXpText_C_ExecuteUbergraph_XpBarXpText) == 0x000088, "Wrong size on XpBarXpText_C_ExecuteUbergraph_XpBarXpText");
static_assert(offsetof(XpBarXpText_C_ExecuteUbergraph_XpBarXpText, EntryPoint) == 0x000000, "Member 'XpBarXpText_C_ExecuteUbergraph_XpBarXpText::EntryPoint' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_ExecuteUbergraph_XpBarXpText, K2Node_CustomEvent_NewInfo) == 0x000004, "Member 'XpBarXpText_C_ExecuteUbergraph_XpBarXpText::K2Node_CustomEvent_NewInfo' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_ExecuteUbergraph_XpBarXpText, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'XpBarXpText_C_ExecuteUbergraph_XpBarXpText::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_ExecuteUbergraph_XpBarXpText, CallFunc_GetContext_ReturnValue) == 0x000048, "Member 'XpBarXpText_C_ExecuteUbergraph_XpBarXpText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_ExecuteUbergraph_XpBarXpText, CallFunc_GetCurrentlyViewedAccountInfo_Result) == 0x000050, "Member 'XpBarXpText_C_ExecuteUbergraph_XpBarXpText::CallFunc_GetCurrentlyViewedAccountInfo_Result' has a wrong offset!");

// Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate
// 0x0034 (0x0034 - 0x0000)
struct XpBarXpText_C_HandleAccountUpdate final
{
public:
	struct FFortPublicAccountInfo                 NewInfo;                                           // 0x0000(0x0034)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(XpBarXpText_C_HandleAccountUpdate) == 0x000004, "Wrong alignment on XpBarXpText_C_HandleAccountUpdate");
static_assert(sizeof(XpBarXpText_C_HandleAccountUpdate) == 0x000034, "Wrong size on XpBarXpText_C_HandleAccountUpdate");
static_assert(offsetof(XpBarXpText_C_HandleAccountUpdate, NewInfo) == 0x000000, "Member 'XpBarXpText_C_HandleAccountUpdate::NewInfo' has a wrong offset!");

// Function XpBarXpText.XpBarXpText_C.Update Xp Text
// 0x0170 (0x0170 - 0x0000)
struct XpBarXpText_C_Update_Xp_Text final
{
public:
	struct FFortPublicAccountInfo                 Account_Info;                                      // 0x0000(0x0034)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_2347[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0078(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2348[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00E8(0x0018)()
	int32                                         CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points; // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2349[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData3;             // 0x0108(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x0148(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0158(0x0018)()
};
static_assert(alignof(XpBarXpText_C_Update_Xp_Text) == 0x000008, "Wrong alignment on XpBarXpText_C_Update_Xp_Text");
static_assert(sizeof(XpBarXpText_C_Update_Xp_Text) == 0x000170, "Wrong size on XpBarXpText_C_Update_Xp_Text");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, Account_Info) == 0x000000, "Member 'XpBarXpText_C_Update_Xp_Text::Account_Info' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'XpBarXpText_C_Update_Xp_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, K2Node_MakeStruct_FormatArgumentData2) == 0x000078, "Member 'XpBarXpText_C_Update_Xp_Text::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'XpBarXpText_C_Update_Xp_Text::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, K2Node_MakeArray_Array) == 0x0000C0, "Member 'XpBarXpText_C_Update_Xp_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'XpBarXpText_C_Update_Xp_Text::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, CallFunc_MakeLiteralText_ReturnValue) == 0x0000E8, "Member 'XpBarXpText_C_Update_Xp_Text::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points) == 0x000100, "Member 'XpBarXpText_C_Update_Xp_Text::CallFunc_Get_Skill_Points_For_Next_Level_Next_Level_Skill_Points' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, K2Node_MakeStruct_FormatArgumentData3) == 0x000108, "Member 'XpBarXpText_C_Update_Xp_Text::K2Node_MakeStruct_FormatArgumentData3' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, K2Node_MakeArray_Array2) == 0x000148, "Member 'XpBarXpText_C_Update_Xp_Text::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Update_Xp_Text, CallFunc_Format_ReturnValue2) == 0x000158, "Member 'XpBarXpText_C_Update_Xp_Text::CallFunc_Format_ReturnValue2' has a wrong offset!");

// Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level
// 0x0098 (0x0098 - 0x0000)
struct XpBarXpText_C_Get_Skill_Points_For_Next_Level final
{
public:
	int32                                         Next_Level_Skill_Points;                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPrivateAccountInfo                CallFunc_GetLocalAccountInfo_Result;               // 0x0018(0x0038)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234B[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortItemQuantityPair>          CallFunc_GetAccountLevelUpRewards_Rewards;         // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	struct FFortItemQuantityPair                  CallFunc_Array_Get_Item;                           // 0x0068(0x0030)()
};
static_assert(alignof(XpBarXpText_C_Get_Skill_Points_For_Next_Level) == 0x000008, "Wrong alignment on XpBarXpText_C_Get_Skill_Points_For_Next_Level");
static_assert(sizeof(XpBarXpText_C_Get_Skill_Points_For_Next_Level) == 0x000098, "Wrong size on XpBarXpText_C_Get_Skill_Points_For_Next_Level");
static_assert(offsetof(XpBarXpText_C_Get_Skill_Points_For_Next_Level, Next_Level_Skill_Points) == 0x000000, "Member 'XpBarXpText_C_Get_Skill_Points_For_Next_Level::Next_Level_Skill_Points' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Get_Skill_Points_For_Next_Level, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'XpBarXpText_C_Get_Skill_Points_For_Next_Level::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Get_Skill_Points_For_Next_Level, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'XpBarXpText_C_Get_Skill_Points_For_Next_Level::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Get_Skill_Points_For_Next_Level, CallFunc_GetLocalAccountInfo_Result) == 0x000018, "Member 'XpBarXpText_C_Get_Skill_Points_For_Next_Level::CallFunc_GetLocalAccountInfo_Result' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Get_Skill_Points_For_Next_Level, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'XpBarXpText_C_Get_Skill_Points_For_Next_Level::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Get_Skill_Points_For_Next_Level, CallFunc_GetAccountLevelUpRewards_Rewards) == 0x000058, "Member 'XpBarXpText_C_Get_Skill_Points_For_Next_Level::CallFunc_GetAccountLevelUpRewards_Rewards' has a wrong offset!");
static_assert(offsetof(XpBarXpText_C_Get_Skill_Points_For_Next_Level, CallFunc_Array_Get_Item) == 0x000068, "Member 'XpBarXpText_C_Get_Skill_Points_For_Next_Level::CallFunc_Array_Get_Item' has a wrong offset!");

}

