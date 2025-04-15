#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericStunned

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned
// 0x0168 (0x0168 - 0x0000)
struct GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D30[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)()
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D31[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetStunTime_ReturnValue;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D32[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue2;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2; // 0x00E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D33[0x5];                                     // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            CallFunc_GetActivatingAbilityComponent_ReturnValue2; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue2;  // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D34[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue3;           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0108(0x000C)(IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3; // 0x0114(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x011C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0128(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0134(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0140(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4; // 0x014C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D35[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue4;           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned) == 0x000008, "Wrong alignment on GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned");
static_assert(sizeof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned) == 0x000168, "Wrong size on GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, EntryPoint) == 0x000000, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, K2Node_Event_EventData) == 0x000008, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_GetActivatingPawn_ReturnValue) == 0x0000B0, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_GetStunTime_ReturnValue) == 0x0000BC, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_GetStunTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_GetActivatingAbilityComponent_ReturnValue) == 0x0000C0, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_GetActivatingAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0000C8, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x0000D0, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_GetActivatingPawn_ReturnValue2) == 0x0000D8, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_GetActivatingPawn_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2) == 0x0000E0, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, K2Node_SwitchEnum_CmpSuccess) == 0x0000E8, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_Not_PreBool_ReturnValue) == 0x0000E9, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_Not_PreBool_ReturnValue2) == 0x0000EA, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_GetActivatingAbilityComponent_ReturnValue2) == 0x0000F0, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_GetActivatingAbilityComponent_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_RemoveActiveGameplayEffect_ReturnValue2) == 0x0000F9, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_RemoveActiveGameplayEffect_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_GetActivatingPawn_ReturnValue3) == 0x000100, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_GetActivatingPawn_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000108, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3) == 0x000114, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x00011C, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000128, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000134, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_Add_VectorVector_ReturnValue) == 0x000140, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4) == 0x00014C, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue4' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_GetActivatingPawn_ReturnValue4) == 0x000158, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_GetActivatingPawn_ReturnValue4' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, K2Node_Event_bWasCancelled) == 0x000160, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, CallFunc_IsValid_ReturnValue2) == 0x000161, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned, K2Node_SwitchEnum2_CmpSuccess) == 0x000162, "Member 'GAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");

// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_GenericStunned_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_GenericStunned_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_GenericStunned_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_GenericStunned_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_GenericStunned_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_GenericStunned_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_GenericStunned_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_GenericStunned_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_GenericStunned_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_GenericStunned_C_K2_OnEndAbility");
static_assert(sizeof(GAB_GenericStunned_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_GenericStunned_C_K2_OnEndAbility");
static_assert(offsetof(GAB_GenericStunned_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_GenericStunned_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

