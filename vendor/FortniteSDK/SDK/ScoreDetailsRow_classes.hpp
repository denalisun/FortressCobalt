#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreDetailsRow

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScoreDetailsRow.ScoreDetailsRow_C
// 0x0050 (0x0260 - 0x0210)
class UScoreDetailsRow_C final : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*                BuildingScoreText;                                 // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                CombatScoreText;                                   // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerNameText;                                    // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TotalScoreText;                                    // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                UtilityScoreText;                                  // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   PlayerName;                                        // 0x0238(0x0018)(Edit, BlueprintVisible)
	int32                                         TotalScore;                                        // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Combat;                                            // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Building;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Utility;                                           // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateRow(const class FText& Param_PlayerName, int32 Param_TotalScore, int32 Param_Combat, int32 Param_Building, int32 Param_Utility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScoreDetailsRow_C">();
	}
	static class UScoreDetailsRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreDetailsRow_C>();
	}
};
static_assert(alignof(UScoreDetailsRow_C) == 0x000008, "Wrong alignment on UScoreDetailsRow_C");
static_assert(sizeof(UScoreDetailsRow_C) == 0x000260, "Wrong size on UScoreDetailsRow_C");
static_assert(offsetof(UScoreDetailsRow_C, BuildingScoreText) == 0x000210, "Member 'UScoreDetailsRow_C::BuildingScoreText' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, CombatScoreText) == 0x000218, "Member 'UScoreDetailsRow_C::CombatScoreText' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, PlayerNameText) == 0x000220, "Member 'UScoreDetailsRow_C::PlayerNameText' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, TotalScoreText) == 0x000228, "Member 'UScoreDetailsRow_C::TotalScoreText' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, UtilityScoreText) == 0x000230, "Member 'UScoreDetailsRow_C::UtilityScoreText' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, PlayerName) == 0x000238, "Member 'UScoreDetailsRow_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, TotalScore) == 0x000250, "Member 'UScoreDetailsRow_C::TotalScore' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, Combat) == 0x000254, "Member 'UScoreDetailsRow_C::Combat' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, Building) == 0x000258, "Member 'UScoreDetailsRow_C::Building' has a wrong offset!");
static_assert(offsetof(UScoreDetailsRow_C, Utility) == 0x00025C, "Member 'UScoreDetailsRow_C::Utility' has a wrong offset!");

}

