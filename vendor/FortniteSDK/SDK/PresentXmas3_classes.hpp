#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PresentXmas3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PresentXmas3.PresentXmas3_C
// 0x0008 (0x0F68 - 0x0F60)
class APresentXmas3_C final : public ABuildingContainer
{
public:
	uint8                                         Pad_4276[0x4];                                     // 0x0F5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F60(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_PresentXmas3(int32 EntryPoint);
	void OnBeginSearch();
	void OnLootRepeat();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PresentXmas3_C">();
	}
	static class APresentXmas3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APresentXmas3_C>();
	}
};
static_assert(alignof(APresentXmas3_C) == 0x000008, "Wrong alignment on APresentXmas3_C");
static_assert(sizeof(APresentXmas3_C) == 0x000F68, "Wrong size on APresentXmas3_C");
static_assert(offsetof(APresentXmas3_C, UberGraphFrame) == 0x000F60, "Member 'APresentXmas3_C::UberGraphFrame' has a wrong offset!");

}

