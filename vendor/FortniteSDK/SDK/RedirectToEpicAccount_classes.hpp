#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RedirectToEpicAccount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RedirectToEpicAccount.RedirectToEpicAccount_C
// 0x0028 (0x0408 - 0x03E0)
class URedirectToEpicAccount_C final : public UFortRedirectToEpicAccountWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      Button_Back;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_IgnoreEpic;                                 // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_NewAccount;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_IsEnabled;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RedirectToEpicAccount(int32 EntryPoint);
	void OnSetSwitcher(bool bEpicAccountForwardingEnabled);
	void BndEvt__Button_NewAccount_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RedirectToEpicAccount_C">();
	}
	static class URedirectToEpicAccount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URedirectToEpicAccount_C>();
	}
};
static_assert(alignof(URedirectToEpicAccount_C) == 0x000008, "Wrong alignment on URedirectToEpicAccount_C");
static_assert(sizeof(URedirectToEpicAccount_C) == 0x000408, "Wrong size on URedirectToEpicAccount_C");
static_assert(offsetof(URedirectToEpicAccount_C, UberGraphFrame) == 0x0003E0, "Member 'URedirectToEpicAccount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URedirectToEpicAccount_C, Button_Back) == 0x0003E8, "Member 'URedirectToEpicAccount_C::Button_Back' has a wrong offset!");
static_assert(offsetof(URedirectToEpicAccount_C, Button_IgnoreEpic) == 0x0003F0, "Member 'URedirectToEpicAccount_C::Button_IgnoreEpic' has a wrong offset!");
static_assert(offsetof(URedirectToEpicAccount_C, Button_NewAccount) == 0x0003F8, "Member 'URedirectToEpicAccount_C::Button_NewAccount' has a wrong offset!");
static_assert(offsetof(URedirectToEpicAccount_C, Switcher_IsEnabled) == 0x000400, "Member 'URedirectToEpicAccount_C::Switcher_IsEnabled' has a wrong offset!");

}

