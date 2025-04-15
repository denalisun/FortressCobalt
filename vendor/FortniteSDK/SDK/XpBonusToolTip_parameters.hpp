#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBonusToolTip

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function XpBonusToolTip.XpBonusToolTip_C.ExecuteUbergraph_XpBonusToolTip
// 0x0030 (0x0030 - 0x0000)
struct XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3802[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3803[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRestXpBalance_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3804[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetXpBoostBalance_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue2;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip) == 0x000008, "Wrong alignment on XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip");
static_assert(sizeof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip) == 0x000030, "Wrong size on XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, EntryPoint) == 0x000000, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, Temp_bool_Variable) == 0x000004, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, Temp_byte_Variable) == 0x000005, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, Temp_byte_Variable2) == 0x000006, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, Temp_bool_Variable2) == 0x000010, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, CallFunc_GetRestXpBalance_ReturnValue) == 0x000014, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::CallFunc_GetRestXpBalance_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, Temp_byte_Variable3) == 0x000018, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, CallFunc_Greater_IntInt_ReturnValue) == 0x000019, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, Temp_byte_Variable4) == 0x00001A, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, K2Node_Select_Default) == 0x00001B, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, CallFunc_GetContext_ReturnValue2) == 0x000020, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, CallFunc_GetXpBoostBalance_ReturnValue) == 0x000028, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::CallFunc_GetXpBoostBalance_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, CallFunc_Greater_IntInt_ReturnValue2) == 0x00002C, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::CallFunc_Greater_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip, K2Node_Select2_Default) == 0x00002D, "Member 'XpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip::K2Node_Select2_Default' has a wrong offset!");

}

