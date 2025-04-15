#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerPadGadgets

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets
// 0x0110 (0x0110 - 0x0000)
struct LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_265A[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent2;                          // 0x0040(0x0068)()
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00A8(0x0068)()
};
static_assert(alignof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets");
static_assert(sizeof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets) == 0x000110, "Wrong size on LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, EntryPoint) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::EntryPoint' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, K2Node_Event_MyGeometry) == 0x000004, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, K2Node_Event_MouseEvent2) == 0x000040, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::K2Node_Event_MouseEvent2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, K2Node_Event_MouseEvent) == 0x0000A8, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::K2Node_Event_MouseEvent' has a wrong offset!");

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave
// 0x0068 (0x0068 - 0x0000)
struct LobbyPlayerPadGadgets_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnMouseLeave) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnMouseLeave");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnMouseLeave) == 0x000068, "Wrong size on LobbyPlayerPadGadgets_C_OnMouseLeave");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter
// 0x00A0 (0x00A0 - 0x0000)
struct LobbyPlayerPadGadgets_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnMouseEnter) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnMouseEnter");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnMouseEnter) == 0x0000A0, "Wrong size on LobbyPlayerPadGadgets_C_OnMouseEnter");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'LobbyPlayerPadGadgets_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh
// 0x01D8 (0x01D8 - 0x0000)
struct LobbyPlayerPadGadgets_C_Refresh final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortItem*                              CallFunc_Array_Get_Item;                           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_Array_Get_Item2;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item;              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_265B[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item2;             // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue2;          // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadGadgets_C_Refresh) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_Refresh");
static_assert(sizeof(LobbyPlayerPadGadgets_C_Refresh) == 0x0001D8, "Wrong size on LobbyPlayerPadGadgets_C_Refresh");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, TeamMemberInfo) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_Refresh::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_Get_Item) == 0x0001A8, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_Get_Item2) == 0x0001B0, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_AsFort_World_Item) == 0x0001B8, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_AsFort_World_Item' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_bSuccess) == 0x0001C0, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_AsFort_World_Item2) == 0x0001C8, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_AsFort_World_Item2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_bSuccess2) == 0x0001D0, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0001D1, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_IsValidIndex_ReturnValue2) == 0x0001D2, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_IsValidIndex_ReturnValue2' has a wrong offset!");

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown
// 0x0230 (0x0230 - 0x0000)
struct LobbyPlayerPadGadgets_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0068)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A0(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0158(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0170(0x00B8)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnMouseButtonDown");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnMouseButtonDown) == 0x000230, "Wrong size on LobbyPlayerPadGadgets_C_OnMouseButtonDown");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, ReturnValue) == 0x0000A0, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000158, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000170, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000228, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize
// 0x0004 (0x0004 - 0x0000)
struct LobbyPlayerPadGadgets_C_Initialize final
{
public:
	int32                                         Param_PlayerIndex;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadGadgets_C_Initialize) == 0x000004, "Wrong alignment on LobbyPlayerPadGadgets_C_Initialize");
static_assert(sizeof(LobbyPlayerPadGadgets_C_Initialize) == 0x000004, "Wrong size on LobbyPlayerPadGadgets_C_Initialize");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Initialize, Param_PlayerIndex) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_Initialize::Param_PlayerIndex' has a wrong offset!");

// Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked
// 0x0008 (0x0008 - 0x0000)
struct LobbyPlayerPadGadgets_C_OnInputClicked final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnInputClicked) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnInputClicked");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnInputClicked) == 0x000008, "Wrong size on LobbyPlayerPadGadgets_C_OnInputClicked");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnInputClicked, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnInputClicked::CallFunc_GetContext_ReturnValue' has a wrong offset!");

}

