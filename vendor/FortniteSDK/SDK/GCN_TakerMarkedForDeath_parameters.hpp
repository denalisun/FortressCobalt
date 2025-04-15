#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_TakerMarkedForDeath

#include "Basic.hpp"


namespace SDK::Params
{

// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ExecuteUbergraph_GCN_TakerMarkedForDeath
// 0x0050 (0x0050 - 0x0000)
struct GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_269F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26A0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue2;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn2;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26A1[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath) == 0x000008, "Wrong alignment on GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath");
static_assert(sizeof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath) == 0x000050, "Wrong size on GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, EntryPoint) == 0x000000, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, CallFunc_GetOwner_ReturnValue2) == 0x000020, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::CallFunc_GetOwner_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, K2Node_DynamicCast_AsFort_Pawn2) == 0x000028, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::K2Node_DynamicCast_AsFort_Pawn2' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, K2Node_DynamicCast_bSuccess2) == 0x000030, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000038, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000048, "Member 'GCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

}

