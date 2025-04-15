#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerPadTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
// 0x0108 (0x0108 - 0x0000)
struct LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_402D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable2;                             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue2;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class AFortLobbyBeaconClient*                 CallFunc_GetLobbyBeaconClient_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortLobbyBeaconClientRM*               K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_402E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 Temp_string_Variable3;                             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_402F[0x1];                                     // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable4;                             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_PlayerNetId;                    // 0x00B0(0x0028)(HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsReady;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreUniqueIDsIdentical_ReturnValue;        // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4030[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
};
static_assert(alignof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop");
static_assert(sizeof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop) == 0x000108, "Wrong size on LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, EntryPoint) == 0x000000, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable) == 0x000008, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable2) == 0x000018, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetContext_ReturnValue2) == 0x000030, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetLobbyBeaconClient_ReturnValue) == 0x000048, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetLobbyBeaconClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM) == 0x000050, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CreateDelegate_OutputDelegate2) == 0x000060, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable3) == 0x000070, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetContext_ReturnValue3) == 0x000080, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CreateDelegate_OutputDelegate3) == 0x000088, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetSubGame_ReturnValue) == 0x000098, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_SwitchEnum_CmpSuccess) == 0x000099, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_Event_IsDesignTime) == 0x00009A, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_RandomInteger_ReturnValue) == 0x00009C, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable4) == 0x0000A0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable4' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CustomEvent_PlayerNetId) == 0x0000B0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CustomEvent_PlayerNetId' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CustomEvent_bIsReady) == 0x0000D8, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CustomEvent_bIsReady' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_AreUniqueIDsIdentical_ReturnValue) == 0x0000D9, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_AreUniqueIDsIdentical_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_int_Variable) == 0x0000DC, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_Select_Default) == 0x0000E0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
// 0x0030 (0x0030 - 0x0000)
struct LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop final
{
public:
	struct FUniqueNetIdRepl                       PlayerNetId;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          bIsReady;                                          // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop");
static_assert(sizeof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop) == 0x000030, "Wrong size on LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop");
static_assert(offsetof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop, PlayerNetId) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop::PlayerNetId' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop, bIsReady) == 0x000028, "Member 'LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop::bIsReady' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LobbyPlayerPadTop_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_PreConstruct) == 0x000001, "Wrong alignment on LobbyPlayerPadTop_C_PreConstruct");
static_assert(sizeof(LobbyPlayerPadTop_C_PreConstruct) == 0x000001, "Wrong size on LobbyPlayerPadTop_C_PreConstruct");
static_assert(offsetof(LobbyPlayerPadTop_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LobbyPlayerPadTop_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
// 0x0004 (0x0004 - 0x0000)
struct LobbyPlayerPadTop_C_RefreshPlayerName final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadTop_C_RefreshPlayerName) == 0x000001, "Wrong alignment on LobbyPlayerPadTop_C_RefreshPlayerName");
static_assert(sizeof(LobbyPlayerPadTop_C_RefreshPlayerName) == 0x000004, "Wrong size on LobbyPlayerPadTop_C_RefreshPlayerName");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, Temp_bool_Variable) == 0x000000, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, Temp_byte_Variable) == 0x000001, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, Temp_byte_Variable2) == 0x000002, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, K2Node_Select_Default) == 0x000003, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::K2Node_Select_Default' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
// 0x0048 (0x0048 - 0x0000)
struct LobbyPlayerPadTop_C_Refresh final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4031[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue3;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4032[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortLobbyBeaconClient*                 CallFunc_GetLobbyBeaconClient_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4033[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortLobbyBeaconClientRM*               K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAthenaPartyMemberReady_ReturnValue;     // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadTop_C_Refresh) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_Refresh");
static_assert(sizeof(LobbyPlayerPadTop_C_Refresh) == 0x000048, "Wrong size on LobbyPlayerPadTop_C_Refresh");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable) == 0x000000, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable2) == 0x000001, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetContext_ReturnValue3) == 0x000018, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetSubGame_ReturnValue) == 0x000020, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetLobbyBeaconClient_ReturnValue) == 0x000028, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetLobbyBeaconClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM) == 0x000038, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_bool_Variable) == 0x000041, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable3) == 0x000042, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable4) == 0x000043, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_IsAthenaPartyMemberReady_ReturnValue) == 0x000044, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_IsAthenaPartyMemberReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_bool_Variable2) == 0x000045, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_Select_Default) == 0x000046, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_Select2_Default) == 0x000047, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_Select2_Default' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
// 0x01A8 (0x01A8 - 0x0000)
struct LobbyPlayerPadTop_C_SetTeamMemberInfo final
{
public:
	struct FFortTeamMemberInfo                    Param_TeamMemberInfo;                              // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LobbyPlayerPadTop_C_SetTeamMemberInfo) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_SetTeamMemberInfo");
static_assert(sizeof(LobbyPlayerPadTop_C_SetTeamMemberInfo) == 0x0001A8, "Wrong size on LobbyPlayerPadTop_C_SetTeamMemberInfo");
static_assert(offsetof(LobbyPlayerPadTop_C_SetTeamMemberInfo, Param_TeamMemberInfo) == 0x000000, "Member 'LobbyPlayerPadTop_C_SetTeamMemberInfo::Param_TeamMemberInfo' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
// 0x0008 (0x0008 - 0x0000)
struct LobbyPlayerPadTop_C_OnLobbyPlayerHovered final
{
public:
	int32                                         Param_PlayerIndex;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered) == 0x000004, "Wrong alignment on LobbyPlayerPadTop_C_OnLobbyPlayerHovered");
static_assert(sizeof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered) == 0x000008, "Wrong size on LobbyPlayerPadTop_C_OnLobbyPlayerHovered");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered, Param_PlayerIndex) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerHovered::Param_PlayerIndex' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerHovered::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
// 0x0080 (0x0080 - 0x0000)
struct LobbyPlayerPadTop_C_InitializeContextEvents final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FUniqueNetIdRepl& UniqueId, bool bMuted)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FUniqueNetIdRepl& UniqueId, bool bTalking)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FUniqueNetIdRepl& UniqueId, bool bReady)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate5;             // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue3;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate6;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue4;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadTop_C_InitializeContextEvents) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_InitializeContextEvents");
static_assert(sizeof(LobbyPlayerPadTop_C_InitializeContextEvents) == 0x000080, "Wrong size on LobbyPlayerPadTop_C_InitializeContextEvents");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate2) == 0x000010, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate3) == 0x000020, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate4) == 0x000038, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue2) == 0x000048, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate5) == 0x000050, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue3) == 0x000060, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate6) == 0x000068, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate6' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue4) == 0x000078, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue4' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
// 0x0004 (0x0004 - 0x0000)
struct LobbyPlayerPadTop_C_Initialize final
{
public:
	int32                                         Param_PlayerIndex;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadTop_C_Initialize) == 0x000004, "Wrong alignment on LobbyPlayerPadTop_C_Initialize");
