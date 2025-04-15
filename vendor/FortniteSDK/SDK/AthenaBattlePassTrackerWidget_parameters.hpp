#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBattlePassTrackerWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.ExecuteUbergraph_AthenaBattlePassTrackerWidget
// 0x00C0 (0x00C0 - 0x0000)
struct AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3058[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                 K2Node_Event_Result;                               // 0x0010(0x0034)(NoDestructor)
	uint8                                         Pad_3059[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpProfileAthena*                  CallFunc_GetAthenaProfile_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPurchasedSeasonBook_ReturnValue;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_305A[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
};
static_assert(alignof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget) == 0x000008, "Wrong alignment on AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget");
static_assert(sizeof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget) == 0x0000C0, "Wrong size on AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, EntryPoint) == 0x000000, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, K2Node_Event_Result) == 0x000010, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::K2Node_Event_Result' has a wrong offset!");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, CallFunc_GetAthenaProfile_ReturnValue) == 0x000048, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::CallFunc_GetAthenaProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, CallFunc_HasPurchasedSeasonBook_ReturnValue) == 0x000050, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::CallFunc_HasPurchasedSeasonBook_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, K2Node_MakeArray_Array) == 0x000098, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'AthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.OnAccountInfoChanged
// 0x0034 (0x0034 - 0x0000)
struct AthenaBattlePassTrackerWidget_C_OnAccountInfoChanged final
{
public:
	struct FFortPublicAccountInfo                 Result;                                            // 0x0000(0x0034)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(AthenaBattlePassTrackerWidget_C_OnAccountInfoChanged) == 0x000004, "Wrong alignment on AthenaBattlePassTrackerWidget_C_OnAccountInfoChanged");
static_assert(sizeof(AthenaBattlePassTrackerWidget_C_OnAccountInfoChanged) == 0x000034, "Wrong size on AthenaBattlePassTrackerWidget_C_OnAccountInfoChanged");
static_assert(offsetof(AthenaBattlePassTrackerWidget_C_OnAccountInfoChanged, Result) == 0x000000, "Member 'AthenaBattlePassTrackerWidget_C_OnAccountInfoChanged::Result' has a wrong offset!");

}

