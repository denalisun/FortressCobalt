#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpBar.XpBar_C
// 0x0020 (0x0228 - 0x0208)
class UXpBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UOverlay*                               Overlay_3;                                         // 0x0210(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBarNew;                                    // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Xp_Bar_Material;                                   // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_XpBar(int32 EntryPoint);
	void Xp_Boost_Changed(int32 BoostAmount);
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void Construct();
	void Update_Xp_Bar(const struct FFortPublicAccountInfo& Account_Info);
	class UWidget* GetExperienceToolTipWidget();
	int32 ScaledBoostBalance(int32 AmountToLevel);
	int32 ScaledRestBalance(int32 AmountToLevel);
	float ScaledCommanderBalance(int32 LeveXP, int32 InInt2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpBar_C">();
	}
	static class UXpBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpBar_C>();
	}
};
static_assert(alignof(UXpBar_C) == 0x000008, "Wrong alignment on UXpBar_C");
static_assert(sizeof(UXpBar_C) == 0x000228, "Wrong size on UXpBar_C");
static_assert(offsetof(UXpBar_C, UberGraphFrame) == 0x000208, "Member 'UXpBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpBar_C, Overlay_3) == 0x000210, "Member 'UXpBar_C::Overlay_3' has a wrong offset!");
static_assert(offsetof(UXpBar_C, ProgressBarNew) == 0x000218, "Member 'UXpBar_C::ProgressBarNew' has a wrong offset!");
static_assert(offsetof(UXpBar_C, Xp_Bar_Material) == 0x000220, "Member 'UXpBar_C::Xp_Bar_Material' has a wrong offset!");

}

