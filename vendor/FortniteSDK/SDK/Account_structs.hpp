#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Account

#include "Basic.hpp"


namespace SDK
{

// Enum Account.EExternalAccountType
// NumValues: 0x0004
enum class EExternalAccountType : uint8
{
	None                                     = 0,
	Facebook                                 = 1,
	Google                                   = 2,
	EExternalAccountType_MAX                 = 3,
};

// Enum Account.ECreateAccountResult
// NumValues: 0x0008
enum class ECreateAccountResult : uint8
{
	NotStarted                               = 0,
	Pending                                  = 1,
	Success                                  = 2,
	Console_LoginFailed                      = 3,
	Console_DuplicateAuthAssociation         = 4,
	DuplicateAccount                         = 5,
	GenericError                             = 6,
	ECreateAccountResult_MAX                 = 7,
};

// Enum Account.ELoginResult
// NumValues: 0x0021
enum class ELoginResult : uint8
{
	NotStarted                               = 0,
	Pending                                  = 1,
	Success                                  = 2,
	Console_LoginFailed                      = 3,
	Console_AuthFailed                       = 4,
	Console_MissingAuthAssociation           = 5,
	Console_DuplicateAuthAssociation         = 6,
	Console_AddedAuthAssociation             = 7,
	Console_AuthAssociationFailure           = 8,
	Console_NotEntitled                      = 9,
	Console_EntitlementCheckFailed           = 10,
	Console_PrivilegeCheck                   = 11,
	Console_PatchOrUpdateRequired            = 12,
	AuthFailed                               = 13,
	AuthFailed_RefreshInvalid                = 14,
	AuthParentalLock                         = 15,
	PlatformNotAllowed                       = 16,
	NotEntitled                              = 17,
	Banned                                   = 18,
	EULACheckFailed                          = 19,
	ServiceUnavailable                       = 20,
	GenericError                             = 21,
	RejoinCheckFailure                       = 22,
	ConnectionFailed                         = 23,
	ExternalAuth_AddedAuthAssociation        = 24,
	ExternalAuth_ConnectionTimeout           = 25,
	ExternalAuth_AuthFailure                 = 26,
	ExternalAuth_AssociationFailure          = 27,
	ExternalAuth_MissingAuthAssociation      = 28,
	FailedToCreateParty                      = 29,
	ProfileQueryFailed                       = 30,
	ClientSettingsDownloadFailed             = 31,
	ELoginResult_MAX                         = 32,
};

// Enum Account.EConsoleAuthLinkState
// NumValues: 0x0007
enum class EConsoleAuthLinkState : uint8
{
	NotOnConsole                             = 0,
	ConsoleNotLoggedIn                       = 1,
	EpicNotLoggedIn                          = 2,
	ThisEpicAccountLinked                    = 3,
	OtherEpicAccountLinked                   = 4,
	NoEpicAccountLinked                      = 5,
	EConsoleAuthLinkState_MAX                = 6,
};

// ScriptStruct Account.OnlineAccountTexts_FailedLoginConsole
// 0x0138 (0x0138 - 0x0000)
struct FOnlineAccountTexts_FailedLoginConsole final
{
public:
	class FText                                   AgeRestriction;                                    // 0x0000(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Generic;                                           // 0x0018(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   MissingAuthAssociation;                            // 0x0030(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   NeedPremiumAccount;                                // 0x0048(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   OnlinePlayRestriction;                             // 0x0060(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PatchAvailable;                                    // 0x0078(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PleaseSignIn;                                      // 0x0090(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   SystemUpdateAvailable;                             // 0x00A8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UI;                                                // 0x00C0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnableToComplete;                                  // 0x00D8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnableToSignIn;                                    // 0x00F0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnableToStartPrivCheck;                            // 0x0108(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnexpectedError;                                   // 0x0120(0x0018)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOnlineAccountTexts_FailedLoginConsole) == 0x000008, "Wrong alignment on FOnlineAccountTexts_FailedLoginConsole");
static_assert(sizeof(FOnlineAccountTexts_FailedLoginConsole) == 0x000138, "Wrong size on FOnlineAccountTexts_FailedLoginConsole");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, AgeRestriction) == 0x000000, "Member 'FOnlineAccountTexts_FailedLoginConsole::AgeRestriction' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, Generic) == 0x000018, "Member 'FOnlineAccountTexts_FailedLoginConsole::Generic' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, MissingAuthAssociation) == 0x000030, "Member 'FOnlineAccountTexts_FailedLoginConsole::MissingAuthAssociation' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, NeedPremiumAccount) == 0x000048, "Member 'FOnlineAccountTexts_FailedLoginConsole::NeedPremiumAccount' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, OnlinePlayRestriction) == 0x000060, "Member 'FOnlineAccountTexts_FailedLoginConsole::OnlinePlayRestriction' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PatchAvailable) == 0x000078, "Member 'FOnlineAccountTexts_FailedLoginConsole::PatchAvailable' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PleaseSignIn) == 0x000090, "Member 'FOnlineAccountTexts_FailedLoginConsole::PleaseSignIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, SystemUpdateAvailable) == 0x0000A8, "Member 'FOnlineAccountTexts_FailedLoginConsole::SystemUpdateAvailable' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UI) == 0x0000C0, "Member 'FOnlineAccountTexts_FailedLoginConsole::UI' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToComplete) == 0x0000D8, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnableToComplete' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToSignIn) == 0x0000F0, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnableToSignIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToStartPrivCheck) == 0x000108, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnableToStartPrivCheck' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnexpectedError) == 0x000120, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnexpectedError' has a wrong offset!");

