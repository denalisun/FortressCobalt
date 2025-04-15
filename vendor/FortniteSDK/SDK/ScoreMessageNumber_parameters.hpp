#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreMessageNumber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ScoreMessageNumber_C_OnScoreValueSet__DelegateSignature final
{
public:
	EStatCategory                                 ChangedScoreCategory;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreMessageNumber_C_OnScoreValueSet__DelegateSignature) == 0x000001, "Wrong alignment on ScoreMessageNumber_C_OnScoreValueSet__DelegateSignature");
static_assert(sizeof(ScoreMessageNumber_C_OnScoreValueSet__DelegateSignature) == 0x000001, "Wrong size on ScoreMessageNumber_C_OnScoreValueSet__DelegateSignature");
static_assert(offsetof(ScoreMessageNumber_C_OnScoreValueSet__DelegateSignature, ChangedScoreCategory) == 0x000000, "Member 'ScoreMessageNumber_C_OnScoreValueSet__DelegateSignature::ChangedScoreCategory' has a wrong offset!");

// Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber
// 0x0004 (0x0004 - 0x0000)
struct ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber) == 0x000004, "Wrong alignment on ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber");
static_assert(sizeof(ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber) == 0x000004, "Wrong size on ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber");
static_assert(offsetof(ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber, EntryPoint) == 0x000000, "Member 'ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber::EntryPoint' has a wrong offset!");

// Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText
// 0x0068 (0x0068 - 0x0000)
struct ScoreMessageNumber_C_UpdateScoreText final
{
public:
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0000(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0050(0x0018)()
};
static_assert(alignof(ScoreMessageNumber_C_UpdateScoreText) == 0x000008, "Wrong alignment on ScoreMessageNumber_C_UpdateScoreText");
static_assert(sizeof(ScoreMessageNumber_C_UpdateScoreText) == 0x000068, "Wrong size on ScoreMessageNumber_C_UpdateScoreText");
static_assert(offsetof(ScoreMessageNumber_C_UpdateScoreText, K2Node_MakeStruct_FormatArgumentData) == 0x000000, "Member 'ScoreMessageNumber_C_UpdateScoreText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ScoreMessageNumber_C_UpdateScoreText, K2Node_MakeArray_Array) == 0x000040, "Member 'ScoreMessageNumber_C_UpdateScoreText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ScoreMessageNumber_C_UpdateScoreText, CallFunc_Format_ReturnValue) == 0x000050, "Member 'ScoreMessageNumber_C_UpdateScoreText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore
// 0x0008 (0x0008 - 0x0000)
struct ScoreMessageNumber_C_SetScore final
{
public:
	int32                                         InScore;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScoreMessageNumber_C_SetScore) == 0x000004, "Wrong alignment on ScoreMessageNumber_C_SetScore");
static_assert(sizeof(ScoreMessageNumber_C_SetScore) == 0x000008, "Wrong size on ScoreMessageNumber_C_SetScore");
static_assert(offsetof(ScoreMessageNumber_C_SetScore, InScore) == 0x000000, "Member 'ScoreMessageNumber_C_SetScore::InScore' has a wrong offset!");
static_assert(offsetof(ScoreMessageNumber_C_SetScore, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'ScoreMessageNumber_C_SetScore::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

