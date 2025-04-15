#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ranged_Rocket_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena
// 0x0410 (0x0410 - 0x0000)
struct B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor)
	bool                                          CallFunc_IsBeingKilled_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x0028(0x0010)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0038(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue2;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x00CC(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00D8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D5D[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00E8(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x0168(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0178(0x000C)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5E[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0188(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue2;           // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5F[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x020C(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue2;                 // 0x021C(0x000C)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult2;      // 0x0228(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue3;           // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D60[0x6];                                     // 0x02AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue3;      // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D61[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit2;                                 // 0x02C8(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D62[0x2];                                     // 0x034A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0354(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0360(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x036C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0378(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D63[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03B0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03BC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x03C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x03D4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x03E4(0x000C)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D64[0x3];                                     // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x03F4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0400(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena) == 0x000008, "Wrong alignment on B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena");
static_assert(sizeof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena) == 0x000410, "Wrong size on B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, EntryPoint) == 0x000000, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_IsBeingKilled_ReturnValue) == 0x000010, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_IsBeingKilled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, K2Node_Event_HitActors) == 0x000018, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, K2Node_Event_HitResults) == 0x000028, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, K2Node_Event_Hit) == 0x000038, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000B8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue2) == 0x0000C0, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, K2Node_Event_DeltaSeconds) == 0x0000C8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000CC, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000D8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000E8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_GetComponentLocation_ReturnValue2) == 0x000168, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_GetComponentLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000174, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_MakeRotator_ReturnValue) == 0x000178, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_IsDedicatedServer_ReturnValue) == 0x000184, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000188, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_IsDedicatedServer_ReturnValue2) == 0x000208, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_IsDedicatedServer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_ComposeRotators_ReturnValue) == 0x00020C, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_RandomFloatInRange_ReturnValue) == 0x000218, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_MakeRotator_ReturnValue2) == 0x00021C, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_MakeRotator_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_AddLocalRotation_SweepHitResult2) == 0x000228, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_AddLocalRotation_SweepHitResult2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_IsDedicatedServer_ReturnValue3) == 0x0002A8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_IsDedicatedServer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_IsActive_ReturnValue) == 0x0002A9, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue3) == 0x0002B0, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, K2Node_SwitchEnum_CmpSuccess) == 0x0002B8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0002C0, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, K2Node_Event_Hit2) == 0x0002C8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::K2Node_Event_Hit2' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_bBlockingHit) == 0x000348, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_bInitialOverlap) == 0x000349, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_Time) == 0x00034C, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_Distance) == 0x000350, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_Location) == 0x000354, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_ImpactPoint) == 0x000360, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_Normal) == 0x00036C, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_ImpactNormal) == 0x000378, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_PhysMat) == 0x000388, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_HitActor) == 0x000390, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_HitComponent) == 0x000398, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_HitBoneName) == 0x0003A0, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_HitItem) == 0x0003A8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_FaceIndex) == 0x0003AC, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_TraceStart) == 0x0003B0, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_BreakHitResult_TraceEnd) == 0x0003BC, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_K2_GetComponentLocation_ReturnValue3) == 0x0003C8, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_K2_GetComponentLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0003D4, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_VSize_ReturnValue) == 0x0003E0, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_MakeRotFromZ_ReturnValue) == 0x0003E4, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0003F0, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0003F4, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena, CallFunc_Add_VectorVector_ReturnValue) == 0x000400, "Member 'B_Prj_Ranged_Rocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Prj_Ranged_Rocket_Athena_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Ranged_Rocket_Athena_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Prj_Ranged_Rocket_Athena_C_ReceiveTick");
static_assert(sizeof(B_Prj_Ranged_Rocket_Athena_C_ReceiveTick) == 0x000004, "Wrong size on B_Prj_Ranged_Rocket_Athena_C_ReceiveTick");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Prj_Ranged_Rocket_Athena_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnBounce
// 0x0080 (0x0080 - 0x0000)
struct B_Prj_Ranged_Rocket_Athena_C_OnBounce final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Ranged_Rocket_Athena_C_OnBounce) == 0x000008, "Wrong alignment on B_Prj_Ranged_Rocket_Athena_C_OnBounce");
static_assert(sizeof(B_Prj_Ranged_Rocket_Athena_C_OnBounce) == 0x000080, "Wrong size on B_Prj_Ranged_Rocket_Athena_C_OnBounce");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_Ranged_Rocket_Athena_C_OnBounce::Hit' has a wrong offset!");

// Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnExploded
// 0x0020 (0x0020 - 0x0000)
struct B_Prj_Ranged_Rocket_Athena_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Ranged_Rocket_Athena_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_Ranged_Rocket_Athena_C_OnExploded");
static_assert(sizeof(B_Prj_Ranged_Rocket_Athena_C_OnExploded) == 0x000020, "Wrong size on B_Prj_Ranged_Rocket_Athena_C_OnExploded");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_Ranged_Rocket_Athena_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_Ranged_Rocket_Athena_C_OnExploded::HitResults' has a wrong offset!");

// Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnStop
// 0x0080 (0x0080 - 0x0000)
struct B_Prj_Ranged_Rocket_Athena_C_OnStop final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Ranged_Rocket_Athena_C_OnStop) == 0x000008, "Wrong alignment on B_Prj_Ranged_Rocket_Athena_C_OnStop");
static_assert(sizeof(B_Prj_Ranged_Rocket_Athena_C_OnStop) == 0x000080, "Wrong size on B_Prj_Ranged_Rocket_Athena_C_OnStop");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_Ranged_Rocket_Athena_C_OnStop::Hit' has a wrong offset!");

// Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript final
{
public:
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript) == 0x000004, "Wrong alignment on B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript");
static_assert(sizeof(B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript) == 0x000008, "Wrong size on B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000000, "Member 'B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'B_Prj_Ranged_Rocket_Athena_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

}

