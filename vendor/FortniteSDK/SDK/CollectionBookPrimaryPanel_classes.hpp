#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookPrimaryPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C
// 0x0010 (0x0490 - 0x0480)
class UCollectionBookPrimaryPanel_C final : public UFortCollectionBookPrimaryPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(Transient, DuplicateTransient)
	bool                                          CanShowCollectionBookHelp;                         // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CollectionBookPrimaryPanel(int32 EntryPoint);
	void HandleDisplayInfoBox();
	void OnSummonInfoPanelExecuted(bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookPrimaryPanel_C">();
	}
	static class UCollectionBookPrimaryPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookPrimaryPanel_C>();
	}
};
static_assert(alignof(UCollectionBookPrimaryPanel_C) == 0x000008, "Wrong alignment on UCollectionBookPrimaryPanel_C");
static_assert(sizeof(UCollectionBookPrimaryPanel_C) == 0x000490, "Wrong size on UCollectionBookPrimaryPanel_C");
static_assert(offsetof(UCollectionBookPrimaryPanel_C, UberGraphFrame) == 0x000480, "Member 'UCollectionBookPrimaryPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionBookPrimaryPanel_C, CanShowCollectionBookHelp) == 0x000488, "Member 'UCollectionBookPrimaryPanel_C::CanShowCollectionBookHelp' has a wrong offset!");

}

