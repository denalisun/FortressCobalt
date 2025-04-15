#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Commando_AmmoRecovery1

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TT_Commando_AmmoRecovery1.TT_Commando_AmmoRecovery1_C
// 0x0000 (0x0118 - 0x0118)
class UTT_Commando_AmmoRecovery1_C final : public UFortGameplayAbilityTooltip
{
public:
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context) const;
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TT_Commando_AmmoRecovery1_C">();
	}
	static class UTT_Commando_AmmoRecovery1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTT_Commando_AmmoRecovery1_C>();
	}
};
static_assert(alignof(UTT_Commando_AmmoRecovery1_C) == 0x000008, "Wrong alignment on UTT_Commando_AmmoRecovery1_C");
static_assert(sizeof(UTT_Commando_AmmoRecovery1_C) == 0x000118, "Wrong size on UTT_Commando_AmmoRecovery1_C");

}

