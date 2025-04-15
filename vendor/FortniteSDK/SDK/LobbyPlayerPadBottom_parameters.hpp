#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerPadBottom

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Set Team Member Info
// 0x01A8 (0x01A8 - 0x0000)
struct LobbyPlayerPadBottom_C_Set_Team_Member_Info final
{
public:
	struct FFortTeamMemberInfo                    New_Team_Member_Info;                              // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LobbyPlayerPadBottom_C_Set_Team_Member_Info) == 0x000008, "Wrong alignment on LobbyPlayerPadBottom_C_Set_Team_Member_Info");
static_assert(sizeof(LobbyPlayerPadBottom_C_Set_Team_Member_Info) == 0x0001A8, "Wrong size on LobbyPlayerPadBottom_C_Set_Team_Member_Info");
static_assert(offsetof(LobbyPlayerPadBottom_C_Set_Team_Member_Info, New_Team_Member_Info) == 0x000000, "Member 'LobbyPlayerPadBottom_C_Set_Team_Member_Info::New_Team_Member_Info' has a wrong offset!");

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Refresh
// 0x00B8 (0x00B8 - 0x0000)
struct LobbyPlayerPadBottom_C_Refresh final
{
public:
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FD3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTeamMemberFriend_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBattlePassInfo                    CallFunc_GetBattlePassInfoForPlayer_Result;        // 0x001C(0x0014)(NoDestructor)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue3;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayersUniqueID_ReturnValue;       // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FD4[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue4;                  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadBottom_C_Refresh) == 0x000008, "Wrong alignment on LobbyPlayerPadBottom_C_Refresh");
static_assert(sizeof(LobbyPlayerPadBottom_C_Refresh) == 0x0000B8, "Wrong size on LobbyPlayerPadBottom_C_Refresh");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, Temp_byte_Variable) == 0x000008, "Member 'LobbyPlayerPadBottom_C_Refresh::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, Temp_byte_Variable2) == 0x000018, "Member 'LobbyPlayerPadBottom_C_Refresh::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_IsTeamMemberFriend_ReturnValue) == 0x000019, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_IsTeamMemberFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, Temp_bool_Variable) == 0x00001A, "Member 'LobbyPlayerPadBottom_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, K2Node_Select_Default) == 0x00001B, "Member 'LobbyPlayerPadBottom_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_GetBattlePassInfoForPlayer_Result) == 0x00001C, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_GetBattlePassInfoForPlayer_Result' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_GetContext_ReturnValue3) == 0x000030, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_IsLocalPlayersUniqueID_ReturnValue) == 0x000039, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_IsLocalPlayersUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'LobbyPlayerPadBottom_C_Refresh::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, K2Node_MakeArray_Array) == 0x000080, "Member 'LobbyPlayerPadBottom_C_Refresh::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_Format_ReturnValue) == 0x000090, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_GetContext_ReturnValue4) == 0x0000A8, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_GetContext_ReturnValue4' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_GetSubGame_ReturnValue) == 0x0000B0, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B1, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadBottom_C_Refresh, CallFunc_BooleanAND_ReturnValue2) == 0x0000B2, "Member 'LobbyPlayerPadBottom_C_Refresh::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");

}

