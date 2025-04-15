#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BluGlow_MorphAnimation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BluGlow_MorphAnimation.BluGlow_MorphAnimation_C
// 0x0070 (0x03D8 - 0x0368)
class ABluGlow_MorphAnimation_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               NewParticleSystem;                                 // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BluGlowModel;                                      // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Additional_Texture_Rotation_Rate_4CFA454F41B86B7BE42429BB2A905B1E; // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Scale_4CFA454F41B86B7BE42429BB2A905B1E; // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Morph_4CFA454F41B86B7BE42429BB2A905B1E; // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Glow_4CFA454F41B86B7BE42429BB2A905B1E;  // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_4CFA454F41B86B7BE42429BB2A905B1E; // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2388[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mid;                                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IntCounter;                                        // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Initial_Sphere_Scale;                              // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Additional_Texture_Rotation_Rate;                  // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x03C4(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Number_of_Morph_Targets;                           // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfMorphTargets;                              // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BluGlow_MorphAnimation(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__ChangeTargetFrame__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BluGlow_MorphAnimation_C">();
	}
	static class ABluGlow_MorphAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABluGlow_MorphAnimation_C>();
	}
};
static_assert(alignof(ABluGlow_MorphAnimation_C) == 0x000008, "Wrong alignment on ABluGlow_MorphAnimation_C");
static_assert(sizeof(ABluGlow_MorphAnimation_C) == 0x0003D8, "Wrong size on ABluGlow_MorphAnimation_C");
static_assert(offsetof(ABluGlow_MorphAnimation_C, UberGraphFrame) == 0x000368, "Member 'ABluGlow_MorphAnimation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, PointLight) == 0x000370, "Member 'ABluGlow_MorphAnimation_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, NewParticleSystem) == 0x000378, "Member 'ABluGlow_MorphAnimation_C::NewParticleSystem' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, BluGlowModel) == 0x000380, "Member 'ABluGlow_MorphAnimation_C::BluGlowModel' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, DefaultSceneRoot) == 0x000388, "Member 'ABluGlow_MorphAnimation_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Timeline_0_Additional_Texture_Rotation_Rate_4CFA454F41B86B7BE42429BB2A905B1E) == 0x000390, "Member 'ABluGlow_MorphAnimation_C::Timeline_0_Additional_Texture_Rotation_Rate_4CFA454F41B86B7BE42429BB2A905B1E' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Timeline_0_Scale_4CFA454F41B86B7BE42429BB2A905B1E) == 0x000394, "Member 'ABluGlow_MorphAnimation_C::Timeline_0_Scale_4CFA454F41B86B7BE42429BB2A905B1E' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Timeline_0_Morph_4CFA454F41B86B7BE42429BB2A905B1E) == 0x000398, "Member 'ABluGlow_MorphAnimation_C::Timeline_0_Morph_4CFA454F41B86B7BE42429BB2A905B1E' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Timeline_0_Glow_4CFA454F41B86B7BE42429BB2A905B1E) == 0x00039C, "Member 'ABluGlow_MorphAnimation_C::Timeline_0_Glow_4CFA454F41B86B7BE42429BB2A905B1E' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Timeline_0__Direction_4CFA454F41B86B7BE42429BB2A905B1E) == 0x0003A0, "Member 'ABluGlow_MorphAnimation_C::Timeline_0__Direction_4CFA454F41B86B7BE42429BB2A905B1E' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Timeline_0) == 0x0003A8, "Member 'ABluGlow_MorphAnimation_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Mid) == 0x0003B0, "Member 'ABluGlow_MorphAnimation_C::Mid' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, IntCounter) == 0x0003B8, "Member 'ABluGlow_MorphAnimation_C::IntCounter' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Initial_Sphere_Scale) == 0x0003BC, "Member 'ABluGlow_MorphAnimation_C::Initial_Sphere_Scale' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Additional_Texture_Rotation_Rate) == 0x0003C0, "Member 'ABluGlow_MorphAnimation_C::Additional_Texture_Rotation_Rate' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Rotation) == 0x0003C4, "Member 'ABluGlow_MorphAnimation_C::Rotation' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, Number_of_Morph_Targets) == 0x0003D0, "Member 'ABluGlow_MorphAnimation_C::Number_of_Morph_Targets' has a wrong offset!");
static_assert(offsetof(ABluGlow_MorphAnimation_C, NumberOfMorphTargets) == 0x0003D4, "Member 'ABluGlow_MorphAnimation_C::NumberOfMorphTargets' has a wrong offset!");

}

