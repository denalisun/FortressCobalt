#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardsListWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C
// 0x0038 (0x0250 - 0x0218)
class URewardsListWidget_C final : public UFortUserWidget
{
public:
	class UVerticalBox*                           RewardsVerticalBox;                                // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFrontEndRewardWrapperWidget_C*> RewardsArray;                                      // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Index_RewardsListWidget_C;                         // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardCount;                                       // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoNotAnimate;                                      // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bPlaySound;                                        // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_238C[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFrontEndRewardWrapperWidget_C*> SelectableRewardsArray;                            // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void PopulateRewards(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<struct FFortItemInstanceQuantityPair>& SelectableRewards);
	void PresentNextReward();
	void CreateReward(struct FFortItemInstanceQuantityPair& FortItemInstanceQuantityPair, bool Selectable);
	void CreateRewardWrapper(class UHomeScreenQuestRewardItem_C* Item, const class FText& DisplayName, class UFrontEndRewardWrapperWidget_C** OutputPin);
	void PresentAllRewards();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardsListWidget_C">();
	}
	static class URewardsListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardsListWidget_C>();
	}
};
static_assert(alignof(URewardsListWidget_C) == 0x000008, "Wrong alignment on URewardsListWidget_C");
static_assert(sizeof(URewardsListWidget_C) == 0x000250, "Wrong size on URewardsListWidget_C");
static_assert(offsetof(URewardsListWidget_C, RewardsVerticalBox) == 0x000218, "Member 'URewardsListWidget_C::RewardsVerticalBox' has a wrong offset!");
static_assert(offsetof(URewardsListWidget_C, RewardsArray) == 0x000220, "Member 'URewardsListWidget_C::RewardsArray' has a wrong offset!");
static_assert(offsetof(URewardsListWidget_C, Index_RewardsListWidget_C) == 0x000230, "Member 'URewardsListWidget_C::Index_RewardsListWidget_C' has a wrong offset!");
static_assert(offsetof(URewardsListWidget_C, RewardCount) == 0x000234, "Member 'URewardsListWidget_C::RewardCount' has a wrong offset!");
static_assert(offsetof(URewardsListWidget_C, DoNotAnimate) == 0x000238, "Member 'URewardsListWidget_C::DoNotAnimate' has a wrong offset!");
static_assert(offsetof(URewardsListWidget_C, bPlaySound) == 0x000239, "Member 'URewardsListWidget_C::bPlaySound' has a wrong offset!");
static_assert(offsetof(URewardsListWidget_C, SelectableRewardsArray) == 0x000240, "Member 'URewardsListWidget_C::SelectableRewardsArray' has a wrong offset!");

}

