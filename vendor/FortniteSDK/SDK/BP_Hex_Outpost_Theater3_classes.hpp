#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_Outpost_Theater3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Hex_PARENT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C
// 0x0048 (0x0758 - 0x0710)
class ABP_Hex_Outpost_Theater3_C final : public ABP_Hex_PARENT_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Hex_Outpost_Theater3_C;          // 0x0710(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   FlagLight;                                         // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Tip;                                               // 0x0738(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MeshCommandCenterFlag;                             // 0x0740(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Outpost_Core;                                   // 0x0748(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BannerMID;                                         // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Hex_Outpost_Theater3(int32 EntryPoint);
	void ActivateOutpost();
	void HandleOnPlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hex_Outpost_Theater3_C">();
	}
	static class ABP_Hex_Outpost_Theater3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Hex_Outpost_Theater3_C>();
	}
};
static_assert(alignof(ABP_Hex_Outpost_Theater3_C) == 0x000008, "Wrong alignment on ABP_Hex_Outpost_Theater3_C");
static_assert(sizeof(ABP_Hex_Outpost_Theater3_C) == 0x000758, "Wrong size on ABP_Hex_Outpost_Theater3_C");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, UberGraphFrame_BP_Hex_Outpost_Theater3_C) == 0x000710, "Member 'ABP_Hex_Outpost_Theater3_C::UberGraphFrame_BP_Hex_Outpost_Theater3_C' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, StaticMesh2) == 0x000718, "Member 'ABP_Hex_Outpost_Theater3_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, StaticMesh1) == 0x000720, "Member 'ABP_Hex_Outpost_Theater3_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, StaticMesh) == 0x000728, "Member 'ABP_Hex_Outpost_Theater3_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, FlagLight) == 0x000730, "Member 'ABP_Hex_Outpost_Theater3_C::FlagLight' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, Tip) == 0x000738, "Member 'ABP_Hex_Outpost_Theater3_C::Tip' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, MeshCommandCenterFlag) == 0x000740, "Member 'ABP_Hex_Outpost_Theater3_C::MeshCommandCenterFlag' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, SM_Outpost_Core) == 0x000748, "Member 'ABP_Hex_Outpost_Theater3_C::SM_Outpost_Core' has a wrong offset!");
static_assert(offsetof(ABP_Hex_Outpost_Theater3_C, BannerMID) == 0x000750, "Member 'ABP_Hex_Outpost_Theater3_C::BannerMID' has a wrong offset!");

}

