#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaIndicatorLayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaIndicatorLayer.AthenaIndicatorLayer_C
// 0x0050 (0x0260 - 0x0210)
class UAthenaIndicatorLayer_C final : public UAthenaIndicatorLayerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UFortActorCanvas*                       GeneralIndicators;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortActorCanvas*                       SquadIndicators;                                   // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaTeamMemberIndicator_C*>   SquadMemberIndicators;                             // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInterestIndicatorWidget_C*>     AvailableInterestIndicators;                       // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInterestIndicatorWidget_C*>     ActiveInterestIndicators;                          // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          ShowInteractionWidget;                             // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaIndicatorLayer(int32 EntryPoint);
	void SquadIndicatorsChanged(const TArray<class AFortPlayerStateAthena*>& PlayerStates);
	void Destruct();
	void Construct();
	void AddSquadMemberIndicator(class AFortPlayerStateAthena* Player_State, int32 Team_Member_Index);
	void CreateInterestIndicatorWidget();
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const class FText& DisplayText, class UTexture2D* DisplayImage);
	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaIndicatorLayer_C">();
	}
	static class UAthenaIndicatorLayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaIndicatorLayer_C>();
	}
};
static_assert(alignof(UAthenaIndicatorLayer_C) == 0x000008, "Wrong alignment on UAthenaIndicatorLayer_C");
static_assert(sizeof(UAthenaIndicatorLayer_C) == 0x000260, "Wrong size on UAthenaIndicatorLayer_C");
static_assert(offsetof(UAthenaIndicatorLayer_C, UberGraphFrame) == 0x000210, "Member 'UAthenaIndicatorLayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, GeneralIndicators) == 0x000218, "Member 'UAthenaIndicatorLayer_C::GeneralIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, SquadIndicators) == 0x000220, "Member 'UAthenaIndicatorLayer_C::SquadIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, SquadMemberIndicators) == 0x000228, "Member 'UAthenaIndicatorLayer_C::SquadMemberIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, AvailableInterestIndicators) == 0x000238, "Member 'UAthenaIndicatorLayer_C::AvailableInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, ActiveInterestIndicators) == 0x000248, "Member 'UAthenaIndicatorLayer_C::ActiveInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, ShowInteractionWidget) == 0x000258, "Member 'UAthenaIndicatorLayer_C::ShowInteractionWidget' has a wrong offset!");

}

