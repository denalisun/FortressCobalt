#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SupplyDrop

#include "Basic.hpp"

#include "SupplyDropUnlocks_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GA_SupplyDrop.GA_SupplyDrop_C.ExecuteUbergraph_GA_SupplyDrop
// 0x0078 (0x0078 - 0x0000)
struct GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CE7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CE8[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAbilityDecoTool*                   K2Node_DynamicCast_AsFort_Ability_Deco_Tool;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CE9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAbilityToolSpawnParameters            CallFunc_GetSpawnParameters_OutSpawnParamters;     // 0x0030(0x0028)(NoDestructor)
	class ABuildingActor*                         CallFunc_AbilitySpawnDeco_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_SupplyDropPlacement_C*               K2Node_DynamicCast_AsB_Supply_Drop_Placement;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CEA[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop) == 0x000008, "Wrong alignment on GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop");
static_assert(sizeof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop) == 0x000078, "Wrong size on GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, EntryPoint) == 0x000000, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_AsFort_Pawn) == 0x000010, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_K2_CommitAbility_ReturnValue) == 0x000019, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_AsFort_Ability_Deco_Tool) == 0x000020, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_AsFort_Ability_Deco_Tool' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_bSuccess2) == 0x000028, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetSpawnParameters_OutSpawnParamters) == 0x000030, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetSpawnParameters_OutSpawnParamters' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_AbilitySpawnDeco_ReturnValue) == 0x000058, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_AbilitySpawnDeco_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_AsB_Supply_Drop_Placement) == 0x000060, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_AsB_Supply_Drop_Placement' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, K2Node_DynamicCast_bSuccess3) == 0x000068, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_HasAuthority_ReturnValue) == 0x000069, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000070, "Member 'GA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.GetAttributeValue
// 0x0038 (0x0038 - 0x0000)
struct GA_SupplyDrop_C_GetAttributeValue final
{
public:
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*            K2Node_DynamicCast_AsFort_Ability_System_Component; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CEB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAttributeInfo                         CallFunc_FindAttributeInformation_ReturnValue;     // 0x0018(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CEC[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAttributeMagnitude_ReturnValue;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_GetAttributeValue) == 0x000008, "Wrong alignment on GA_SupplyDrop_C_GetAttributeValue");
static_assert(sizeof(GA_SupplyDrop_C_GetAttributeValue) == 0x000038, "Wrong size on GA_SupplyDrop_C_GetAttributeValue");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000000, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, K2Node_DynamicCast_AsFort_Ability_System_Component) == 0x000008, "Member 'GA_SupplyDrop_C_GetAttributeValue::K2Node_DynamicCast_AsFort_Ability_System_Component' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_SupplyDrop_C_GetAttributeValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_FindAttributeInformation_ReturnValue) == 0x000018, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_FindAttributeInformation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_GetAttributeMagnitude_ReturnValue) == 0x00002C, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_GetAttributeMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_GetAttributeValue, CallFunc_FFloor_ReturnValue) == 0x000030, "Member 'GA_SupplyDrop_C_GetAttributeValue::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.Setup_Ability
// 0x0080 (0x0080 - 0x0000)
struct GA_SupplyDrop_C_Setup_Ability final
{
public:
	class UAbilitySystemComponent*                AbilitySystemComponentRef;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CED[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue2;  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CEE[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue3;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CEF[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput; // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue4;  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF0[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput; // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue5;  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSupplyDropUnlocks                     K2Node_MakeStruct_SupplyDropUnlocks;               // 0x0079(0x0005)(HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_Setup_Ability) == 0x000008, "Wrong alignment on GA_SupplyDrop_C_Setup_Ability");
static_assert(sizeof(GA_SupplyDrop_C_Setup_Ability) == 0x000080, "Wrong size on GA_SupplyDrop_C_Setup_Ability");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, AbilitySystemComponentRef) == 0x000000, "Member 'GA_SupplyDrop_C_Setup_Ability::AbilitySystemComponentRef' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000008, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000018, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput) == 0x000020, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_ReturnValue2) == 0x000030, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput) == 0x000038, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_ReturnValue3) == 0x000048, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput) == 0x000050, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_ReturnValue4) == 0x000060, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_ReturnValue4' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput) == 0x000068, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, CallFunc_HasAllMatchingGameplayTags_ReturnValue5) == 0x000078, "Member 'GA_SupplyDrop_C_Setup_Ability::CallFunc_HasAllMatchingGameplayTags_ReturnValue5' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_Setup_Ability, K2Node_MakeStruct_SupplyDropUnlocks) == 0x000079, "Member 'GA_SupplyDrop_C_Setup_Ability::K2Node_MakeStruct_SupplyDropUnlocks' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierOneData
// 0x000C (0x000C - 0x0000)
struct GA_SupplyDrop_C_SetTierOneData final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_SetTierOneData) == 0x000004, "Wrong alignment on GA_SupplyDrop_C_SetTierOneData");
static_assert(sizeof(GA_SupplyDrop_C_SetTierOneData) == 0x00000C, "Wrong size on GA_SupplyDrop_C_SetTierOneData");
static_assert(offsetof(GA_SupplyDrop_C_SetTierOneData, Condition) == 0x000000, "Member 'GA_SupplyDrop_C_SetTierOneData::Condition' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierOneData, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'GA_SupplyDrop_C_SetTierOneData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierOneData, CallFunc_Add_IntInt_ReturnValue2) == 0x000008, "Member 'GA_SupplyDrop_C_SetTierOneData::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierTwoData
// 0x000C (0x000C - 0x0000)
struct GA_SupplyDrop_C_SetTierTwoData final
{
public:
	bool                                          Conditions;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_SetTierTwoData) == 0x000004, "Wrong alignment on GA_SupplyDrop_C_SetTierTwoData");
