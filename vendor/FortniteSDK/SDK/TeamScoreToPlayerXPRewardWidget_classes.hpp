#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamScoreToPlayerXPRewardWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C
// 0x00B0 (0x02C0 - 0x0210)
class UTeamScoreToPlayerXPRewardWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_1;                                           // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBarFrame;                                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                NumericTextXPAmount;                               // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayHeroInfo;                                   // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayPlayerNameplate;                            // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerName;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBarXP;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxFrame;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxNameplate;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextXPBonusInfo;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxXPInfo;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InitialPlayerXPCount;                              // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InitialPlayerLevel;                                // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastLevelSeen;                                     // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33E9[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        LevelUpSound;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIXpInfo                          XPInfo;                                            // 0x0288(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bConstructing;                                     // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33EA[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIScoreReport*                     ScoreReport;                                       // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget(int32 EntryPoint);
	void Construct();
	void OnLevelChanged();
	void Update_XP_LERP(float LERP_Factor);
	void Initialize(const struct FFortUIXpInfo& Param_XPInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamScoreToPlayerXPRewardWidget_C">();
	}
	static class UTeamScoreToPlayerXPRewardWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamScoreToPlayerXPRewardWidget_C>();
	}
};
static_assert(alignof(UTeamScoreToPlayerXPRewardWidget_C) == 0x000008, "Wrong alignment on UTeamScoreToPlayerXPRewardWidget_C");
static_assert(sizeof(UTeamScoreToPlayerXPRewardWidget_C) == 0x0002C0, "Wrong size on UTeamScoreToPlayerXPRewardWidget_C");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, UberGraphFrame) == 0x000210, "Member 'UTeamScoreToPlayerXPRewardWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, Image_1) == 0x000218, "Member 'UTeamScoreToPlayerXPRewardWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, ImageBarFrame) == 0x000220, "Member 'UTeamScoreToPlayerXPRewardWidget_C::ImageBarFrame' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, NumericTextXPAmount) == 0x000228, "Member 'UTeamScoreToPlayerXPRewardWidget_C::NumericTextXPAmount' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, OverlayHeroInfo) == 0x000230, "Member 'UTeamScoreToPlayerXPRewardWidget_C::OverlayHeroInfo' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, OverlayPlayerNameplate) == 0x000238, "Member 'UTeamScoreToPlayerXPRewardWidget_C::OverlayPlayerNameplate' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, PlayerName) == 0x000240, "Member 'UTeamScoreToPlayerXPRewardWidget_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, ProgressBarXP) == 0x000248, "Member 'UTeamScoreToPlayerXPRewardWidget_C::ProgressBarXP' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, SizeBoxFrame) == 0x000250, "Member 'UTeamScoreToPlayerXPRewardWidget_C::SizeBoxFrame' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, SizeBoxNameplate) == 0x000258, "Member 'UTeamScoreToPlayerXPRewardWidget_C::SizeBoxNameplate' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, TextXPBonusInfo) == 0x000260, "Member 'UTeamScoreToPlayerXPRewardWidget_C::TextXPBonusInfo' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, VerticalBoxXPInfo) == 0x000268, "Member 'UTeamScoreToPlayerXPRewardWidget_C::VerticalBoxXPInfo' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, InitialPlayerXPCount) == 0x000270, "Member 'UTeamScoreToPlayerXPRewardWidget_C::InitialPlayerXPCount' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, InitialPlayerLevel) == 0x000274, "Member 'UTeamScoreToPlayerXPRewardWidget_C::InitialPlayerLevel' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, LastLevelSeen) == 0x000278, "Member 'UTeamScoreToPlayerXPRewardWidget_C::LastLevelSeen' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, LevelUpSound) == 0x000280, "Member 'UTeamScoreToPlayerXPRewardWidget_C::LevelUpSound' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, XPInfo) == 0x000288, "Member 'UTeamScoreToPlayerXPRewardWidget_C::XPInfo' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, bConstructing) == 0x0002B4, "Member 'UTeamScoreToPlayerXPRewardWidget_C::bConstructing' has a wrong offset!");
static_assert(offsetof(UTeamScoreToPlayerXPRewardWidget_C, ScoreReport) == 0x0002B8, "Member 'UTeamScoreToPlayerXPRewardWidget_C::ScoreReport' has a wrong offset!");

}

