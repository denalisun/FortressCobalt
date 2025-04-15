#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBannerSelectModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C
// 0x0060 (0x0448 - 0x03E8)
class UAthenaBannerSelectModal_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_2F9B[0x8];                                     // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UBP_LocalPlayerBannerEditor_C*          BP_LocalPlayerBannerEditor;                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CloseAction;                                       // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   LastChosenIcon;                                    // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LastChosenColor;                                   // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    PreviousAction;                                    // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    NextAction;                                        // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaBannerSelectModal(int32 EntryPoint);
	void OnActivated();
	void OnDeactivated();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature();
	void Construct();
	void HandleCloseAction(bool* Passthrough);
	void Setup_Input_Action_Handlers();
	void HandlePreviousAction(bool* Passthrough);
	void HandleNextAction(bool* Passthrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBannerSelectModal_C">();
	}
	static class UAthenaBannerSelectModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBannerSelectModal_C>();
	}
};
static_assert(alignof(UAthenaBannerSelectModal_C) == 0x000008, "Wrong alignment on UAthenaBannerSelectModal_C");
static_assert(sizeof(UAthenaBannerSelectModal_C) == 0x000448, "Wrong size on UAthenaBannerSelectModal_C");
static_assert(offsetof(UAthenaBannerSelectModal_C, UberGraphFrame) == 0x0003F0, "Member 'UAthenaBannerSelectModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, BP_LocalPlayerBannerEditor) == 0x0003F8, "Member 'UAthenaBannerSelectModal_C::BP_LocalPlayerBannerEditor' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, Lightbox) == 0x000400, "Member 'UAthenaBannerSelectModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, CloseAction) == 0x000408, "Member 'UAthenaBannerSelectModal_C::CloseAction' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, LastChosenIcon) == 0x000418, "Member 'UAthenaBannerSelectModal_C::LastChosenIcon' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, LastChosenColor) == 0x000420, "Member 'UAthenaBannerSelectModal_C::LastChosenColor' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, PreviousAction) == 0x000428, "Member 'UAthenaBannerSelectModal_C::PreviousAction' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, NextAction) == 0x000438, "Member 'UAthenaBannerSelectModal_C::NextAction' has a wrong offset!");

}

