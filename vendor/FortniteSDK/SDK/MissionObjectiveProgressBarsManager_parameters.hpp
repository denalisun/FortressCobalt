#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionObjectiveProgressBarsManager

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars
// 0x0068 (0x0068 - 0x0000)
struct MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars final
{
public:
	int32                                         RemoveWidgetIndex;                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumDesiredProgressBars;                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ProgressBarBoxChildrenCount;                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue2;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3247[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue3;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3248[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue4;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue2;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3249[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveProgress_C*            K2Node_DynamicCast_AsMission_Objective_Progress;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324B[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BlueprintGetNumProgressBars_ReturnValue;  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue5;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue2;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue3;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324C[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars) == 0x000008, "Wrong alignment on MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars");
static_assert(sizeof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars) == 0x000068, "Wrong size on MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, RemoveWidgetIndex) == 0x000000, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::RemoveWidgetIndex' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, NumDesiredProgressBars) == 0x000004, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::NumDesiredProgressBars' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, ProgressBarBoxChildrenCount) == 0x000008, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::ProgressBarBoxChildrenCount' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, Temp_int_Variable) == 0x00000C, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Subtract_IntInt_ReturnValue2) == 0x000018, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Subtract_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_RemoveChildAt_ReturnValue) == 0x00001C, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Subtract_IntInt_ReturnValue3) == 0x000020, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Subtract_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Subtract_IntInt_ReturnValue4) == 0x000028, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Subtract_IntInt_ReturnValue4' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, Temp_int_Variable2) == 0x00002C, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Greater_IntInt_ReturnValue2) == 0x000030, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Greater_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Add_IntInt_ReturnValue2) == 0x000034, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, K2Node_DynamicCast_AsMission_Objective_Progress) == 0x000048, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::K2Node_DynamicCast_AsMission_Objective_Progress' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_HasAnyChildren_ReturnValue) == 0x000051, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Min_ReturnValue) == 0x000054, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_BlueprintGetNumProgressBars_ReturnValue) == 0x000058, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_BlueprintGetNumProgressBars_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Subtract_IntInt_ReturnValue5) == 0x00005C, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Subtract_IntInt_ReturnValue5' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_LessEqual_IntInt_ReturnValue2) == 0x000060, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_LessEqual_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_Greater_IntInt_ReturnValue3) == 0x000061, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_Greater_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars, CallFunc_GetChildrenCount_ReturnValue) == 0x000064, "Member 'MissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup
// 0x0040 (0x0040 - 0x0000)
struct MissionObjectiveProgressBarsManager_C_Setup final
{
public:
	class AFortObjectiveBase*                     Param_TrackedObjective;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInConfigureAsHUD;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AFortMissionState* MissionState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AFortObjectiveBase* Objective, bool bNewVisibility)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MissionObjectiveProgressBarsManager_C_Setup) == 0x000008, "Wrong alignment on MissionObjectiveProgressBarsManager_C_Setup");
static_assert(sizeof(MissionObjectiveProgressBarsManager_C_Setup) == 0x000040, "Wrong size on MissionObjectiveProgressBarsManager_C_Setup");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_Setup, Param_TrackedObjective) == 0x000000, "Member 'MissionObjectiveProgressBarsManager_C_Setup::Param_TrackedObjective' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_Setup, bInConfigureAsHUD) == 0x000008, "Member 'MissionObjectiveProgressBarsManager_C_Setup::bInConfigureAsHUD' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'MissionObjectiveProgressBarsManager_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_Setup, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'MissionObjectiveProgressBarsManager_C_Setup::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_Setup, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'MissionObjectiveProgressBarsManager_C_Setup::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget
// 0x0020 (0x0020 - 0x0000)
struct MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_324E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveProgress_C*            CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget) == 0x000008, "Wrong alignment on MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget");
static_assert(sizeof(MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget) == 0x000020, "Wrong size on MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget, Param_Index) == 0x000000, "Member 'MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget, CallFunc_Create_ReturnValue) == 0x000010, "Member 'MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'MissionObjectiveProgressBarsManager_C_CreateProgressBarWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged
// 0x0010 (0x0010 - 0x0000)
struct MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged final
{
public:
	class AFortObjectiveBase*                     Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortObjectiveStatus                          New_Status;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged) == 0x000008, "Wrong alignment on MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged");
static_assert(sizeof(MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged) == 0x000010, "Wrong size on MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged, Objective) == 0x000000, "Member 'MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged::Objective' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged, New_Status) == 0x000008, "Member 'MissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged::New_Status' has a wrong offset!");

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged
// 0x0010 (0x0010 - 0x0000)
struct MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged final
{
public:
	class AFortObjectiveBase*                     Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          New_Visibility;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged) == 0x000008, "Wrong alignment on MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged");
static_assert(sizeof(MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged) == 0x000010, "Wrong size on MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged, Objective) == 0x000000, "Member 'MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged::Objective' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged, New_Visibility) == 0x000008, "Member 'MissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged::New_Visibility' has a wrong offset!");

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate
// 0x0008 (0x0008 - 0x0000)
struct MissionObjectiveProgressBarsManager_C_HandleUpdate final
{
public:
	class AFortMissionState*                      Objective;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionObjectiveProgressBarsManager_C_HandleUpdate) == 0x000008, "Wrong alignment on MissionObjectiveProgressBarsManager_C_HandleUpdate");
static_assert(sizeof(MissionObjectiveProgressBarsManager_C_HandleUpdate) == 0x000008, "Wrong size on MissionObjectiveProgressBarsManager_C_HandleUpdate");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_HandleUpdate, Objective) == 0x000000, "Member 'MissionObjectiveProgressBarsManager_C_HandleUpdate::Objective' has a wrong offset!");

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate
// 0x0040 (0x0040 - 0x0000)
struct MissionObjectiveProgressBarsManager_C_GetHeightEstimate final
{
public:
	float                                         Height;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightEstimate;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_324F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3250[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMissionObjectiveProgress_C*            K2Node_DynamicCast_AsMission_Objective_Progress;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3251[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHeightEstimate_Height;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3252[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate) == 0x000008, "Wrong alignment on MissionObjectiveProgressBarsManager_C_GetHeightEstimate");
static_assert(sizeof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate) == 0x000040, "Wrong size on MissionObjectiveProgressBarsManager_C_GetHeightEstimate");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, Height) == 0x000000, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::Height' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, HeightEstimate) == 0x000004, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::HeightEstimate' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, Temp_int_Variable) == 0x000008, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, K2Node_DynamicCast_AsMission_Objective_Progress) == 0x000020, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::K2Node_DynamicCast_AsMission_Objective_Progress' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, CallFunc_GetHeightEstimate_Height) == 0x000030, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::CallFunc_GetHeightEstimate_Height' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, CallFunc_Add_FloatFloat_ReturnValue) == 0x000038, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionObjectiveProgressBarsManager_C_GetHeightEstimate, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'MissionObjectiveProgressBarsManager_C_GetHeightEstimate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