static_assert(sizeof(GA_SupplyDrop_C_SetTierTwoData) == 0x00000C, "Wrong size on GA_SupplyDrop_C_SetTierTwoData");
static_assert(offsetof(GA_SupplyDrop_C_SetTierTwoData, Conditions) == 0x000000, "Member 'GA_SupplyDrop_C_SetTierTwoData::Conditions' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierTwoData, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'GA_SupplyDrop_C_SetTierTwoData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierTwoData, CallFunc_Add_IntInt_ReturnValue2) == 0x000008, "Member 'GA_SupplyDrop_C_SetTierTwoData::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierThreeData
// 0x000C (0x000C - 0x0000)
struct GA_SupplyDrop_C_SetTierThreeData final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_SetTierThreeData) == 0x000004, "Wrong alignment on GA_SupplyDrop_C_SetTierThreeData");
static_assert(sizeof(GA_SupplyDrop_C_SetTierThreeData) == 0x00000C, "Wrong size on GA_SupplyDrop_C_SetTierThreeData");
static_assert(offsetof(GA_SupplyDrop_C_SetTierThreeData, Condition) == 0x000000, "Member 'GA_SupplyDrop_C_SetTierThreeData::Condition' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierThreeData, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'GA_SupplyDrop_C_SetTierThreeData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierThreeData, CallFunc_Add_IntInt_ReturnValue2) == 0x000008, "Member 'GA_SupplyDrop_C_SetTierThreeData::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFourData
// 0x000C (0x000C - 0x0000)
struct GA_SupplyDrop_C_SetTierFourData final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_SetTierFourData) == 0x000004, "Wrong alignment on GA_SupplyDrop_C_SetTierFourData");
static_assert(sizeof(GA_SupplyDrop_C_SetTierFourData) == 0x00000C, "Wrong size on GA_SupplyDrop_C_SetTierFourData");
static_assert(offsetof(GA_SupplyDrop_C_SetTierFourData, Condition) == 0x000000, "Member 'GA_SupplyDrop_C_SetTierFourData::Condition' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierFourData, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'GA_SupplyDrop_C_SetTierFourData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierFourData, CallFunc_Add_IntInt_ReturnValue2) == 0x000008, "Member 'GA_SupplyDrop_C_SetTierFourData::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");

// Function GA_SupplyDrop.GA_SupplyDrop_C.SetTierFiveData
// 0x0010 (0x0010 - 0x0000)
struct GA_SupplyDrop_C_SetTierFiveData final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue3;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SupplyDrop_C_SetTierFiveData) == 0x000004, "Wrong alignment on GA_SupplyDrop_C_SetTierFiveData");
static_assert(sizeof(GA_SupplyDrop_C_SetTierFiveData) == 0x000010, "Wrong size on GA_SupplyDrop_C_SetTierFiveData");
static_assert(offsetof(GA_SupplyDrop_C_SetTierFiveData, Condition) == 0x000000, "Member 'GA_SupplyDrop_C_SetTierFiveData::Condition' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierFiveData, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'GA_SupplyDrop_C_SetTierFiveData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierFiveData, CallFunc_Add_IntInt_ReturnValue2) == 0x000008, "Member 'GA_SupplyDrop_C_SetTierFiveData::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_SupplyDrop_C_SetTierFiveData, CallFunc_Add_IntInt_ReturnValue3) == 0x00000C, "Member 'GA_SupplyDrop_C_SetTierFiveData::CallFunc_Add_IntInt_ReturnValue3' has a wrong offset!");

}

