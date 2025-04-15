#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum Lobby.ELobbyBeaconJoinState
// NumValues: 0x0004
enum class ELobbyBeaconJoinState : uint8
{
	None                                     = 0,
	SentJoinRequest                          = 1,
	JoinRequestAcknowledged                  = 2,
	ELobbyBeaconJoinState_MAX                = 3,
};

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
struct FLobbyPlayerStateActorInfo final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_1A48[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobbyBeaconPlayerState*                LobbyPlayerState;                                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLobbyPlayerStateActorInfo) == 0x000008, "Wrong alignment on FLobbyPlayerStateActorInfo");
static_assert(sizeof(FLobbyPlayerStateActorInfo) == 0x000018, "Wrong size on FLobbyPlayerStateActorInfo");
static_assert(offsetof(FLobbyPlayerStateActorInfo, LobbyPlayerState) == 0x000010, "Member 'FLobbyPlayerStateActorInfo::LobbyPlayerState' has a wrong offset!");

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x00C8 - 0x00B0)
struct FLobbyPlayerStateInfoArray final : public FFastArraySerializer
{
public:
	TArray<struct FLobbyPlayerStateActorInfo>     Players;                                           // 0x00B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class ALobbyBeaconState*                      ParentState;                                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FLobbyPlayerStateInfoArray) == 0x000008, "Wrong alignment on FLobbyPlayerStateInfoArray");
static_assert(sizeof(FLobbyPlayerStateInfoArray) == 0x0000C8, "Wrong size on FLobbyPlayerStateInfoArray");
static_assert(offsetof(FLobbyPlayerStateInfoArray, Players) == 0x0000B0, "Member 'FLobbyPlayerStateInfoArray::Players' has a wrong offset!");
static_assert(offsetof(FLobbyPlayerStateInfoArray, ParentState) == 0x0000C0, "Member 'FLobbyPlayerStateInfoArray::ParentState' has a wrong offset!");

}

