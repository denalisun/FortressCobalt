#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeaderTagListText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C
// 0x0010 (0x0268 - 0x0258)
class UItemDetailsHeaderTagListText_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       TagListTextBlock;                                  // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemDetailsHeaderTagListText(int32 EntryPoint);
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void FormatItemDisplayTags(TArray<class FText>& TagTexts, class FText* FormatedText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsHeaderTagListText_C">();
	}
	static class UItemDetailsHeaderTagListText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsHeaderTagListText_C>();
	}
};
static_assert(alignof(UItemDetailsHeaderTagListText_C) == 0x000008, "Wrong alignment on UItemDetailsHeaderTagListText_C");
static_assert(sizeof(UItemDetailsHeaderTagListText_C) == 0x000268, "Wrong size on UItemDetailsHeaderTagListText_C");
static_assert(offsetof(UItemDetailsHeaderTagListText_C, UberGraphFrame) == 0x000258, "Member 'UItemDetailsHeaderTagListText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeaderTagListText_C, TagListTextBlock) == 0x000260, "Member 'UItemDetailsHeaderTagListText_C::TagListTextBlock' has a wrong offset!");

}

