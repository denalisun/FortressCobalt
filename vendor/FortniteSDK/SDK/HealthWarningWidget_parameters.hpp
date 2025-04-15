#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealthWarningWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
// 0x0030 (0x0030 - 0x0000)
struct HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E7A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonLazyImage*                       K2Node_Event_Image;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetHealthWarningText_ReturnValue;         // 0x0018(0x0018)()
};
static_assert(alignof(HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget) == 0x000008, "Wrong alignment on HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget");
static_assert(sizeof(HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget) == 0x000030, "Wrong size on HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget");
static_assert(offsetof(HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget, EntryPoint) == 0x000000, "Member 'HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget, K2Node_Event_Image) == 0x000008, "Member 'HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget::K2Node_Event_Image' has a wrong offset!");
static_assert(offsetof(HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000010, "Member 'HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget, CallFunc_GetHealthWarningText_ReturnValue) == 0x000018, "Member 'HealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget::CallFunc_GetHealthWarningText_ReturnValue' has a wrong offset!");

// Function HealthWarningWidget.HealthWarningWidget_C.AddIconToScreen
// 0x0008 (0x0008 - 0x0000)
struct HealthWarningWidget_C_AddIconToScreen final
{
public:
	class UCommonLazyImage*                       Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HealthWarningWidget_C_AddIconToScreen) == 0x000008, "Wrong alignment on HealthWarningWidget_C_AddIconToScreen");
static_assert(sizeof(HealthWarningWidget_C_AddIconToScreen) == 0x000008, "Wrong size on HealthWarningWidget_C_AddIconToScreen");
static_assert(offsetof(HealthWarningWidget_C_AddIconToScreen, Image) == 0x000000, "Member 'HealthWarningWidget_C_AddIconToScreen::Image' has a wrong offset!");

// Function HealthWarningWidget.HealthWarningWidget_C.SetupShowTimer
// 0x0020 (0x0020 - 0x0000)
struct HealthWarningWidget_C_SetupShowTimer final
{
public:
	struct FTimerHandle                           NewLocalVar_0;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor)
};
static_assert(alignof(HealthWarningWidget_C_SetupShowTimer) == 0x000008, "Wrong alignment on HealthWarningWidget_C_SetupShowTimer");
static_assert(sizeof(HealthWarningWidget_C_SetupShowTimer) == 0x000020, "Wrong size on HealthWarningWidget_C_SetupShowTimer");
static_assert(offsetof(HealthWarningWidget_C_SetupShowTimer, NewLocalVar_0) == 0x000000, "Member 'HealthWarningWidget_C_SetupShowTimer::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(HealthWarningWidget_C_SetupShowTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'HealthWarningWidget_C_SetupShowTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HealthWarningWidget_C_SetupShowTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'HealthWarningWidget_C_SetupShowTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

}

