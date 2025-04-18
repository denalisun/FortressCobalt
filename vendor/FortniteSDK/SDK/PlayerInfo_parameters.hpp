#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerInfo

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
// 0x0370 (0x0370 - 0x0000)
struct PlayerInfo_C_ExecuteUbergraph_PlayerInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BBE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_PlayerInfo;                     // 0x0020(0x01A8)(ConstParm)
	struct FFortTeamMemberInfo                    CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo; // 0x01C8(0x01A8)()
};
static_assert(alignof(PlayerInfo_C_ExecuteUbergraph_PlayerInfo) == 0x000008, "Wrong alignment on PlayerInfo_C_ExecuteUbergraph_PlayerInfo");
static_assert(sizeof(PlayerInfo_C_ExecuteUbergraph_PlayerInfo) == 0x000370, "Wrong size on PlayerInfo_C_ExecuteUbergraph_PlayerInfo");
static_assert(offsetof(PlayerInfo_C_ExecuteUbergraph_PlayerInfo, EntryPoint) == 0x000000, "Member 'PlayerInfo_C_ExecuteUbergraph_PlayerInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_ExecuteUbergraph_PlayerInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PlayerInfo_C_ExecuteUbergraph_PlayerInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_ExecuteUbergraph_PlayerInfo, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'PlayerInfo_C_ExecuteUbergraph_PlayerInfo::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_ExecuteUbergraph_PlayerInfo, K2Node_CustomEvent_PlayerInfo) == 0x000020, "Member 'PlayerInfo_C_ExecuteUbergraph_PlayerInfo::K2Node_CustomEvent_PlayerInfo' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_ExecuteUbergraph_PlayerInfo, CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo) == 0x0001C8, "Member 'PlayerInfo_C_ExecuteUbergraph_PlayerInfo::CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo' has a wrong offset!");

// Function PlayerInfo.PlayerInfo_C.HandlePlayerStateChanged
// 0x01A8 (0x01A8 - 0x0000)
struct PlayerInfo_C_HandlePlayerStateChanged final
{
public:
	struct FFortTeamMemberInfo                    PlayerInfo;                                        // 0x0000(0x01A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerInfo_C_HandlePlayerStateChanged) == 0x000008, "Wrong alignment on PlayerInfo_C_HandlePlayerStateChanged");
static_assert(sizeof(PlayerInfo_C_HandlePlayerStateChanged) == 0x0001A8, "Wrong size on PlayerInfo_C_HandlePlayerStateChanged");
static_assert(offsetof(PlayerInfo_C_HandlePlayerStateChanged, PlayerInfo) == 0x000000, "Member 'PlayerInfo_C_HandlePlayerStateChanged::PlayerInfo' has a wrong offset!");

// Function PlayerInfo.PlayerInfo_C.UpdateLocalPlayerInfo
// 0x01C8 (0x01C8 - 0x0000)
struct PlayerInfo_C_UpdateLocalPlayerInfo final
{
public:
	struct FFortTeamMemberInfo                    Player_Info;                                       // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BBF[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayerPartyLeader_ReturnValue;     // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x01BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerInfo_C_UpdateLocalPlayerInfo) == 0x000008, "Wrong alignment on PlayerInfo_C_UpdateLocalPlayerInfo");
static_assert(sizeof(PlayerInfo_C_UpdateLocalPlayerInfo) == 0x0001C8, "Wrong size on PlayerInfo_C_UpdateLocalPlayerInfo");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, Player_Info) == 0x000000, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::Player_Info' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable) == 0x0001A8, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable2) == 0x0001A9, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_GetContext_ReturnValue) == 0x0001B0, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_GetNumPlayersInLocalParty_ReturnValue) == 0x0001B8, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_GetNumPlayersInLocalParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_IsLocalPlayerPartyLeader_ReturnValue) == 0x0001BC, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_IsLocalPlayerPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0001BD, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, Temp_bool_Variable) == 0x0001BE, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, CallFunc_BooleanAND_ReturnValue) == 0x0001BF, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable3) == 0x0001C0, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, Temp_byte_Variable4) == 0x0001C1, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, K2Node_Select_Default) == 0x0001C2, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, Temp_bool_Variable2) == 0x0001C3, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(PlayerInfo_C_UpdateLocalPlayerInfo, K2Node_Select2_Default) == 0x0001C4, "Member 'PlayerInfo_C_UpdateLocalPlayerInfo::K2Node_Select2_Default' has a wrong offset!");

}

