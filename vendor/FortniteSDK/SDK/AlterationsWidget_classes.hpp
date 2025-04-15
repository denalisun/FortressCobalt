#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationsWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AlterationsWidget.AlterationsWidget_C
// 0x0098 (0x02D8 - 0x0240)
class UAlterationsWidget_C final : public UFortAlterationsWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UAlterationWidget_C*                    AlterationWidget;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                    AlterationWidget_2;                                // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                    AlterationWidget_3;                                // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                    AlterationWidget_6;                                // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border_PerksMessage;                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderLocked;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderUnlocked;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                         LockedUnlockedDivider;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                         PerkDivider_C_106;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                         PerkDivider_C_107;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxAlterationsLocked;                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxAlterationsUnlocked;                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIncludeName;                                      // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIncludeDescription;                               // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIncludeShortDescription;                          // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          FirstAlterationComplete;                           // 0x02AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirstLockedComplete;                               // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortBrushSize                                IconSize;                                          // 0x02AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3E51[0x2];                                     // 0x02AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                RowPadding;                                        // 0x02B0(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          bUseLargeFormatNameOnly;                           // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3E52[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                Description_Padding;                               // 0x02C4(0x0010)(Edit, BlueprintVisible, NoDestructor)

public:
	void ExecuteUbergraph_AlterationsWidget(int32 EntryPoint);
	void OnStateChanged();
	void OnItemToCompareWithChanged();
	void OnItemChanged();
	void OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo);
	void Construct();
	void UpdatePerksMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AlterationsWidget_C">();
	}
	static class UAlterationsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAlterationsWidget_C>();
	}
};
static_assert(alignof(UAlterationsWidget_C) == 0x000008, "Wrong alignment on UAlterationsWidget_C");
static_assert(sizeof(UAlterationsWidget_C) == 0x0002D8, "Wrong size on UAlterationsWidget_C");
static_assert(offsetof(UAlterationsWidget_C, UberGraphFrame) == 0x000240, "Member 'UAlterationsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, AlterationWidget) == 0x000248, "Member 'UAlterationsWidget_C::AlterationWidget' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, AlterationWidget_2) == 0x000250, "Member 'UAlterationsWidget_C::AlterationWidget_2' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, AlterationWidget_3) == 0x000258, "Member 'UAlterationsWidget_C::AlterationWidget_3' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, AlterationWidget_6) == 0x000260, "Member 'UAlterationsWidget_C::AlterationWidget_6' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, Border_PerksMessage) == 0x000268, "Member 'UAlterationsWidget_C::Border_PerksMessage' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, BorderLocked) == 0x000270, "Member 'UAlterationsWidget_C::BorderLocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, BorderUnlocked) == 0x000278, "Member 'UAlterationsWidget_C::BorderUnlocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, LockedUnlockedDivider) == 0x000280, "Member 'UAlterationsWidget_C::LockedUnlockedDivider' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, PerkDivider_C_106) == 0x000288, "Member 'UAlterationsWidget_C::PerkDivider_C_106' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, PerkDivider_C_107) == 0x000290, "Member 'UAlterationsWidget_C::PerkDivider_C_107' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, VerticalBoxAlterationsLocked) == 0x000298, "Member 'UAlterationsWidget_C::VerticalBoxAlterationsLocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, VerticalBoxAlterationsUnlocked) == 0x0002A0, "Member 'UAlterationsWidget_C::VerticalBoxAlterationsUnlocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bIncludeName) == 0x0002A8, "Member 'UAlterationsWidget_C::bIncludeName' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bIncludeDescription) == 0x0002A9, "Member 'UAlterationsWidget_C::bIncludeDescription' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bIncludeShortDescription) == 0x0002AA, "Member 'UAlterationsWidget_C::bIncludeShortDescription' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, FirstAlterationComplete) == 0x0002AB, "Member 'UAlterationsWidget_C::FirstAlterationComplete' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, FirstLockedComplete) == 0x0002AC, "Member 'UAlterationsWidget_C::FirstLockedComplete' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, IconSize) == 0x0002AD, "Member 'UAlterationsWidget_C::IconSize' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, RowPadding) == 0x0002B0, "Member 'UAlterationsWidget_C::RowPadding' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bUseLargeFormatNameOnly) == 0x0002C0, "Member 'UAlterationsWidget_C::bUseLargeFormatNameOnly' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, Description_Padding) == 0x0002C4, "Member 'UAlterationsWidget_C::Description_Padding' has a wrong offset!");

}

