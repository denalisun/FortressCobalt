#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeWaveModifiersWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnModifiersAdded
// 0x0060 (0x0060 - 0x0000)
struct HordeWaveModifiersWidget_C_OnModifiersAdded final
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                          StartPresentationImmediately;                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_342F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3430[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHordeWaveModifiersTile_C*              CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HordeWaveModifiersWidget_C_OnModifiersAdded) == 0x000008, "Wrong alignment on HordeWaveModifiersWidget_C_OnModifiersAdded");
static_assert(sizeof(HordeWaveModifiersWidget_C_OnModifiersAdded) == 0x000060, "Wrong size on HordeWaveModifiersWidget_C_OnModifiersAdded");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, Modifiers) == 0x000000, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::Modifiers' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, StartPresentationImmediately) == 0x000010, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::StartPresentationImmediately' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, Temp_int_Array_Index_Variable) == 0x000014, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_Array_Get_Item) == 0x000018, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x000020, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_GetOwningPlayer_ReturnValue) == 0x000048, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_Create_ReturnValue) == 0x000050, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_OnModifiersAdded, CallFunc_Array_Add_ReturnValue) == 0x000058, "Member 'HordeWaveModifiersWidget_C_OnModifiersAdded::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.PresentNextModifier
// 0x0018 (0x0018 - 0x0000)
struct HordeWaveModifiersWidget_C_PresentNextModifier final
{
public:
	class UHordeWaveModifiersTile_C*              CallFunc_Array_Get_Item;                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HordeWaveModifiersWidget_C_PresentNextModifier) == 0x000008, "Wrong alignment on HordeWaveModifiersWidget_C_PresentNextModifier");
static_assert(sizeof(HordeWaveModifiersWidget_C_PresentNextModifier) == 0x000018, "Wrong size on HordeWaveModifiersWidget_C_PresentNextModifier");
static_assert(offsetof(HordeWaveModifiersWidget_C_PresentNextModifier, CallFunc_Array_Get_Item) == 0x000000, "Member 'HordeWaveModifiersWidget_C_PresentNextModifier::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_PresentNextModifier, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000008, "Member 'HordeWaveModifiersWidget_C_PresentNextModifier::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_PresentNextModifier, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'HordeWaveModifiersWidget_C_PresentNextModifier::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersWidget_C_PresentNextModifier, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000014, "Member 'HordeWaveModifiersWidget_C_PresentNextModifier::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

}

