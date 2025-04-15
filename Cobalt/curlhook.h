#pragma once

#include <Windows.h>
#include <regex>

#include "memcury.h"
#include "settings.h"

#include "../vendor/cURL/curl.h"
#include "url.h"

#include "FortniteSDK/SDK.hpp"
using namespace SDK;

inline CURLcode(*CurlSetOpt)(struct Curl_easy*, CURLoption, va_list) = nullptr;
inline CURLcode(*CurlEasySetOpt)(struct Curl_easy*, CURLoption, ...) = nullptr;

inline CURLcode CurlSetOpt_(struct Curl_easy* data, CURLoption option, ...)
{
	va_list arg;
	va_start(arg, option);

	const auto result = CurlSetOpt(data, option, arg);

	va_end(arg);
	return result;
}

std::string ReplaceString(std::string subject, const std::string& search, const std::string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

bool contains(std::string_view str, std::string_view substr) {
	return str.find(substr) != std::string_view::npos;
}

#define XOR

inline CURLcode CurlEasySetOptDetour(struct Curl_easy* data, CURLoption tag, ...)
{
	va_list arg;
	va_start(arg, tag);

	CURLcode result = {};

	if (!data) return CURLE_BAD_FUNCTION_ARGUMENT;

	//Ssl bypass
	if (tag == CURLOPT_SSL_VERIFYPEER)
	{
		result = CurlSetOpt_(data, tag, 0);
	}

	//Disable Proxy
	/* if (tag == CURLOPT_PROXY)
	{
		result = CurlSetOpt_(data, tag, "");
	} */

	//URL redirection
	else if (tag == CURLOPT_URL)
	{
		std::string url = va_arg(arg, char*);

		Uri uri = Uri::Parse(url);

		if (bIsS13Epic)
		{
			if (!uri.QueryString.empty())
			{
				// this *should* work
				std::cout << "before query: " << uri.QueryString << '\n';
				uri.QueryString = ReplaceString(uri.QueryString.data(), "Windows", "IOS");
				std::cout << "after query: " << uri.QueryString << '\n';
			}
			else
			{
				std::cout << "Empty query!\n";
			}
		}

		std::cout << "URL: " << uri.Host << uri.Path << '\n';

#if defined(URL_HOST) && defined(URL_PROTOCOL) && defined(URL_PORT)
		if (uri.Host.ends_with(XOR("ol.epicgames.com"))
			|| uri.Host.ends_with(XOR("epicgames.dev")) // wooo eos
			|| uri.Host.ends_with(XOR("ol.epicgames.net")) // i forgor what endpoint this was for
			|| uri.Host.ends_with(XOR(".akamaized.net"))
			|| uri.Host.ends_with(XOR("on.epicgames.com"))
			|| uri.Host.ends_with(XOR("game-social.epicgames.com"))
			|| contains(uri.Host, XOR("superawesome.com"))
			|| contains(uri.Host, XOR("ak.epicgames.com")))
		{
			if (CobaltUsage == ECobaltUsage::Private)
			{
				url = Uri::CreateUri(URL_PROTOCOL, URL_HOST, URL_PORT, uri.Path, uri.QueryString);

				if (contains(uri.Path, "/fortnite/api/game/v2/matchmakingservice/ticket/player")) {
					UFortEngine* Engine = UObject::FindObject<SDK::UFortEngine>("FortEngine Transient.FortEngine_0");
					UGameplayStatics* Statics = UObject::FindObject<UGameplayStatics>("GameplayStatics Engine.Default__GameplayStatics");
					UKismetSystemLibrary* kSL = UObject::FindObject<UKismetSystemLibrary>("KismetSystemLibrary Engine.Default__KismetSystemLibrary");
					kSL->ExecuteConsoleCommand(Engine->GameViewport->World, L"open 127.0.0.1:7777", nullptr);
				}
			}
			else if (CobaltUsage == ECobaltUsage::Hybrid)
			{
				if (contains(uri.Path, "/fortnite/api/v2/versioncheck/")) {
					url = Uri::CreateUri(URL_PROTOCOL, URL_HOST, URL_PORT, uri.Path, uri.QueryString);
				}
				else if (contains(uri.Path, "/fortnite/api/game/v2/profile")) {
					url = Uri::CreateUri(URL_PROTOCOL, URL_HOST, URL_PORT, uri.Path, uri.QueryString);
				}
				else if (contains(uri.Path, "/content/api/pages/fortnite-game")) {
					url = Uri::CreateUri(URL_PROTOCOL, URL_HOST, URL_PORT, uri.Path, uri.QueryString);
				}
				else if (contains(uri.Path, "/affiliate/api/public/affiliates/slug")) {
					url = Uri::CreateUri(URL_PROTOCOL, URL_HOST, URL_PORT, uri.Path, uri.QueryString);
				}
				else if (contains(uri.Path, "/socialban/api/public/v1")) {
					url = Uri::CreateUri(URL_PROTOCOL, URL_HOST, URL_PORT, uri.Path, uri.QueryString);
				}
				else if (contains(uri.Path, "/fortnite/api/cloudstorage/system")) {
					url = Uri::CreateUri(URL_PROTOCOL, URL_HOST, URL_PORT, uri.Path, uri.QueryString);
				}
			}
		}

#endif

		result = CurlSetOpt_(data, tag, url.c_str());
	}	

	else
	{
		result = CurlSetOpt(data, tag, arg);
	}

	va_end(arg);
	return result;
}


__int64 sigscan(const std::string& Str) { return Memcury::Scanner::FindPattern(Str.c_str()).Get(); }