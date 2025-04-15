#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProjectileHuskRanged

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged
// 0x01E0 (0x01E0 - 0x0000)
struct ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A13[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A14[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIController*                      K2Node_DynamicCast_AsFort_AIController;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A15[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A16[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x004C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0058(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x0064(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0070(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetGoalActor_ReturnValue;                 // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x00F8(0x000C)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A17[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A18[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0138(0x0008)(NoDestructor)
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;             // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A19[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x0154(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0160(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue3;         // 0x016C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue2;                 // 0x0178(0x0008)(NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0180(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1A[0x6];                                     // 0x0192(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x0198(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x01A8(0x0010)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue4;         // 0x01C0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x01CC(0x000C)(IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue2;      // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged) == 0x000008, "Wrong alignment on ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged");
static_assert(sizeof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged) == 0x0001E0, "Wrong size on ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, EntryPoint) == 0x000000, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_GetInstigatorController_ReturnValue) == 0x000018, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_DynamicCast_AsFort_AIController) == 0x000020, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_DynamicCast_AsFort_AIController' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_MyComp) == 0x000030, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_Other) == 0x000038, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_OtherComp) == 0x000040, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_bSelfMoved) == 0x000048, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_HitLocation) == 0x00004C, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_HitNormal) == 0x000058, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_NormalImpulse) == 0x000064, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_Hit) == 0x000070, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_GetGoalActor_ReturnValue) == 0x0000F0, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_GetGoalActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_MakeRotFromX_ReturnValue) == 0x0000F8, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_DynamicCast_AsFort_Pawn) == 0x000108, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_DynamicCast_bSuccess2) == 0x000110, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000118, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_GetInstigator_ReturnValue) == 0x000120, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_MakeLiteralName_ReturnValue) == 0x000128, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_GetBlackboard_ReturnValue) == 0x000130, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_K2_SetTimer_ReturnValue) == 0x000138, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_GetValueAsObject_ReturnValue) == 0x000140, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_DynamicCast_AsActor) == 0x000148, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_DynamicCast_bSuccess3) == 0x000150, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_IsValid_ReturnValue) == 0x000151, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x000154, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_GetVelocity_ReturnValue) == 0x000160, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_K2_GetActorLocation_ReturnValue3) == 0x00016C, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_K2_GetActorLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_K2_SetTimer_ReturnValue2) == 0x000178, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_K2_SetTimer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000180, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_Dot_VectorVector_ReturnValue) == 0x00018C, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_Less_FloatFloat_ReturnValue) == 0x000190, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, Temp_bool_IsClosed_Variable) == 0x000191, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_HitActors) == 0x000198, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, K2Node_Event_HitResults) == 0x0001A8, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0001B8, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_K2_GetActorLocation_ReturnValue4) == 0x0001C0, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_K2_GetActorLocation_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0001CC, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged, CallFunc_SpawnEmitterAtLocation_ReturnValue2) == 0x0001D8, "Member 'ProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged::CallFunc_SpawnEmitterAtLocation_ReturnValue2' has a wrong offset!");

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded
// 0x0020 (0x0020 - 0x0000)
struct ProjectileHuskRanged_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(ProjectileHuskRanged_C_OnExploded) == 0x000008, "Wrong alignment on ProjectileHuskRanged_C_OnExploded");
static_assert(sizeof(ProjectileHuskRanged_C_OnExploded) == 0x000020, "Wrong size on ProjectileHuskRanged_C_OnExploded");
static_assert(offsetof(ProjectileHuskRanged_C_OnExploded, HitActors) == 0x000000, "Member 'ProjectileHuskRanged_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_OnExploded, HitResults) == 0x000010, "Member 'ProjectileHuskRanged_C_OnExploded::HitResults' has a wrong offset!");

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit
// 0x00C0 (0x00C0 - 0x0000)
struct ProjectileHuskRanged_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0040(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(ProjectileHuskRanged_C_ReceiveHit) == 0x000008, "Wrong alignment on ProjectileHuskRanged_C_ReceiveHit");
static_assert(sizeof(ProjectileHuskRanged_C_ReceiveHit) == 0x0000C0, "Wrong size on ProjectileHuskRanged_C_ReceiveHit");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, MyComp) == 0x000000, "Member 'ProjectileHuskRanged_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, Other) == 0x000008, "Member 'ProjectileHuskRanged_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, OtherComp) == 0x000010, "Member 'ProjectileHuskRanged_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'ProjectileHuskRanged_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, HitLocation) == 0x00001C, "Member 'ProjectileHuskRanged_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, HitNormal) == 0x000028, "Member 'ProjectileHuskRanged_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, NormalImpulse) == 0x000034, "Member 'ProjectileHuskRanged_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(ProjectileHuskRanged_C_ReceiveHit, Hit) == 0x000040, "Member 'ProjectileHuskRanged_C_ReceiveHit::Hit' has a wrong offset!");

}

