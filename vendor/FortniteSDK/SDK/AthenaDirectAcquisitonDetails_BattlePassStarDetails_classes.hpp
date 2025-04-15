#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitonDetails_BattlePassStarDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C
// 0x0020 (0x0228 - 0x0208)
class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_BattlePassStarsSupplemental;                    // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BattleStarSupplemental;                      // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       T_BattleStarInfoSupplemental;                      // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails(int32 EntryPoint);
	void SetNumOfBattlePassStars(int32 NumOfBattlePassStars);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitonDetails_BattlePassStarDetails_C">();
	}
	static class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C");
static_assert(sizeof(UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C) == 0x000228, "Wrong size on UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C");
static_assert(offsetof(UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C, UberGraphFrame) == 0x000208, "Member 'UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C, HB_BattlePassStarsSupplemental) == 0x000210, "Member 'UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::HB_BattlePassStarsSupplemental' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C, Image_BattleStarSupplemental) == 0x000218, "Member 'UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::Image_BattleStarSupplemental' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C, T_BattleStarInfoSupplemental) == 0x000220, "Member 'UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::T_BattleStarInfoSupplemental' has a wrong offset!");

}

