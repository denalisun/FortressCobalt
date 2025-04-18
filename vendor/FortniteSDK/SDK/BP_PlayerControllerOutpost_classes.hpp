#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerControllerOutpost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
// 0x0020 (0x2A80 - 0x2A60)
class ABP_PlayerControllerOutpost_C final : public AFortPlayerControllerOutpost
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2A60(0x0008)(Transient, DuplicateTransient)
	class AOutpostStructureBase*                  NewVar_0;                                          // 0x2A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOutpostStructureBase*                  NewVar_1;                                          // 0x2A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetHelp;                                           // 0x2A78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_PlayerControllerOutpost(int32 EntryPoint);
	void ServerStartExpandingOutpost(bool Param_GetHelp);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerControllerOutpost_C">();
	}
	static class ABP_PlayerControllerOutpost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerControllerOutpost_C>();
	}
};
static_assert(alignof(ABP_PlayerControllerOutpost_C) == 0x000008, "Wrong alignment on ABP_PlayerControllerOutpost_C");
static_assert(sizeof(ABP_PlayerControllerOutpost_C) == 0x002A80, "Wrong size on ABP_PlayerControllerOutpost_C");
static_assert(offsetof(ABP_PlayerControllerOutpost_C, UberGraphFrame) == 0x002A60, "Member 'ABP_PlayerControllerOutpost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerControllerOutpost_C, NewVar_0) == 0x002A68, "Member 'ABP_PlayerControllerOutpost_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_PlayerControllerOutpost_C, NewVar_1) == 0x002A70, "Member 'ABP_PlayerControllerOutpost_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(ABP_PlayerControllerOutpost_C, GetHelp) == 0x002A78, "Member 'ABP_PlayerControllerOutpost_C::GetHelp' has a wrong offset!");

}