// ScriptStruct Account.OnlineAccountTexts
// 0x08E8 (0x08E8 - 0x0000)
struct FOnlineAccountTexts final
{
public:
	class FText                                   AllGiftCodesUsed;                                  // 0x0000(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   AssociateConsoleAuth;                              // 0x0018(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   AutoLoginFailed;                                   // 0x0030(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   BannedFromGame;                                    // 0x0048(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   CheckEntitledToPlay;                               // 0x0060(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   CheckingRejoin;                                    // 0x0078(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   CheckServiceAvailability;                          // 0x0090(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ConsolePrivileges;                                 // 0x00A8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   CreateAccountCompleted;                            // 0x00C0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   CreateAccountFailure;                              // 0x00D8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   CreateHeadless;                                    // 0x00F0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   DoQosPingTests;                                    // 0x0108(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   DowntimeMinutesWarningText;                        // 0x0120(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   DowntimeSecondsWarningText;                        // 0x0138(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   DuplicateAuthAssociaton;                           // 0x0150(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   EulaCheck;                                         // 0x0168(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ExchangeConsoleGiftsForAccess;                     // 0x0180(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ExchangeConsolePurchaseForAccess;                  // 0x0198(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedAccountCreate;                               // 0x01B0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedEulaCheck_EulaAcceptanceFailed;              // 0x01C8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedEulaCheck_MustAcceptEula;                    // 0x01E0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginCredentialsMsg;                         // 0x01F8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginParentalLock;                           // 0x0210(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginNoRealId;                               // 0x0228(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginLockoutMsg;                             // 0x0240(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginMsg;                                    // 0x0258(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginMsg_InvalidRefreshToken;                // 0x0270(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginTencent_UnableToSignIn;                 // 0x0288(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginTencent_NotSignedInToWeGame;            // 0x02A0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginTencent_FailedToInitializeWeGame;       // 0x02B8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedLoginTencent_WeGameSystemOffline;            // 0x02D0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FailedStartLogin;                                  // 0x02E8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FounderChatExitedText;                             // 0x0300(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   FounderChatJoinedText;                             // 0x0318(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   GameDisplayName;                                   // 0x0330(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   GeneralLoginFailure;                               // 0x0348(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   GlobalChatExitedText;                              // 0x0360(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   GlobalChatJoinedText;                              // 0x0378(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   HeadlessAccountFailed;                             // 0x0390(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   InMatchShutdownTimeWarningText;                    // 0x03A8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   InvalidUser;                                       // 0x03C0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoggedOutofMCP;                                    // 0x03D8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   DisconnectedFromMCP;                               // 0x03F0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoggedOutReturnedToTitle;                          // 0x0408(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoggedOutSwitchedProfile;                          // 0x0420(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoggingIn;                                         // 0x0438(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoggingInConsoleAuth;                              // 0x0450(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoggingOut;                                        // 0x0468(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoginConsole;                                      // 0x0480(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoginFailure;                                      // 0x0498(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Logout_Unlink;                                     // 0x04B0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LogoutCompleted;                                   // 0x04C8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LostConnection;                                    // 0x04E0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   MCPTimeout;                                        // 0x04F8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LightswitchCheckNetworkFailureMsg;                 // 0x0510(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   NoPlayEntitlement;                                 // 0x0528(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   NoServerAccess;                                    // 0x0540(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PlayAccessRevoked;                                 // 0x0558(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PremiumAccountName_Default;                        // 0x0570(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PremiumAccountName_PS4;                            // 0x0588(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PremiumAccountName_Switch;                         // 0x05A0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   PremiumAccountName_XboxOne;                        // 0x05B8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   RedeemOfflinePurchases;                            // 0x05D0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ServiceDowntime;                                   // 0x05E8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   SignInCompleting;                                  // 0x0600(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   SignIntoConsoleServices;                           // 0x0618(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   TokenExpired;                                      // 0x0630(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnableToConnect;                                   // 0x0648(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnableToJoinWaitingRoomLoginQueue;                 // 0x0660(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnexpectedConsoleAuthFailure;                      // 0x0678(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UnlinkConsoleFailed;                               // 0x0690(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   UserLoginFailed;                                   // 0x06A8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   WaitingRoom;                                       // 0x06C0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   WaitingRoomError;                                  // 0x06D8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   WaitingRoomFailure;                                // 0x06F0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   WaitingRoomWaiting;                                // 0x0708(0x0018)(Edit, NativeAccessSpecifierPublic)
	struct FOnlineAccountTexts_FailedLoginConsole FailedLoginConsole;                                // 0x0720(0x0138)(Edit, NativeAccessSpecifierPublic)
	class FText                                   LoggingInExternalAuth;                             // 0x0858(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ExtAuthCanceled;                                   // 0x0870(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ExtAuthFailure;                                    // 0x0888(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ExtAuthAssociationFailure;                         // 0x08A0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ExtAuthTimeout;                                    // 0x08B8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ExtAuthMissingAuthAssociation;                     // 0x08D0(0x0018)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOnlineAccountTexts) == 0x000008, "Wrong alignment on FOnlineAccountTexts");
static_assert(sizeof(FOnlineAccountTexts) == 0x0008E8, "Wrong size on FOnlineAccountTexts");
static_assert(offsetof(FOnlineAccountTexts, AllGiftCodesUsed) == 0x000000, "Member 'FOnlineAccountTexts::AllGiftCodesUsed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, AssociateConsoleAuth) == 0x000018, "Member 'FOnlineAccountTexts::AssociateConsoleAuth' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, AutoLoginFailed) == 0x000030, "Member 'FOnlineAccountTexts::AutoLoginFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, BannedFromGame) == 0x000048, "Member 'FOnlineAccountTexts::BannedFromGame' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CheckEntitledToPlay) == 0x000060, "Member 'FOnlineAccountTexts::CheckEntitledToPlay' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CheckingRejoin) == 0x000078, "Member 'FOnlineAccountTexts::CheckingRejoin' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CheckServiceAvailability) == 0x000090, "Member 'FOnlineAccountTexts::CheckServiceAvailability' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ConsolePrivileges) == 0x0000A8, "Member 'FOnlineAccountTexts::ConsolePrivileges' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CreateAccountCompleted) == 0x0000C0, "Member 'FOnlineAccountTexts::CreateAccountCompleted' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CreateAccountFailure) == 0x0000D8, "Member 'FOnlineAccountTexts::CreateAccountFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CreateHeadless) == 0x0000F0, "Member 'FOnlineAccountTexts::CreateHeadless' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DoQosPingTests) == 0x000108, "Member 'FOnlineAccountTexts::DoQosPingTests' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DowntimeMinutesWarningText) == 0x000120, "Member 'FOnlineAccountTexts::DowntimeMinutesWarningText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DowntimeSecondsWarningText) == 0x000138, "Member 'FOnlineAccountTexts::DowntimeSecondsWarningText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DuplicateAuthAssociaton) == 0x000150, "Member 'FOnlineAccountTexts::DuplicateAuthAssociaton' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, EulaCheck) == 0x000168, "Member 'FOnlineAccountTexts::EulaCheck' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExchangeConsoleGiftsForAccess) == 0x000180, "Member 'FOnlineAccountTexts::ExchangeConsoleGiftsForAccess' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExchangeConsolePurchaseForAccess) == 0x000198, "Member 'FOnlineAccountTexts::ExchangeConsolePurchaseForAccess' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedAccountCreate) == 0x0001B0, "Member 'FOnlineAccountTexts::FailedAccountCreate' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedEulaCheck_EulaAcceptanceFailed) == 0x0001C8, "Member 'FOnlineAccountTexts::FailedEulaCheck_EulaAcceptanceFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedEulaCheck_MustAcceptEula) == 0x0001E0, "Member 'FOnlineAccountTexts::FailedEulaCheck_MustAcceptEula' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginCredentialsMsg) == 0x0001F8, "Member 'FOnlineAccountTexts::FailedLoginCredentialsMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginParentalLock) == 0x000210, "Member 'FOnlineAccountTexts::FailedLoginParentalLock' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginNoRealId) == 0x000228, "Member 'FOnlineAccountTexts::FailedLoginNoRealId' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginLockoutMsg) == 0x000240, "Member 'FOnlineAccountTexts::FailedLoginLockoutMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginMsg) == 0x000258, "Member 'FOnlineAccountTexts::FailedLoginMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginMsg_InvalidRefreshToken) == 0x000270, "Member 'FOnlineAccountTexts::FailedLoginMsg_InvalidRefreshToken' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_UnableToSignIn) == 0x000288, "Member 'FOnlineAccountTexts::FailedLoginTencent_UnableToSignIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_NotSignedInToWeGame) == 0x0002A0, "Member 'FOnlineAccountTexts::FailedLoginTencent_NotSignedInToWeGame' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_FailedToInitializeWeGame) == 0x0002B8, "Member 'FOnlineAccountTexts::FailedLoginTencent_FailedToInitializeWeGame' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_WeGameSystemOffline) == 0x0002D0, "Member 'FOnlineAccountTexts::FailedLoginTencent_WeGameSystemOffline' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedStartLogin) == 0x0002E8, "Member 'FOnlineAccountTexts::FailedStartLogin' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FounderChatExitedText) == 0x000300, "Member 'FOnlineAccountTexts::FounderChatExitedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FounderChatJoinedText) == 0x000318, "Member 'FOnlineAccountTexts::FounderChatJoinedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GameDisplayName) == 0x000330, "Member 'FOnlineAccountTexts::GameDisplayName' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GeneralLoginFailure) == 0x000348, "Member 'FOnlineAccountTexts::GeneralLoginFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GlobalChatExitedText) == 0x000360, "Member 'FOnlineAccountTexts::GlobalChatExitedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GlobalChatJoinedText) == 0x000378, "Member 'FOnlineAccountTexts::GlobalChatJoinedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, HeadlessAccountFailed) == 0x000390, "Member 'FOnlineAccountTexts::HeadlessAccountFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, InMatchShutdownTimeWarningText) == 0x0003A8, "Member 'FOnlineAccountTexts::InMatchShutdownTimeWarningText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, InvalidUser) == 0x0003C0, "Member 'FOnlineAccountTexts::InvalidUser' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutofMCP) == 0x0003D8, "Member 'FOnlineAccountTexts::LoggedOutofMCP' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DisconnectedFromMCP) == 0x0003F0, "Member 'FOnlineAccountTexts::DisconnectedFromMCP' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutReturnedToTitle) == 0x000408, "Member 'FOnlineAccountTexts::LoggedOutReturnedToTitle' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutSwitchedProfile) == 0x000420, "Member 'FOnlineAccountTexts::LoggedOutSwitchedProfile' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingIn) == 0x000438, "Member 'FOnlineAccountTexts::LoggingIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingInConsoleAuth) == 0x000450, "Member 'FOnlineAccountTexts::LoggingInConsoleAuth' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingOut) == 0x000468, "Member 'FOnlineAccountTexts::LoggingOut' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoginConsole) == 0x000480, "Member 'FOnlineAccountTexts::LoginConsole' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoginFailure) == 0x000498, "Member 'FOnlineAccountTexts::LoginFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, Logout_Unlink) == 0x0004B0, "Member 'FOnlineAccountTexts::Logout_Unlink' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LogoutCompleted) == 0x0004C8, "Member 'FOnlineAccountTexts::LogoutCompleted' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LostConnection) == 0x0004E0, "Member 'FOnlineAccountTexts::LostConnection' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, MCPTimeout) == 0x0004F8, "Member 'FOnlineAccountTexts::MCPTimeout' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LightswitchCheckNetworkFailureMsg) == 0x000510, "Member 'FOnlineAccountTexts::LightswitchCheckNetworkFailureMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, NoPlayEntitlement) == 0x000528, "Member 'FOnlineAccountTexts::NoPlayEntitlement' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, NoServerAccess) == 0x000540, "Member 'FOnlineAccountTexts::NoServerAccess' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PlayAccessRevoked) == 0x000558, "Member 'FOnlineAccountTexts::PlayAccessRevoked' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Default) == 0x000570, "Member 'FOnlineAccountTexts::PremiumAccountName_Default' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_PS4) == 0x000588, "Member 'FOnlineAccountTexts::PremiumAccountName_PS4' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Switch) == 0x0005A0, "Member 'FOnlineAccountTexts::PremiumAccountName_Switch' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_XboxOne) == 0x0005B8, "Member 'FOnlineAccountTexts::PremiumAccountName_XboxOne' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, RedeemOfflinePurchases) == 0x0005D0, "Member 'FOnlineAccountTexts::RedeemOfflinePurchases' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ServiceDowntime) == 0x0005E8, "Member 'FOnlineAccountTexts::ServiceDowntime' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, SignInCompleting) == 0x000600, "Member 'FOnlineAccountTexts::SignInCompleting' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, SignIntoConsoleServices) == 0x000618, "Member 'FOnlineAccountTexts::SignIntoConsoleServices' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, TokenExpired) == 0x000630, "Member 'FOnlineAccountTexts::TokenExpired' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnableToConnect) == 0x000648, "Member 'FOnlineAccountTexts::UnableToConnect' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnableToJoinWaitingRoomLoginQueue) == 0x000660, "Member 'FOnlineAccountTexts::UnableToJoinWaitingRoomLoginQueue' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnexpectedConsoleAuthFailure) == 0x000678, "Member 'FOnlineAccountTexts::UnexpectedConsoleAuthFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnlinkConsoleFailed) == 0x000690, "Member 'FOnlineAccountTexts::UnlinkConsoleFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UserLoginFailed) == 0x0006A8, "Member 'FOnlineAccountTexts::UserLoginFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoom) == 0x0006C0, "Member 'FOnlineAccountTexts::WaitingRoom' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomError) == 0x0006D8, "Member 'FOnlineAccountTexts::WaitingRoomError' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomFailure) == 0x0006F0, "Member 'FOnlineAccountTexts::WaitingRoomFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomWaiting) == 0x000708, "Member 'FOnlineAccountTexts::WaitingRoomWaiting' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginConsole) == 0x000720, "Member 'FOnlineAccountTexts::FailedLoginConsole' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingInExternalAuth) == 0x000858, "Member 'FOnlineAccountTexts::LoggingInExternalAuth' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthCanceled) == 0x000870, "Member 'FOnlineAccountTexts::ExtAuthCanceled' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthFailure) == 0x000888, "Member 'FOnlineAccountTexts::ExtAuthFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthAssociationFailure) == 0x0008A0, "Member 'FOnlineAccountTexts::ExtAuthAssociationFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthTimeout) == 0x0008B8, "Member 'FOnlineAccountTexts::ExtAuthTimeout' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthMissingAuthAssociation) == 0x0008D0, "Member 'FOnlineAccountTexts::ExtAuthMissingAuthAssociation' has a wrong offset!");

