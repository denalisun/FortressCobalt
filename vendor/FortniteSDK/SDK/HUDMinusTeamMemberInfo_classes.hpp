#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDMinusTeamMemberInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD-TeamMemberInfo.HUD-TeamMemberInfo_C
// 0x0210 (0x0420 - 0x0210)
class UHUDMinusTeamMemberInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 _Image__Class_Icon;                                // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Healthbar;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_1;                                 // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeaderImage;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMicIndicator_C*                        MicIndicator;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPowerWidget_C*                         PowerWidget_Connected;                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherConnectingStranger;                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherContextualInfo;                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamMemberBluGloIndicator_C*           TeamMemberBluGloIndicator;                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBlock_6;                                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x0270(0x01A8)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowingHealth;                                     // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_HUDMinusTeamMemberInfo(int32 EntryPoint);
	void Construct();
	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo);
	void SetHealth(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD-TeamMemberInfo_C">();
	}
	static class UHUDMinusTeamMemberInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDMinusTeamMemberInfo_C>();
	}
};
static_assert(alignof(UHUDMinusTeamMemberInfo_C) == 0x000008, "Wrong alignment on UHUDMinusTeamMemberInfo_C");
static_assert(sizeof(UHUDMinusTeamMemberInfo_C) == 0x000420, "Wrong size on UHUDMinusTeamMemberInfo_C");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, UberGraphFrame) == 0x000210, "Member 'UHUDMinusTeamMemberInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, _Image__Class_Icon) == 0x000218, "Member 'UHUDMinusTeamMemberInfo_C::_Image__Class_Icon' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, _Image__Healthbar) == 0x000220, "Member 'UHUDMinusTeamMemberInfo_C::_Image__Healthbar' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, CommonTextBlock_1) == 0x000228, "Member 'UHUDMinusTeamMemberInfo_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, LeaderImage) == 0x000230, "Member 'UHUDMinusTeamMemberInfo_C::LeaderImage' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, MicIndicator) == 0x000238, "Member 'UHUDMinusTeamMemberInfo_C::MicIndicator' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, PowerWidget_Connected) == 0x000240, "Member 'UHUDMinusTeamMemberInfo_C::PowerWidget_Connected' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, SwitcherConnectingStranger) == 0x000248, "Member 'UHUDMinusTeamMemberInfo_C::SwitcherConnectingStranger' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, SwitcherContextualInfo) == 0x000250, "Member 'UHUDMinusTeamMemberInfo_C::SwitcherContextualInfo' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, TeamMemberBluGloIndicator) == 0x000258, "Member 'UHUDMinusTeamMemberInfo_C::TeamMemberBluGloIndicator' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, TextBlock_6) == 0x000260, "Member 'UHUDMinusTeamMemberInfo_C::TextBlock_6' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, TextPlayerName) == 0x000268, "Member 'UHUDMinusTeamMemberInfo_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, MemberInfo) == 0x000270, "Member 'UHUDMinusTeamMemberInfo_C::MemberInfo' has a wrong offset!");
static_assert(offsetof(UHUDMinusTeamMemberInfo_C, ShowingHealth) == 0x000418, "Member 'UHUDMinusTeamMemberInfo_C::ShowingHealth' has a wrong offset!");

}

