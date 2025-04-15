#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Default_KilledEnemy

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.ExecuteUbergraph_GA_Default_KilledEnemy
// 0x00E8 (0x00E8 - 0x0000)
struct GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DA3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DA4[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00B8(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x00D8(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy) == 0x000008, "Wrong alignment on GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy");
static_assert(sizeof(GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy) == 0x0000E8, "Wrong size on GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy");
static_assert(offsetof(GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy, EntryPoint) == 0x000000, "Member 'GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy, K2Node_Event_EventData) == 0x000008, "Member 'GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000B0, "Member 'GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000B8, "Member 'GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x0000D8, "Member 'GA_Default_KilledEnemy_C_ExecuteUbergraph_GA_Default_KilledEnemy::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");

// Function GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Default_KilledEnemy_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

