#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_Lobby_Winter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend_Lobby_Winter.Frontend_Lobby_Winter_C
// 0x0010 (0x0390 - 0x0380)
class AFrontend_Lobby_Winter_C final : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(Transient, DuplicateTransient)
	class AEmitter*                               FogNoise_Winter2_9_ExecuteUbergraph_Frontend_Lobby_Winter_RefProperty; // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Frontend_Lobby_Winter(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_Lobby_Winter_C">();
	}
	static class AFrontend_Lobby_Winter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_Lobby_Winter_C>();
	}
};
static_assert(alignof(AFrontend_Lobby_Winter_C) == 0x000008, "Wrong alignment on AFrontend_Lobby_Winter_C");
static_assert(sizeof(AFrontend_Lobby_Winter_C) == 0x000390, "Wrong size on AFrontend_Lobby_Winter_C");
static_assert(offsetof(AFrontend_Lobby_Winter_C, UberGraphFrame) == 0x000380, "Member 'AFrontend_Lobby_Winter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Winter_C, FogNoise_Winter2_9_ExecuteUbergraph_Frontend_Lobby_Winter_RefProperty) == 0x000388, "Member 'AFrontend_Lobby_Winter_C::FogNoise_Winter2_9_ExecuteUbergraph_Frontend_Lobby_Winter_RefProperty' has a wrong offset!");

}

