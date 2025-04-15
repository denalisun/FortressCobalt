#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Emote_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// 0x0008 (0x0AB8 - 0x0AB0)
class UGAB_Emote_Generic_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void GetBodyTypeAndGender(EFortCustomBodyType* BodyType, EFortCustomGender* Gender);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Emote_Generic_C">();
	}
	static class UGAB_Emote_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Emote_Generic_C>();
	}
};
static_assert(alignof(UGAB_Emote_Generic_C) == 0x000008, "Wrong alignment on UGAB_Emote_Generic_C");
static_assert(sizeof(UGAB_Emote_Generic_C) == 0x000AB8, "Wrong size on UGAB_Emote_Generic_C");
static_assert(offsetof(UGAB_Emote_Generic_C, UberGraphFrame) == 0x000AB0, "Member 'UGAB_Emote_Generic_C::UberGraphFrame' has a wrong offset!");

}

