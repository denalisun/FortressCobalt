#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_InteractSearch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
// 0x0008 (0x0AB8 - 0x0AB0)
class UGA_DefaultPlayer_InteractSearch_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int32 EntryPoint);
	void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_InteractSearch_C">();
	}
	static class UGA_DefaultPlayer_InteractSearch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_InteractSearch_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_InteractSearch_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_InteractSearch_C");
static_assert(sizeof(UGA_DefaultPlayer_InteractSearch_C) == 0x000AB8, "Wrong size on UGA_DefaultPlayer_InteractSearch_C");
static_assert(offsetof(UGA_DefaultPlayer_InteractSearch_C, UberGraphFrame) == 0x000AB0, "Member 'UGA_DefaultPlayer_InteractSearch_C::UberGraphFrame' has a wrong offset!");

}

