#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckFrontEndDailyRewardsAction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C
// 0x0018 (0x03E0 - 0x03C8)
class ACheckFrontEndDailyRewardsAction_C final : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bLastStateWasLoginScreen;                          // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESubGame                                      NewVar_0;                                          // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int32 EntryPoint);
	void HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void Execute(const struct FFortScriptedActionParams& Params_0);
	void UserConstructionScript();
	void ShowDailyRewards();
	void CompleteDailyRewardAction();
	void Daily_Rewards_Open(bool* bRunning);
	void IsFrontEndRewards_Running(bool* IsRunning);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckFrontEndDailyRewardsAction_C">();
	}
	static class ACheckFrontEndDailyRewardsAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckFrontEndDailyRewardsAction_C>();
	}
};
static_assert(alignof(ACheckFrontEndDailyRewardsAction_C) == 0x000008, "Wrong alignment on ACheckFrontEndDailyRewardsAction_C");
static_assert(sizeof(ACheckFrontEndDailyRewardsAction_C) == 0x0003E0, "Wrong size on ACheckFrontEndDailyRewardsAction_C");
static_assert(offsetof(ACheckFrontEndDailyRewardsAction_C, UberGraphFrame) == 0x0003C8, "Member 'ACheckFrontEndDailyRewardsAction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACheckFrontEndDailyRewardsAction_C, DefaultSceneRoot) == 0x0003D0, "Member 'ACheckFrontEndDailyRewardsAction_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACheckFrontEndDailyRewardsAction_C, bLastStateWasLoginScreen) == 0x0003D8, "Member 'ACheckFrontEndDailyRewardsAction_C::bLastStateWasLoginScreen' has a wrong offset!");
static_assert(offsetof(ACheckFrontEndDailyRewardsAction_C, NewVar_0) == 0x0003D9, "Member 'ACheckFrontEndDailyRewardsAction_C::NewVar_0' has a wrong offset!");

}

