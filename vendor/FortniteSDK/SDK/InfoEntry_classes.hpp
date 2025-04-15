#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InfoEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InfoEntry.InfoEntry_C
// 0x0028 (0x0238 - 0x0210)
class UInfoEntry_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      IconTextButton;                                    // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                    Item_Definition;                                   // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Entry_Selected;                                    // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Entry_Selected__DelegateSignature(class UFortItemDefinition* Entry_Item_Definition);
	void ExecuteUbergraph_InfoEntry(int32 EntryPoint);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Construct();
	void Reset();
	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int32 InIndexInList);
	void SetExpanded(bool bExpanded);
	void RegisterOnClicked(const TDelegate<void(class UUserWidget* Widget)>& Callback);
	void Private_OnExpanderArrowShiftClicked();
	void OnReleaseToPool();
	void OnAcquireFromPool();

	class UObject* GetData() const;
	bool IsItemExpanded() const;
	int32 DoesItemHaveChildren() const;
	int32 GetIndentLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InfoEntry_C">();
	}
	static class UInfoEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInfoEntry_C>();
	}
};
static_assert(alignof(UInfoEntry_C) == 0x000008, "Wrong alignment on UInfoEntry_C");
static_assert(sizeof(UInfoEntry_C) == 0x000238, "Wrong size on UInfoEntry_C");
static_assert(offsetof(UInfoEntry_C, UberGraphFrame) == 0x000210, "Member 'UInfoEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInfoEntry_C, IconTextButton) == 0x000218, "Member 'UInfoEntry_C::IconTextButton' has a wrong offset!");
static_assert(offsetof(UInfoEntry_C, Item_Definition) == 0x000220, "Member 'UInfoEntry_C::Item_Definition' has a wrong offset!");
static_assert(offsetof(UInfoEntry_C, Entry_Selected) == 0x000228, "Member 'UInfoEntry_C::Entry_Selected' has a wrong offset!");

}

