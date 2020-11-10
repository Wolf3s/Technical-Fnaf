#pragma once

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FNAF_GameInstance.BP_FNAF_GameInstance_C
// 0x01C1 (0x0289 - 0x00C8)
class UBP_FNAF_GameInstance_C : public UFNAF_GameInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLevelInfoStruct                            NextLevelInfo;                                            // 0x00D0(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CaveatLevel;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerCoins;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	TMap<int, struct FMPPlayerLobbyInfo>               PlayerSelectedCharacters;                                 // 0x0158(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       MainMenuLevel;                                            // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DefeatLevel;                                              // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VictoryLevel;                                             // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     SaveSlotName;                                             // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       CurrentLevelNameID;                                       // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  LevelDataTable;                                           // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  PrizeDataTable;                                           // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerIndex;                                              // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentLevelNumber;                                       // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInNightmareMode;                                        // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	class UFNAFSaveGame_C*                             SaveGameRef;                                              // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TitleLevel;                                               // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LevelToLoadAfterFade;                                     // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DemoMainMenuLevel;                                        // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThanksForPlayingLevel;                                    // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefeatToTitle;                                            // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLoadingLevel;                                           // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasSaveGame;                                              // 0x0222(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LastLevelWasDefeat;                                       // 0x0223(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GlitchedIntroLevel;                                       // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	struct FName                                       GlitchTrapLevel;                                          // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLoadingFinaleLevel;                                     // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDoneFading;                                             // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLoadingInstructionLevel;                                // 0x0232(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0233(0x0005) MISSED OFFSET
	TArray<struct FName>                               AchievementID_s;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ComingFromGlitchLVL;                                      // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FName                                       PizzaPartyID;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInDLC;                                                  // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	struct FName                                       CaveatLevel_Halloween;                                    // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WitheredID;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DifficultAdjustmentValue;                                 // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	struct FName                                       H_VictoryLevel;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       H_DefeatLevel;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowLoadingScreenAfterFade;                               // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FNAF_GameInstance.BP_FNAF_GameInstance_C");
		return ptr;
	}


	void GetSubtitlesOn(bool* SubtitlesOn);
	void GiveAllAchievements();
	void GetAvailablePrizesForLevel(TArray<struct FName>* AvailablePrizes);
	void AttemptAwardSpecialPrize();
	void SaveGameSlot();
	void CheckforAchievementCompletion();
	void GiveBasketBall(struct FPrize_Item_Struct* Prize);
	void HasDefeatedGlitchtrap(bool* GlitchtrapDefeated);
	void DefeatGlitchtrap();
	void SetGlitchListenedTo(int NewItem);
	void GetInstructionWidget(class UClass** Next_Level_Info_Instructions_Widget);
	void UnlockAllPrizes();
	void UnlockAllGlitches();
	void GetAchievementData(const struct FName& AchievementID, float* Progress, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bFoundID);
	void AfterFadeLevelLoader();
	void FadeOutWithLevelLoad(const struct FName& LevelToLoadAfterFade, bool Skip_Fade_out, bool ShowLoadingScreen);
	class AFadeHandlerForPause_C* FadeOut(bool Skip_Fade);
	void FadeOutWithTimerEvent(const struct FScriptDelegate& OnFadeFinishedEvent, bool Skip_Fade_out);
	void AwardGlitch(int GlitchID);
	void HasGlitch(int GlitchID, bool* Value);
	void UpdateGlitchtrapStage();
	void GetGlitchtrapStage(int* CurrentGlitchtrapStage);
	void InitSaveGame();
	bool HasCoin(int CoinID);
	void GetSavedLevelInfo(struct FSaveGame_LevelInfo* LevelInfo);
	void HasPrize(const struct FName& PrizeID, bool* HasPrize);
	void EnableNightmareMode(bool IsInNightmareMode);
	void IsNightmareModeEnabled(bool* IsInNightmareMode);
	int GetLevelNumber();
	void AwardRandomPrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, struct FName* PrizeID);
	void GetRandomAvailablePrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, struct FName* PrizeID);
	void GetAvailablePrizesBase(TArray<struct FName>* AvailablePrizes);
	void GetNumberOfPlayers(int* NumberOfPlayers);
	void GetAllLevelsOfType(TEnumAsByte<EGameTypeEnum> Game_Type, TArray<struct FLevelInfoStruct>* LevelsForGameType, TArray<struct FName>* LevelIDsForGameType);
	void IsLevelUnlocked(const struct FName& LevelID, bool* LevelIsUnlocked);
	void IsLevelBeaten(const struct FName& LevelID, bool* LevelCompleted);
	void IsShowtimeUnlocked(bool* ShowtimeUnlocked);
	void FindCurrentLevelID();
	void UpdateCachedCoinCount();
	void ClearSaveGame();
	void GetCurrentLevelID(struct FName* CurrentLevelNameID);
	void GetCurrentLevelInfo(struct FLevelInfoStruct* CurrentLevelInfo, int* LevelNumber);
	void UnlockCoin(int CoinID);
	void GetSaveGame(class UFNAFSaveGame_C** SaveGameInfo);
	void SaveLevelVictory();
	void SetupPlayerCharacters(TArray<class ALobbyPlayerController_C*>* LobbyPlayers);
	void GetCoinCount(int* NumberOfCoins);
	void GetLevelInstructions(struct FText* LevelInstructions, bool* WidgetIsValid);
	void SpawnLevelDatabase();
	void LoadMainMenu();
	void ReceiveInit();
	void UnlockAllLevels();
	void RunFadeOut();
	void LoadTitle();
	void LoadIntroLevel();
	void LoadGlichedIntroLevel();
	void LoadGallery();
	void FinaleVictory(int NumCoins);
	void UnlockAllCoins();
	void ToggleSubtitles();
	void LoadGlitchKeyhole();
	void LoadCasetteRoom();
	void LoadGameOver();
	void LevelVictory(int NumCoins, bool No_Fade_Out_at_end);
	void LoadHalloweenHub();
	void ForceLoadHTitle();
	void LoadMainHub();
	void LevelDefeat();
	void RestartCurrentLevel();
	void LoadHSplash();
	void LoadGearGame();
	void LoadDarkRide();
	void FinishCaveat(int Difficulty);
	void LoadHollidayLevel();
	void LoadLevel(const struct FName& LevelID, const struct FLevelInfoStruct& LevelInfo);
	void ExecuteUbergraph_BP_FNAF_GameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
