#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortniteWorldMap

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortniteWorldMap.FortniteWorldMap_C
// 0x0000 (0x0380 - 0x0380)
class AFortniteWorldMap_C final : public AFortLevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortniteWorldMap_C">();
	}
	static class AFortniteWorldMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortniteWorldMap_C>();
	}
};
static_assert(alignof(AFortniteWorldMap_C) == 0x000008, "Wrong alignment on AFortniteWorldMap_C");
static_assert(sizeof(AFortniteWorldMap_C) == 0x000380, "Wrong size on AFortniteWorldMap_C");

}

