#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardThrobber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeaderboardThrobber.LeaderboardThrobber_C
// 0x0040 (0x0258 - 0x0218)
class ULeaderboardThrobber_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_22;                                          // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextMessage;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   UpdatingText;                                      // 0x0240(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_LeaderboardThrobber(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeaderboardThrobber_C">();
	}
	static class ULeaderboardThrobber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeaderboardThrobber_C>();
	}
};
static_assert(alignof(ULeaderboardThrobber_C) == 0x000008, "Wrong alignment on ULeaderboardThrobber_C");
static_assert(sizeof(ULeaderboardThrobber_C) == 0x000258, "Wrong size on ULeaderboardThrobber_C");
static_assert(offsetof(ULeaderboardThrobber_C, UberGraphFrame) == 0x000218, "Member 'ULeaderboardThrobber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeaderboardThrobber_C, Image_0) == 0x000220, "Member 'ULeaderboardThrobber_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULeaderboardThrobber_C, Image_22) == 0x000228, "Member 'ULeaderboardThrobber_C::Image_22' has a wrong offset!");
static_assert(offsetof(ULeaderboardThrobber_C, ProgressSpinner) == 0x000230, "Member 'ULeaderboardThrobber_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(ULeaderboardThrobber_C, TextMessage) == 0x000238, "Member 'ULeaderboardThrobber_C::TextMessage' has a wrong offset!");
static_assert(offsetof(ULeaderboardThrobber_C, UpdatingText) == 0x000240, "Member 'ULeaderboardThrobber_C::UpdatingText' has a wrong offset!");

}

