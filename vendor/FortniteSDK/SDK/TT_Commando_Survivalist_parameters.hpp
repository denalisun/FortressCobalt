#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Commando_Survivalist

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TT_Commando_Survivalist.TT_Commando_Survivalist_C.ConvertSurvivalistHealthIntoModifiedHealth
// 0x0010 (0x0010 - 0x0000)
struct TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth final
{
public:
	float                                         InStaticHealth;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E7B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth) == 0x000008, "Wrong alignment on TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth");
static_assert(sizeof(TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth) == 0x000010, "Wrong size on TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth");
static_assert(offsetof(TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth, InStaticHealth) == 0x000000, "Member 'TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth::InStaticHealth' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth, InAbility) == 0x000008, "Member 'TT_Commando_Survivalist_C_ConvertSurvivalistHealthIntoModifiedHealth::InAbility' has a wrong offset!");

// Function TT_Commando_Survivalist.TT_Commando_Survivalist_C.InitializeAbilityInstanceInternal
// 0x0020 (0x0020 - 0x0000)
struct TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal final
{
public:
	class UGameplayAbility*                       AbilityInstance;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    Context;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_Commando_Survivalist_C*             K2Node_DynamicCast_AsGA_Commando_Survivalist;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal) == 0x000008, "Wrong alignment on TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal");
static_assert(sizeof(TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal) == 0x000020, "Wrong size on TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal");
static_assert(offsetof(TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal, AbilityInstance) == 0x000000, "Member 'TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal::AbilityInstance' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal, Context) == 0x000008, "Member 'TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal::Context' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal, K2Node_DynamicCast_AsGA_Commando_Survivalist) == 0x000010, "Member 'TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal::K2Node_DynamicCast_AsGA_Commando_Survivalist' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TT_Commando_Survivalist_C_InitializeAbilityInstanceInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function TT_Commando_Survivalist.TT_Commando_Survivalist_C.GetTextForTokenFromAbilityInstanceInternal
// 0x0198 (0x0198 - 0x0000)
struct TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal final
{
public:
	class UGameplayAbility*                       AbilityInstance;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    Context;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Token;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FText                                   OutText;                                           // 0x0020(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E7C[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConvertedHealth;                                   // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E7D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGA_Commando_Survivalist_C*             K2Node_DynamicCast_AsGA_Commando_Survivalist;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E7E[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBaseWeaponStats                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x0120)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E7F[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0180(0x0018)()
};
static_assert(alignof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal) == 0x000008, "Wrong alignment on TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal");
static_assert(sizeof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal) == 0x000198, "Wrong size on TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, AbilityInstance) == 0x000000, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::AbilityInstance' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, Tag) == 0x000008, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::Tag' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, Context) == 0x000010, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::Context' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, Token) == 0x000018, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::Token' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, OutText) == 0x000020, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::OutText' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, ReturnValue) == 0x000038, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, ConvertedHealth) == 0x00003C, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::ConvertedHealth' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000040, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_DynamicCast_AsGA_Commando_Survivalist) == 0x000048, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_DynamicCast_AsGA_Commando_Survivalist' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000054, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000178, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Conv_FloatToText_ReturnValue) == 0x000180, "Member 'TT_Commando_Survivalist_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

}

