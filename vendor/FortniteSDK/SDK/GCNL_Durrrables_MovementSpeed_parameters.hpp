#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Durrrables_MovementSpeed

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.WhileActive
// 0x00F8 (0x00F8 - 0x0000)
struct GCNL_Durrrables_MovementSpeed_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D56[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TargetComp;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_GetTargetComponent_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D57[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue2;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_Durrrables_MovementSpeed_C_WhileActive) == 0x000008, "Wrong alignment on GCNL_Durrrables_MovementSpeed_C_WhileActive");
static_assert(sizeof(GCNL_Durrrables_MovementSpeed_C_WhileActive) == 0x0000F8, "Wrong size on GCNL_Durrrables_MovementSpeed_C_WhileActive");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, MyTarget) == 0x000000, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, Parameters) == 0x000008, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, ReturnValue) == 0x0000C0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, TargetComp) == 0x0000C8, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::TargetComp' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_GetTargetComponent_ReturnValue) == 0x0000D0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_GetTargetComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000E0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue2) == 0x0000E8, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_IsValid_ReturnValue2) == 0x0000F0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GCNL_Durrrables_MovementSpeed_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_Durrrables_MovementSpeed_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_Durrrables_MovementSpeed_C_OnRemove");
static_assert(sizeof(GCNL_Durrrables_MovementSpeed_C_OnRemove) == 0x0000C8, "Wrong size on GCNL_Durrrables_MovementSpeed_C_OnRemove");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, CallFunc_IsValid_ReturnValue2) == 0x0000C2, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

}

