#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MoviePlayer

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MoviePlayer.MoviePlayerSettings
// 0x0018 (0x0040 - 0x0028)
class UMoviePlayerSettings final : public UObject
{
public:
	bool                                          bWaitForMoviesToComplete;                          // 0x0028(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMoviesAreSkippable;                               // 0x0029(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D4D[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         StartupMovies;                                     // 0x0030(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePlayerSettings">();
	}
	static class UMoviePlayerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePlayerSettings>();
	}
};
static_assert(alignof(UMoviePlayerSettings) == 0x000008, "Wrong alignment on UMoviePlayerSettings");
static_assert(sizeof(UMoviePlayerSettings) == 0x000040, "Wrong size on UMoviePlayerSettings");
static_assert(offsetof(UMoviePlayerSettings, bWaitForMoviesToComplete) == 0x000028, "Member 'UMoviePlayerSettings::bWaitForMoviesToComplete' has a wrong offset!");
static_assert(offsetof(UMoviePlayerSettings, bMoviesAreSkippable) == 0x000029, "Member 'UMoviePlayerSettings::bMoviesAreSkippable' has a wrong offset!");
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 0x000030, "Member 'UMoviePlayerSettings::StartupMovies' has a wrong offset!");

}

