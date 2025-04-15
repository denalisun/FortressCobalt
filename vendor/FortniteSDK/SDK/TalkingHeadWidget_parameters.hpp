#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TalkingHeadWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
// 0x0030 (0x0030 - 0x0000)
struct TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33ED[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UTexture2D* Image, class FText Title, class FText Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget) == 0x000008, "Wrong alignment on TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget");
static_assert(sizeof(TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget) == 0x000030, "Wrong size on TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget");
static_assert(offsetof(TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget, EntryPoint) == 0x000000, "Member 'TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000028, "Member 'TalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
// 0x0008 (0x0008 - 0x0000)
struct TalkingHeadWidget_C_SetTalkingHeadImage final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TalkingHeadWidget_C_SetTalkingHeadImage) == 0x000008, "Wrong alignment on TalkingHeadWidget_C_SetTalkingHeadImage");
static_assert(sizeof(TalkingHeadWidget_C_SetTalkingHeadImage) == 0x000008, "Wrong size on TalkingHeadWidget_C_SetTalkingHeadImage");
static_assert(offsetof(TalkingHeadWidget_C_SetTalkingHeadImage, Icon) == 0x000000, "Member 'TalkingHeadWidget_C_SetTalkingHeadImage::Icon' has a wrong offset!");

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
// 0x0018 (0x0018 - 0x0000)
struct TalkingHeadWidget_C_SetTalkingHeadName final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TalkingHeadWidget_C_SetTalkingHeadName) == 0x000008, "Wrong alignment on TalkingHeadWidget_C_SetTalkingHeadName");
static_assert(sizeof(TalkingHeadWidget_C_SetTalkingHeadName) == 0x000018, "Wrong size on TalkingHeadWidget_C_SetTalkingHeadName");
static_assert(offsetof(TalkingHeadWidget_C_SetTalkingHeadName, Title) == 0x000000, "Member 'TalkingHeadWidget_C_SetTalkingHeadName::Title' has a wrong offset!");

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
// 0x0018 (0x0018 - 0x0000)
struct TalkingHeadWidget_C_SetTalkingHeadSubtitle final
{
public:
	class FText                                   Subtitle;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TalkingHeadWidget_C_SetTalkingHeadSubtitle) == 0x000008, "Wrong alignment on TalkingHeadWidget_C_SetTalkingHeadSubtitle");
static_assert(sizeof(TalkingHeadWidget_C_SetTalkingHeadSubtitle) == 0x000018, "Wrong size on TalkingHeadWidget_C_SetTalkingHeadSubtitle");
static_assert(offsetof(TalkingHeadWidget_C_SetTalkingHeadSubtitle, Subtitle) == 0x000000, "Member 'TalkingHeadWidget_C_SetTalkingHeadSubtitle::Subtitle' has a wrong offset!");

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
// 0x0040 (0x0040 - 0x0000)
struct TalkingHeadWidget_C_HandleTalkingHeadBegin final
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Subtitle;                                          // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EFortAnnouncementDisplayPreference            DisplayPreference;                                 // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortAnnouncementDisplayPreference            Temp_byte_Variable4;                               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TalkingHeadWidget_C_HandleTalkingHeadBegin) == 0x000008, "Wrong alignment on TalkingHeadWidget_C_HandleTalkingHeadBegin");
static_assert(sizeof(TalkingHeadWidget_C_HandleTalkingHeadBegin) == 0x000040, "Wrong size on TalkingHeadWidget_C_HandleTalkingHeadBegin");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, Image) == 0x000000, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::Image' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, Title) == 0x000008, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::Title' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, Subtitle) == 0x000020, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::Subtitle' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, DisplayPreference) == 0x000038, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::DisplayPreference' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, Temp_byte_Variable) == 0x000039, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, Temp_byte_Variable2) == 0x00003A, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, Temp_byte_Variable3) == 0x00003B, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, Temp_byte_Variable4) == 0x00003C, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(TalkingHeadWidget_C_HandleTalkingHeadBegin, K2Node_Select_Default) == 0x00003D, "Member 'TalkingHeadWidget_C_HandleTalkingHeadBegin::K2Node_Select_Default' has a wrong offset!");

}

