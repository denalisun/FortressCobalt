#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_PlayerScoreRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_PlayerScoreRow.Results_PlayerScoreRow_C
// 0x0088 (0x0298 - 0x0210)
class UResults_PlayerScoreRow_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UBasicGradientFill_C*                   BasicGradientFill;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCapLeft;                                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCapRight;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCenter;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextHomeBasePower;                                 // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScoreBuilding;                                 // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScoreCombat;                                   // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScoreMission;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScoreTotal;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScoreUtility;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           PlayerNameColor;                                   // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LocalPlayerNameColor;                              // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLocalPlayer;                                    // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Results_PlayerScoreRow(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Manual_Pre_Construct(bool bIsDesignTime);
	void Initialize(class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex);
	void InitializeBackground();
	void InitializeScores(class UFortUIScoreReport* InScoreReport, int32 InScoreReportIndex);
	void InitializePlayerName(class UFortUIScoreReport* ScoreReport, int32 ScoreReportReferece);
	void InitializeHomeBasePower(const struct FUniqueNetIdRepl& PlayerID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_PlayerScoreRow_C">();
	}
	static class UResults_PlayerScoreRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_PlayerScoreRow_C>();
	}
};
static_assert(alignof(UResults_PlayerScoreRow_C) == 0x000008, "Wrong alignment on UResults_PlayerScoreRow_C");
static_assert(sizeof(UResults_PlayerScoreRow_C) == 0x000298, "Wrong size on UResults_PlayerScoreRow_C");
static_assert(offsetof(UResults_PlayerScoreRow_C, UberGraphFrame) == 0x000210, "Member 'UResults_PlayerScoreRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, BasicGradientFill) == 0x000218, "Member 'UResults_PlayerScoreRow_C::BasicGradientFill' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, ImageCapLeft) == 0x000220, "Member 'UResults_PlayerScoreRow_C::ImageCapLeft' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, ImageCapRight) == 0x000228, "Member 'UResults_PlayerScoreRow_C::ImageCapRight' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, ImageCenter) == 0x000230, "Member 'UResults_PlayerScoreRow_C::ImageCenter' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, TextHomeBasePower) == 0x000238, "Member 'UResults_PlayerScoreRow_C::TextHomeBasePower' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, TextPlayerName) == 0x000240, "Member 'UResults_PlayerScoreRow_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, TextScoreBuilding) == 0x000248, "Member 'UResults_PlayerScoreRow_C::TextScoreBuilding' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, TextScoreCombat) == 0x000250, "Member 'UResults_PlayerScoreRow_C::TextScoreCombat' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, TextScoreMission) == 0x000258, "Member 'UResults_PlayerScoreRow_C::TextScoreMission' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, TextScoreTotal) == 0x000260, "Member 'UResults_PlayerScoreRow_C::TextScoreTotal' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, TextScoreUtility) == 0x000268, "Member 'UResults_PlayerScoreRow_C::TextScoreUtility' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, PlayerNameColor) == 0x000270, "Member 'UResults_PlayerScoreRow_C::PlayerNameColor' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, LocalPlayerNameColor) == 0x000280, "Member 'UResults_PlayerScoreRow_C::LocalPlayerNameColor' has a wrong offset!");
static_assert(offsetof(UResults_PlayerScoreRow_C, bIsLocalPlayer) == 0x000290, "Member 'UResults_PlayerScoreRow_C::bIsLocalPlayer' has a wrong offset!");

}

