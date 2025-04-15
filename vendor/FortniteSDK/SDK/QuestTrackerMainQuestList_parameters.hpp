#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTrackerMainQuestList

#include "Basic.hpp"


namespace SDK::Params
{

// Function QuestTrackerMainQuestList.QuestTrackerMainQuestList_C.GetQuestsToDisplay
// 0x0048 (0x0048 - 0x0000)
struct QuestTrackerMainQuestList_C_GetQuestsToDisplay final
{
public:
	TArray<class UFortQuestItem*>                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ABF[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestItem*                         CallFunc_GetMainQuest_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestItem*>                 K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestPinned_ReturnValue;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestTrackerMainQuestList_C_GetQuestsToDisplay) == 0x000008, "Wrong alignment on QuestTrackerMainQuestList_C_GetQuestsToDisplay");
static_assert(sizeof(QuestTrackerMainQuestList_C_GetQuestsToDisplay) == 0x000048, "Wrong size on QuestTrackerMainQuestList_C_GetQuestsToDisplay");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, ReturnValue) == 0x000000, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, CallFunc_GetQuestManager_ReturnValue) == 0x000018, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, CallFunc_IsValid_ReturnValue2) == 0x000021, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, CallFunc_GetMainQuest_ReturnValue) == 0x000028, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::CallFunc_GetMainQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, K2Node_MakeArray_Array) == 0x000030, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, CallFunc_IsValid_ReturnValue3) == 0x000040, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(QuestTrackerMainQuestList_C_GetQuestsToDisplay, CallFunc_IsQuestPinned_ReturnValue) == 0x000041, "Member 'QuestTrackerMainQuestList_C_GetQuestsToDisplay::CallFunc_IsQuestPinned_ReturnValue' has a wrong offset!");

}