static_assert(sizeof(LobbyPlayerPadTop_C_Initialize) == 0x000004, "Wrong size on LobbyPlayerPadTop_C_Initialize");
static_assert(offsetof(LobbyPlayerPadTop_C_Initialize, Param_PlayerIndex) == 0x000000, "Member 'LobbyPlayerPadTop_C_Initialize::Param_PlayerIndex' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
// 0x0008 (0x0008 - 0x0000)
struct LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered final
{
public:
	int32                                         Param_PlayerIndex;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered) == 0x000004, "Wrong alignment on LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered");
static_assert(sizeof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered) == 0x000008, "Wrong size on LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered, Param_PlayerIndex) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered::Param_PlayerIndex' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyStateChanged
// 0x0030 (0x0030 - 0x0000)
struct LobbyPlayerPadTop_C_OnAthenaReadyStateChanged final
{
public:
	struct FUniqueNetIdRepl                       Member_Id;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Ready;                                             // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_OnAthenaReadyStateChanged");
static_assert(sizeof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged) == 0x000030, "Wrong size on LobbyPlayerPadTop_C_OnAthenaReadyStateChanged");
static_assert(offsetof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged, Member_Id) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnAthenaReadyStateChanged::Member_Id' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged, Ready) == 0x000028, "Member 'LobbyPlayerPadTop_C_OnAthenaReadyStateChanged::Ready' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged, CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue) == 0x000029, "Member 'LobbyPlayerPadTop_C_OnAthenaReadyStateChanged::CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshReadyState
// 0x0070 (0x0070 - 0x0000)
struct LobbyPlayerPadTop_C_RefreshReadyState final
{
public:
	bool                                          Ready;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4034[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable2;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4035[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0040(0x0018)()
	class FText                                   K2Node_Select2_Default;                            // 0x0058(0x0018)()
};
static_assert(alignof(LobbyPlayerPadTop_C_RefreshReadyState) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_RefreshReadyState");
static_assert(sizeof(LobbyPlayerPadTop_C_RefreshReadyState) == 0x000070, "Wrong size on LobbyPlayerPadTop_C_RefreshReadyState");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Ready) == 0x000000, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Ready' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_bool_Variable) == 0x000001, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_class_Variable) == 0x000008, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_class_Variable2) == 0x000010, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_class_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_bool_Variable2) == 0x000018, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, K2Node_Select_Default) == 0x000020, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_text_Variable) == 0x000028, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_text_Variable2) == 0x000040, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, K2Node_Select2_Default) == 0x000058, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::K2Node_Select2_Default' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerTalkingChanged
// 0x0030 (0x0030 - 0x0000)
struct LobbyPlayerPadTop_C_HandlePlayerTalkingChanged final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          IsTalking;                                         // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_HandlePlayerTalkingChanged) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_HandlePlayerTalkingChanged");
static_assert(sizeof(LobbyPlayerPadTop_C_HandlePlayerTalkingChanged) == 0x000030, "Wrong size on LobbyPlayerPadTop_C_HandlePlayerTalkingChanged");
static_assert(offsetof(LobbyPlayerPadTop_C_HandlePlayerTalkingChanged, UniqueId) == 0x000000, "Member 'LobbyPlayerPadTop_C_HandlePlayerTalkingChanged::UniqueId' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_HandlePlayerTalkingChanged, IsTalking) == 0x000028, "Member 'LobbyPlayerPadTop_C_HandlePlayerTalkingChanged::IsTalking' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_HandlePlayerTalkingChanged, CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue) == 0x000029, "Member 'LobbyPlayerPadTop_C_HandlePlayerTalkingChanged::CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerMutingChanged
// 0x0030 (0x0030 - 0x0000)
struct LobbyPlayerPadTop_C_HandlePlayerMutingChanged final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          IsTalking;                                         // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue; // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_HandlePlayerMutingChanged) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_HandlePlayerMutingChanged");
static_assert(sizeof(LobbyPlayerPadTop_C_HandlePlayerMutingChanged) == 0x000030, "Wrong size on LobbyPlayerPadTop_C_HandlePlayerMutingChanged");
static_assert(offsetof(LobbyPlayerPadTop_C_HandlePlayerMutingChanged, UniqueId) == 0x000000, "Member 'LobbyPlayerPadTop_C_HandlePlayerMutingChanged::UniqueId' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_HandlePlayerMutingChanged, IsTalking) == 0x000028, "Member 'LobbyPlayerPadTop_C_HandlePlayerMutingChanged::IsTalking' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_HandlePlayerMutingChanged, CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue) == 0x000029, "Member 'LobbyPlayerPadTop_C_HandlePlayerMutingChanged::CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue' has a wrong offset!");

}

