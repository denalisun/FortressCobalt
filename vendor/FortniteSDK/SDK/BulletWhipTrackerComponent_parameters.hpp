#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletWhipTrackerComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ExecuteUbergraph_BulletWhipTrackerComponent
// 0x0040 (0x0040 - 0x0000)
struct BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TrackWhipStatus_Changed;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF4[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TrackWhipStatus_Whip_Distance;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF5[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_StartLocation;                  // 0x001C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TrackWhipStatus_Changed2;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF6[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TrackWhipStatus_Whip_Distance2;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Current_Velocity;               // 0x0030(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent) == 0x000004, "Wrong alignment on BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent");
static_assert(sizeof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent) == 0x000040, "Wrong size on BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, EntryPoint) == 0x000000, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_TrackWhipStatus_Changed) == 0x000009, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_TrackWhipStatus_Changed' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_TrackWhipStatus_Whip_Distance) == 0x00000C, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_TrackWhipStatus_Whip_Distance' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_MapRangeClamped_ReturnValue) == 0x000010, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_BooleanAND_ReturnValue) == 0x000014, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, K2Node_CustomEvent_StartLocation) == 0x00001C, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::K2Node_CustomEvent_StartLocation' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_TrackWhipStatus_Changed2) == 0x000028, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_TrackWhipStatus_Changed2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_TrackWhipStatus_Whip_Distance2) == 0x00002C, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_TrackWhipStatus_Whip_Distance2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, K2Node_CustomEvent_Current_Velocity) == 0x000030, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::K2Node_CustomEvent_Current_Velocity' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_Not_PreBool_ReturnValue) == 0x00003C, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent, CallFunc_BooleanAND_ReturnValue2) == 0x00003D, "Member 'BulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Update Velocity
// 0x000C (0x000C - 0x0000)
struct BulletWhipTrackerComponent_C_Update_Velocity final
{
public:
	struct FVector                                Current_Velocity;                                  // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletWhipTrackerComponent_C_Update_Velocity) == 0x000004, "Wrong alignment on BulletWhipTrackerComponent_C_Update_Velocity");
static_assert(sizeof(BulletWhipTrackerComponent_C_Update_Velocity) == 0x00000C, "Wrong size on BulletWhipTrackerComponent_C_Update_Velocity");
static_assert(offsetof(BulletWhipTrackerComponent_C_Update_Velocity, Current_Velocity) == 0x000000, "Member 'BulletWhipTrackerComponent_C_Update_Velocity::Current_Velocity' has a wrong offset!");

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Reset
// 0x000C (0x000C - 0x0000)
struct BulletWhipTrackerComponent_C_Reset final
{
public:
	struct FVector                                Param_StartLocation;                               // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletWhipTrackerComponent_C_Reset) == 0x000004, "Wrong alignment on BulletWhipTrackerComponent_C_Reset");
static_assert(sizeof(BulletWhipTrackerComponent_C_Reset) == 0x00000C, "Wrong size on BulletWhipTrackerComponent_C_Reset");
static_assert(offsetof(BulletWhipTrackerComponent_C_Reset, Param_StartLocation) == 0x000000, "Member 'BulletWhipTrackerComponent_C_Reset::Param_StartLocation' has a wrong offset!");

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BulletWhipTrackerComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletWhipTrackerComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BulletWhipTrackerComponent_C_ReceiveTick");
static_assert(sizeof(BulletWhipTrackerComponent_C_ReceiveTick) == 0x000004, "Wrong size on BulletWhipTrackerComponent_C_ReceiveTick");
static_assert(offsetof(BulletWhipTrackerComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BulletWhipTrackerComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.TrackWhipStatus
// 0x00D0 (0x00D0 - 0x0000)
struct BulletWhipTrackerComponent_C_TrackWhipStatus final
{
public:
	bool                                          Changed;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Whip_Distance;                                     // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangedResult;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EF8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x000C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0018(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSizeSquared_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x0034(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue4;     // 0x0040(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EF9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetLocalPawnForTracking_ReturnValue;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFA[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue2;       // 0x0074(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue3;       // 0x0084(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Square_ReturnValue;                       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ProjectVectorOnToVector_ReturnValue;      // 0x0094(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFB[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFC[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue4;       // 0x00B4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SignOfFloat_ReturnValue;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BulletWhipTrackerComponent_C_TrackWhipStatus) == 0x000008, "Wrong alignment on BulletWhipTrackerComponent_C_TrackWhipStatus");
static_assert(sizeof(BulletWhipTrackerComponent_C_TrackWhipStatus) == 0x0000D0, "Wrong size on BulletWhipTrackerComponent_C_TrackWhipStatus");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, Changed) == 0x000000, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::Changed' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, Whip_Distance) == 0x000004, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::Whip_Distance' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, ChangedResult) == 0x000008, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::ChangedResult' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00000C, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000018, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_K2_GetComponentLocation_ReturnValue2) == 0x000024, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_K2_GetComponentLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_VSizeSquared_ReturnValue) == 0x000030, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_K2_GetComponentLocation_ReturnValue3) == 0x000034, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_K2_GetComponentLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_K2_GetComponentLocation_ReturnValue4) == 0x000040, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_K2_GetComponentLocation_ReturnValue4' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_GetLocalPawnForTracking_ReturnValue) == 0x000050, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_GetLocalPawnForTracking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_GetOwner_ReturnValue) == 0x000060, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_Subtract_VectorVector_ReturnValue2) == 0x000074, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_Subtract_VectorVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000080, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_Subtract_VectorVector_ReturnValue3) == 0x000084, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_Subtract_VectorVector_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_Square_ReturnValue) == 0x000090, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_ProjectVectorOnToVector_ReturnValue) == 0x000094, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_ProjectVectorOnToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000A0, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A4, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_BooleanAND_ReturnValue) == 0x0000B0, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_Subtract_VectorVector_ReturnValue4) == 0x0000B4, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_Subtract_VectorVector_ReturnValue4' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_VSize_ReturnValue) == 0x0000C0, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000C4, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_SignOfFloat_ReturnValue) == 0x0000C8, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_SignOfFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_TrackWhipStatus, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0000CC, "Member 'BulletWhipTrackerComponent_C_TrackWhipStatus::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.GetLocalPawnForTracking
// 0x0058 (0x0058 - 0x0000)
struct BulletWhipTrackerComponent_C_GetLocalPawnForTracking final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFD[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFE[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking) == 0x000008, "Wrong alignment on BulletWhipTrackerComponent_C_GetLocalPawnForTracking");
static_assert(sizeof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking) == 0x000058, "Wrong size on BulletWhipTrackerComponent_C_GetLocalPawnForTracking");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, ReturnValue) == 0x000000, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000010, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_GetInstigator_ReturnValue) == 0x000020, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_Array_Get_Item) == 0x000028, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_GetViewTarget_ReturnValue) == 0x000038, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000048, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_GetLocalPawnForTracking, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'BulletWhipTrackerComponent_C_GetLocalPawnForTracking::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.PlayWhipSound
// 0x00AC (0x00AC - 0x0000)
struct BulletWhipTrackerComponent_C_PlayWhipSound final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EFF[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0010(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x001C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetRightVector_ReturnValue2;              // 0x0028(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_NegateVector_ReturnValue;                 // 0x0034(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x004C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x005C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X2;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y2;                           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z2;                           // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x0074(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RadiansToDegrees_ReturnValue;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0088(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0094(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletWhipTrackerComponent_C_PlayWhipSound) == 0x000004, "Wrong alignment on BulletWhipTrackerComponent_C_PlayWhipSound");
static_assert(sizeof(BulletWhipTrackerComponent_C_PlayWhipSound) == 0x0000AC, "Wrong size on BulletWhipTrackerComponent_C_PlayWhipSound");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, Location) == 0x000000, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::Location' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00000C, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_GetRightVector_ReturnValue) == 0x000010, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00001C, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_GetRightVector_ReturnValue2) == 0x000028, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_GetRightVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_NegateVector_ReturnValue) == 0x000034, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_NegateVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_BreakVector_X) == 0x000040, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_BreakVector_Y) == 0x000044, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_BreakVector_Z) == 0x000048, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_MakeVector_ReturnValue) == 0x00004C, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_Normal_ReturnValue) == 0x00005C, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_BreakVector_X2) == 0x000068, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_BreakVector_X2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_BreakVector_Y2) == 0x00006C, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_BreakVector_Y2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_BreakVector_Z2) == 0x000070, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_BreakVector_Z2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_MakeVector_ReturnValue2) == 0x000074, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_Dot_VectorVector_ReturnValue) == 0x000080, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_RadiansToDegrees_ReturnValue) == 0x000084, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_RadiansToDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_RotateAngleAxis_ReturnValue) == 0x000088, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000094, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BulletWhipTrackerComponent_C_PlayWhipSound, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'BulletWhipTrackerComponent_C_PlayWhipSound::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}

