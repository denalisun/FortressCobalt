#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewAccountWarning

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewAccountWarning.NewAccountWarning_C
// 0x0008 (0x03E8 - 0x03E0)
class UNewAccountWarning_C final : public UFortNewAccountWarning
{
public:
	class UIconTextButton_C*                      Button_Back;                                       // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewAccountWarning_C">();
	}
	static class UNewAccountWarning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewAccountWarning_C>();
	}
};
static_assert(alignof(UNewAccountWarning_C) == 0x000008, "Wrong alignment on UNewAccountWarning_C");
static_assert(sizeof(UNewAccountWarning_C) == 0x0003E8, "Wrong size on UNewAccountWarning_C");
static_assert(offsetof(UNewAccountWarning_C, Button_Back) == 0x0003E0, "Member 'UNewAccountWarning_C::Button_Back' has a wrong offset!");

}

