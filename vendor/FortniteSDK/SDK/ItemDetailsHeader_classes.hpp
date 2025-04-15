#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeader

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsHeader.ItemDetailsHeader_C
// 0x0148 (0x03C0 - 0x0278)
class UItemDetailsHeader_C final : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(Transient, DuplicateTransient)
	class UFortItemCategoryIndicator*             CategoryIndicator;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             CategoryIndicatorTertiary;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortEvolveIndicator*                   EvolveIndicator;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             ExtraIndicatorSlot;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortFavoriteIndicator*                 FavoriteIndicator;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                IconSpacer;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                IconSpacerTertiary;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderItemDisplayText_C*    ItemDetailsHeaderItemDisplayText;                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderRarityTypeText_C*     ItemDetailsHeaderRarityTypeText;                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderTagListText_C*        ItemDetailsHeaderTagListText;                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsStackCounter_C*             ItemDetailsStackCounter;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemRatingIndicator_C*                 ItemRatingIndicator;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          LevelBar;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLevelIndicator*                    LevelIndicator;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInventoryOverflowIndicator*        OverflowIndicator;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RarityBorder;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TertiaryRow;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTierIndicator*                     TierIndicator;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUpgradeIndicator*                  UpgradeIndicator;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RarityBorderMID;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                    RarityData;                                        // 0x0320(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               Level_Bar_MID;                                     // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LockItemColor;                                     // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Ammo_Header;                                  // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ItemDetailsHeader(int32 EntryPoint);
	void HandleDifferentItemToCompareSet();
	void HandleDifferentItemToDetailSet();
	void Construct();
	void UpdateItemsForWidgets();
	void SetStyles();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsHeader_C">();
	}
	static class UItemDetailsHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsHeader_C>();
	}
};
static_assert(alignof(UItemDetailsHeader_C) == 0x000008, "Wrong alignment on UItemDetailsHeader_C");
static_assert(sizeof(UItemDetailsHeader_C) == 0x0003C0, "Wrong size on UItemDetailsHeader_C");
static_assert(offsetof(UItemDetailsHeader_C, UberGraphFrame) == 0x000278, "Member 'UItemDetailsHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, CategoryIndicator) == 0x000280, "Member 'UItemDetailsHeader_C::CategoryIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, CategoryIndicatorTertiary) == 0x000288, "Member 'UItemDetailsHeader_C::CategoryIndicatorTertiary' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, EvolveIndicator) == 0x000290, "Member 'UItemDetailsHeader_C::EvolveIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ExtraIndicatorSlot) == 0x000298, "Member 'UItemDetailsHeader_C::ExtraIndicatorSlot' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, FavoriteIndicator) == 0x0002A0, "Member 'UItemDetailsHeader_C::FavoriteIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, IconSpacer) == 0x0002A8, "Member 'UItemDetailsHeader_C::IconSpacer' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, IconSpacerTertiary) == 0x0002B0, "Member 'UItemDetailsHeader_C::IconSpacerTertiary' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderItemDisplayText) == 0x0002B8, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderItemDisplayText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderRarityTypeText) == 0x0002C0, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderRarityTypeText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderTagListText) == 0x0002C8, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderTagListText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsStackCounter) == 0x0002D0, "Member 'UItemDetailsHeader_C::ItemDetailsStackCounter' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemRatingIndicator) == 0x0002D8, "Member 'UItemDetailsHeader_C::ItemRatingIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, LevelBar) == 0x0002E0, "Member 'UItemDetailsHeader_C::LevelBar' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, LevelIndicator) == 0x0002E8, "Member 'UItemDetailsHeader_C::LevelIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, OverflowIndicator) == 0x0002F0, "Member 'UItemDetailsHeader_C::OverflowIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, RarityBorder) == 0x0002F8, "Member 'UItemDetailsHeader_C::RarityBorder' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, TertiaryRow) == 0x000300, "Member 'UItemDetailsHeader_C::TertiaryRow' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, TierIndicator) == 0x000308, "Member 'UItemDetailsHeader_C::TierIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, UpgradeIndicator) == 0x000310, "Member 'UItemDetailsHeader_C::UpgradeIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, RarityBorderMID) == 0x000318, "Member 'UItemDetailsHeader_C::RarityBorderMID' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, RarityData) == 0x000320, "Member 'UItemDetailsHeader_C::RarityData' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, Level_Bar_MID) == 0x0003A0, "Member 'UItemDetailsHeader_C::Level_Bar_MID' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, LockItemColor) == 0x0003A8, "Member 'UItemDetailsHeader_C::LockItemColor' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, Show_Ammo_Header) == 0x0003B8, "Member 'UItemDetailsHeader_C::Show_Ammo_Header' has a wrong offset!");

}

