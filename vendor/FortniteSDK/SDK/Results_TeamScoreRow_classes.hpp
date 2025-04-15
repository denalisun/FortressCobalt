#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeamScoreRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_TeamScoreRow.Results_TeamScoreRow_C
// 0x00B0 (0x02C0 - 0x0210)
class UResults_TeamScoreRow_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_SkipToFinalState;                             // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Absorb;                                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*              Score1;                                            // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*              Score2;                                            // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*              Score3;                                            // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*              Score4;                                            // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreBox_C*                TeamScore;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextAfterScore1;                                   // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextAfterScore2;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextAfterScore3;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextAfterScore4;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortUIScoreType                              ScoreType;                                         // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32D2[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UResults_PlayerScoreBox_C*>      ScoreBoxes;                                        // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   CountUpFinished;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         PlayRate;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippedToEnd;                                     // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToEnd;                                    // 0x029D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32D3[0x2];                                     // 0x029E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   CountDownFinished;                                 // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UCommonNumericTextBlock*>        ResidualScoreTexts;                                // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void CountUpFinished__DelegateSignature();
	void CountDownFinished__DelegateSignature();
	void ExecuteUbergraph_Results_TeamScoreRow(int32 EntryPoint);
	void Stop_Count_Down_Absorption();
	void BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature();
	void BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature();
	void Count_Down_Sequence();
	void BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature();
	void Count_Up_Sequence();
	void BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Intro_Sequence();
	void Initialize(class UFortUIScoreReport* InScoreReport, float Param_PlayRate);
	void SetSkippingToEnd();
	void SkipToFinalState();
	void ShowValidResidualScores();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_TeamScoreRow_C">();
	}
	static class UResults_TeamScoreRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_TeamScoreRow_C>();
	}
};
static_assert(alignof(UResults_TeamScoreRow_C) == 0x000008, "Wrong alignment on UResults_TeamScoreRow_C");
static_assert(sizeof(UResults_TeamScoreRow_C) == 0x0002C0, "Wrong size on UResults_TeamScoreRow_C");
static_assert(offsetof(UResults_TeamScoreRow_C, UberGraphFrame) == 0x000210, "Member 'UResults_TeamScoreRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, Anim_SkipToFinalState) == 0x000218, "Member 'UResults_TeamScoreRow_C::Anim_SkipToFinalState' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, Anim_Absorb) == 0x000220, "Member 'UResults_TeamScoreRow_C::Anim_Absorb' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, Score1) == 0x000228, "Member 'UResults_TeamScoreRow_C::Score1' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, Score2) == 0x000230, "Member 'UResults_TeamScoreRow_C::Score2' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, Score3) == 0x000238, "Member 'UResults_TeamScoreRow_C::Score3' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, Score4) == 0x000240, "Member 'UResults_TeamScoreRow_C::Score4' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, TeamScore) == 0x000248, "Member 'UResults_TeamScoreRow_C::TeamScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, TextAfterScore1) == 0x000250, "Member 'UResults_TeamScoreRow_C::TextAfterScore1' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, TextAfterScore2) == 0x000258, "Member 'UResults_TeamScoreRow_C::TextAfterScore2' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, TextAfterScore3) == 0x000260, "Member 'UResults_TeamScoreRow_C::TextAfterScore3' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, TextAfterScore4) == 0x000268, "Member 'UResults_TeamScoreRow_C::TextAfterScore4' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, ScoreType) == 0x000270, "Member 'UResults_TeamScoreRow_C::ScoreType' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, ScoreBoxes) == 0x000278, "Member 'UResults_TeamScoreRow_C::ScoreBoxes' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, CountUpFinished) == 0x000288, "Member 'UResults_TeamScoreRow_C::CountUpFinished' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, PlayRate) == 0x000298, "Member 'UResults_TeamScoreRow_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, bSkippedToEnd) == 0x00029C, "Member 'UResults_TeamScoreRow_C::bSkippedToEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, bSkippingToEnd) == 0x00029D, "Member 'UResults_TeamScoreRow_C::bSkippingToEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, CountDownFinished) == 0x0002A0, "Member 'UResults_TeamScoreRow_C::CountDownFinished' has a wrong offset!");
static_assert(offsetof(UResults_TeamScoreRow_C, ResidualScoreTexts) == 0x0002B0, "Member 'UResults_TeamScoreRow_C::ResidualScoreTexts' has a wrong offset!");

}

