#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_CriticalMission

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ExecuteUbergraph_BP_Hex_CriticalMission
// 0x0108 (0x0108 - 0x0000)
struct BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0014(0x000C)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0020(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00A0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Hex_PARENT_C*                       CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4134[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00D0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00DC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00E8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00F4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission) == 0x000008, "Wrong alignment on BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission");
static_assert(sizeof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission) == 0x000108, "Wrong size on BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, EntryPoint) == 0x000000, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000014, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000020, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_GetForwardVector_ReturnValue) == 0x0000A0, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, Temp_int_Loop_Counter_Variable) == 0x0000AC, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B8, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000D0, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000DC, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000E8, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Normal_ReturnValue) == 0x0000F4, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Dot_VectorVector_ReturnValue) == 0x000100, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000104, "Member 'BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_Hex_CriticalMission_C_UserConstructionScript final
{
public:
	bool                                          NewLocalVar_0;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Hex_CriticalMission_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_Hex_CriticalMission_C_UserConstructionScript");
static_assert(sizeof(BP_Hex_CriticalMission_C_UserConstructionScript) == 0x000001, "Wrong size on BP_Hex_CriticalMission_C_UserConstructionScript");
static_assert(offsetof(BP_Hex_CriticalMission_C_UserConstructionScript, NewLocalVar_0) == 0x000000, "Member 'BP_Hex_CriticalMission_C_UserConstructionScript::NewLocalVar_0' has a wrong offset!");

}