// ScriptStruct Account.GiftMessage
// 0x0030 (0x0030 - 0x0000)
struct FGiftMessage final
{
public:
	class FString                                 GiftCode;                                          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SenderName;                                        // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A53[0x10];                                    // 0x0020(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGiftMessage) == 0x000008, "Wrong alignment on FGiftMessage");
static_assert(sizeof(FGiftMessage) == 0x000030, "Wrong size on FGiftMessage");
static_assert(offsetof(FGiftMessage, GiftCode) == 0x000000, "Member 'FGiftMessage::GiftCode' has a wrong offset!");
static_assert(offsetof(FGiftMessage, SenderName) == 0x000010, "Member 'FGiftMessage::SenderName' has a wrong offset!");

// ScriptStruct Account.ExternalAccountServiceConfig
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FExternalAccountServiceConfig final
{
public:
	EExternalAccountType                          Type;                                              // 0x0000(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A54[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ExternalServiceName;                               // 0x0008(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FExternalAccountServiceConfig) == 0x000008, "Wrong alignment on FExternalAccountServiceConfig");
static_assert(sizeof(FExternalAccountServiceConfig) == 0x000010, "Wrong size on FExternalAccountServiceConfig");
static_assert(offsetof(FExternalAccountServiceConfig, Type) == 0x000000, "Member 'FExternalAccountServiceConfig::Type' has a wrong offset!");
static_assert(offsetof(FExternalAccountServiceConfig, ExternalServiceName) == 0x000008, "Member 'FExternalAccountServiceConfig::ExternalServiceName' has a wrong offset!");

// ScriptStruct Account.WebEnvUrl
// 0x0030 (0x0030 - 0x0000)
struct FWebEnvUrl final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RedirectUrl;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Environment;                                       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWebEnvUrl) == 0x000008, "Wrong alignment on FWebEnvUrl");
static_assert(sizeof(FWebEnvUrl) == 0x000030, "Wrong size on FWebEnvUrl");
static_assert(offsetof(FWebEnvUrl, URL) == 0x000000, "Member 'FWebEnvUrl::URL' has a wrong offset!");
static_assert(offsetof(FWebEnvUrl, RedirectUrl) == 0x000010, "Member 'FWebEnvUrl::RedirectUrl' has a wrong offset!");
static_assert(offsetof(FWebEnvUrl, Environment) == 0x000020, "Member 'FWebEnvUrl::Environment' has a wrong offset!");

// ScriptStruct Account.ExchangeAccessParams
// 0x0040 (0x0040 - 0x0000)
struct FExchangeAccessParams final
{
public:
	class FString                                 EntitlementId;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReceiptId;                                         // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 VendorReceipt;                                     // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppStore;                                          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FExchangeAccessParams) == 0x000008, "Wrong alignment on FExchangeAccessParams");
static_assert(sizeof(FExchangeAccessParams) == 0x000040, "Wrong size on FExchangeAccessParams");
static_assert(offsetof(FExchangeAccessParams, EntitlementId) == 0x000000, "Member 'FExchangeAccessParams::EntitlementId' has a wrong offset!");
static_assert(offsetof(FExchangeAccessParams, ReceiptId) == 0x000010, "Member 'FExchangeAccessParams::ReceiptId' has a wrong offset!");
static_assert(offsetof(FExchangeAccessParams, VendorReceipt) == 0x000020, "Member 'FExchangeAccessParams::VendorReceipt' has a wrong offset!");
static_assert(offsetof(FExchangeAccessParams, AppStore) == 0x000030, "Member 'FExchangeAccessParams::AppStore' has a wrong offset!");

}

