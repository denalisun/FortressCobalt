#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_FootStep

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_FootStep.AnimNotify_FootStep_C
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_FootStep_C : public UAnimNotify
{
public:
	int32                                         FootIndex;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_FootStep_C">();
	}
	static class UAnimNotify_FootStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_FootStep_C>();
	}
};
static_assert(alignof(UAnimNotify_FootStep_C) == 0x000008, "Wrong alignment on UAnimNotify_FootStep_C");
static_assert(sizeof(UAnimNotify_FootStep_C) == 0x000040, "Wrong size on UAnimNotify_FootStep_C");
static_assert(offsetof(UAnimNotify_FootStep_C, FootIndex) == 0x000038, "Member 'UAnimNotify_FootStep_C::FootIndex' has a wrong offset!");

}

