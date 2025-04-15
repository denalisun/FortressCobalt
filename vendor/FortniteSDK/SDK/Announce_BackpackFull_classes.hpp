#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_BackpackFull

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_BackpackFull.Announce_BackpackFull_C
// 0x0010 (0x04C0 - 0x04B0)
class AAnnounce_BackpackFull_C final : public AFortClientAnnouncement_Basic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announce_BackpackFull(int32 EntryPoint);
	void OnClientAnnouncementStart();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_BackpackFull_C">();
	}
	static class AAnnounce_BackpackFull_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_BackpackFull_C>();
	}
};
static_assert(alignof(AAnnounce_BackpackFull_C) == 0x000008, "Wrong alignment on AAnnounce_BackpackFull_C");
static_assert(sizeof(AAnnounce_BackpackFull_C) == 0x0004C0, "Wrong size on AAnnounce_BackpackFull_C");
static_assert(offsetof(AAnnounce_BackpackFull_C, UberGraphFrame) == 0x0004B0, "Member 'AAnnounce_BackpackFull_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAnnounce_BackpackFull_C, DefaultSceneRoot) == 0x0004B8, "Member 'AAnnounce_BackpackFull_C::DefaultSceneRoot' has a wrong offset!");

}

