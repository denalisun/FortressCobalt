#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightningLSystem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LightningLSystem.LightningLsystem_C
// 0x0060 (0x0420 - 0x03C0)
class ALightningLsystem_C final : public AFortLightningActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sm_LightningStrikes_C_01;                          // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Base;                                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sm_LightningStrikes_B_01;                          // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sm_LightningStrikes_A_01;                          // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BoltMesh;                                          // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Start_Location;                                    // 0x03F0(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                End_Location;                                      // 0x03FC(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsDebugMode;                                       // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27CC[0x3];                                     // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BoltLifetimeMin;                                   // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         BoltLifetimeMax;                                   // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         BoltLifetime;                                      // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BoltMID;                                           // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LightningLsystem(int32 EntryPoint);
	void EndLightning();
	void OnLightingInitialized();
	void DebugStrike();
	void SetupLightning(const struct FVector& Param_Start_Location, const struct FVector& Param_End_Location);
	void OnLightingCleanup();
	void UserConstructionScript();
	void CleanupMesh();
	void GetRandomMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LightningLsystem_C">();
	}
	static class ALightningLsystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALightningLsystem_C>();
	}
};
static_assert(alignof(ALightningLsystem_C) == 0x000008, "Wrong alignment on ALightningLsystem_C");
static_assert(sizeof(ALightningLsystem_C) == 0x000420, "Wrong size on ALightningLsystem_C");
static_assert(offsetof(ALightningLsystem_C, UberGraphFrame) == 0x0003C0, "Member 'ALightningLsystem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, Sm_LightningStrikes_C_01) == 0x0003C8, "Member 'ALightningLsystem_C::Sm_LightningStrikes_C_01' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, Base) == 0x0003D0, "Member 'ALightningLsystem_C::Base' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, Sm_LightningStrikes_B_01) == 0x0003D8, "Member 'ALightningLsystem_C::Sm_LightningStrikes_B_01' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, Sm_LightningStrikes_A_01) == 0x0003E0, "Member 'ALightningLsystem_C::Sm_LightningStrikes_A_01' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, BoltMesh) == 0x0003E8, "Member 'ALightningLsystem_C::BoltMesh' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, Start_Location) == 0x0003F0, "Member 'ALightningLsystem_C::Start_Location' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, End_Location) == 0x0003FC, "Member 'ALightningLsystem_C::End_Location' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, IsDebugMode) == 0x000408, "Member 'ALightningLsystem_C::IsDebugMode' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, BoltLifetimeMin) == 0x00040C, "Member 'ALightningLsystem_C::BoltLifetimeMin' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, BoltLifetimeMax) == 0x000410, "Member 'ALightningLsystem_C::BoltLifetimeMax' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, BoltLifetime) == 0x000414, "Member 'ALightningLsystem_C::BoltLifetime' has a wrong offset!");
static_assert(offsetof(ALightningLsystem_C, BoltMID) == 0x000418, "Member 'ALightningLsystem_C::BoltMID' has a wrong offset!");

}

