#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C
// 0x0058 (0x0290 - 0x0238)
class UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C final : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          Border;                                            // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*                ItemCountHave;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCountTextBlock*                ItemCountNeed;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          ItemIcon;                                          // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDisplayNameText*               ItemName;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCountPrefix;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescription;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextSlash;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bOverrideTextStyle;                                // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3B82[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 TextStyle;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK(int32 EntryPoint);
	void PreviewEnded();
	void PreviewStarted();
	void HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset);
	void PreConstruct(bool IsDesignTime);
	void DoDesignTimeRandomization();
	void Refresh();
	void RefreshVisibility();
	void RefreshPreviewData();
	void ShowHaveNeed(bool* HaveNeed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C">();
	}
	static class UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C>();
	}
};
static_assert(alignof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C) == 0x000008, "Wrong alignment on UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C");
static_assert(sizeof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C) == 0x000290, "Wrong size on UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, UberGraphFrame) == 0x000238, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, Border) == 0x000240, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::Border' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, ItemCountHave) == 0x000248, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::ItemCountHave' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, ItemCountNeed) == 0x000250, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::ItemCountNeed' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, ItemIcon) == 0x000258, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, ItemName) == 0x000260, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::ItemName' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, TextCountPrefix) == 0x000268, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::TextCountPrefix' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, TextDescription) == 0x000270, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, TextSlash) == 0x000278, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::TextSlash' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, bOverrideTextStyle) == 0x000280, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::bOverrideTextStyle' has a wrong offset!");
static_assert(offsetof(UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C, TextStyle) == 0x000288, "Member 'UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C::TextStyle' has a wrong offset!");

}

