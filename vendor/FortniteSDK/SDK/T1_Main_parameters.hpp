#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T1_Main

#include "Basic.hpp"


namespace SDK::Params
{

// Function T1_Main.T1_Main_C.ExecuteUbergraph_T1_Main
// 0x0010 (0x0010 - 0x0000)
struct T1_Main_C_ExecuteUbergraph_T1_Main final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E27[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(T1_Main_C_ExecuteUbergraph_T1_Main) == 0x000008, "Wrong alignment on T1_Main_C_ExecuteUbergraph_T1_Main");
static_assert(sizeof(T1_Main_C_ExecuteUbergraph_T1_Main) == 0x000010, "Wrong size on T1_Main_C_ExecuteUbergraph_T1_Main");
static_assert(offsetof(T1_Main_C_ExecuteUbergraph_T1_Main, EntryPoint) == 0x000000, "Member 'T1_Main_C_ExecuteUbergraph_T1_Main::EntryPoint' has a wrong offset!");
static_assert(offsetof(T1_Main_C_ExecuteUbergraph_T1_Main, K2Node_Event_IsDesignTime) == 0x000004, "Member 'T1_Main_C_ExecuteUbergraph_T1_Main::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(T1_Main_C_ExecuteUbergraph_T1_Main, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'T1_Main_C_ExecuteUbergraph_T1_Main::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function T1_Main.T1_Main_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct T1_Main_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(T1_Main_C_PreConstruct) == 0x000001, "Wrong alignment on T1_Main_C_PreConstruct");
static_assert(sizeof(T1_Main_C_PreConstruct) == 0x000001, "Wrong size on T1_Main_C_PreConstruct");
static_assert(offsetof(T1_Main_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'T1_Main_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

