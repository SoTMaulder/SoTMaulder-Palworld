#pragma once
#include <Windows.h>
#include "libs/utils/memory.h"
#include "SDK.hpp"
#include "database.h"
#include <map>

typedef bool(*Tick)(SDK::APalPlayerCharacter* m_this, float DeltaSecond);
typedef void(*CatchRate)(SDK::APalCaptureJudgeObject* m_this);

class config
{
public:
	//offsets
	DWORD64 ClientBase = 0;
	DWORD64 offset_Tick = 0x2AB1DC0;//APalPlayerCharacter::Tick
	DWORD64 offset_CatchRate = 0x26AE100; //APalCaptureJudgeObject::ChallengeCapture
	//check
	bool IsESP = false;
	bool IsFullbright = false;
	bool IsAimbot = false;
	bool IsSpeedHack = false;
	bool IsAttackModiler = false;
	bool IsDefuseModiler = false;
	bool IsInfStamina = false;
	bool IsSafe = true;
	bool IsInfinAmmo = false;
	bool IsToggledFly = false;
	bool IsForgeMode = false;
	bool IsTeleportAllToXhair = false;
	bool IsMuteki = false;
	bool IsMonster = false;
	bool IsQuick = false;
	bool matchDbItems = true;
	bool isDebugESP = false;
	bool bisOpenManager = false;
	bool bisRandomName = false;
	bool bisTeleporter = false;
	bool isCatchRate = false;
	bool IsDeathAura = false;
	bool filterCharacters = true;
	bool filterPlayer = false;
	bool filterGuilds = false;
	bool filterMapParts = false;
	bool isTimeOfDay = false;
	bool spec = false;
	bool IsRevive = false;
	float SpeedModiflers = 1.0f;
	//def and value
	float mDebugESPDistance = 5.0f;
	float mDeathAuraDistance = 10.f;
	int mDeathAuraAmount = 1.f;
	int DamageUp = 0;
	int DefuseUp = 0;
	int TimeOfDay = 0;
	int MaxWeight = 9999999;
	int EXP = 0;
	int Item = 0;
	float Pos[3] = { 0,0,0 };
	float mDebugEntCapDistance = 10.0f;
	float CatchRate = 1;
	char ItemName[255];
	char inputTextBuffer[255] = "";
	char CharName[255];
	SDK::UWorld* gWorld = nullptr;
	SDK::APalPlayerCharacter* localPlayer = NULL;
	SDK::TArray<SDK::APalPlayerCharacter*> AllPlayers = {};
	SDK::UPalCharacterImportanceManager* UCIM = NULL;
	SDK::UObject* WorldContextObject = NULL;
	SDK::APalCharacter* CloneCharacter = NULL;
	int AddItemSlot = 0;
	int AddItemCount = 2;

	enum QuickItemSet
	{
		basic_items_stackable,
		basic_items_single,
		pal_unlock_skills,
		spheres,
		tools

	};
	//Filtered Items
	std::vector<std::string> db_filteredItems;
	std::vector<std::string> essential_items = { "Leather", "Wood", "Stone", "Fiber", "CopperOre", "Poppy", "Venom", "Wool", "Cloth", "Cloth2", "FireOrgan", "IceOrgan", "ElectricOrgan", "Pal_crystal_S", "PalCrystal_Ex", "PalFluid", "PalUpgradeStone3", "Horn", "bone", "Charcoal", "CopperIngot", "MachineParts", "GunPowder2", "PalOil", "PalItem_PlantSlime", "Coal", "Sulfur", "Polymer", "Cement", "IronIngot", "CarbonFiber", "Quartz", "MachineParts2", "StealIngot", ""};


	struct SWaypoint
	{
		std::string waypointName;
		SDK::FVector waypointLocation;
		SDK::FRotator waypointRotation;

		bool bIsShown = true;
		float* mColor[4];

		SWaypoint() {};
		SWaypoint(std::string wpName, SDK::FVector wpLocation, SDK::FRotator wpRotation) { waypointName = wpName; waypointLocation = wpLocation; waypointRotation = wpRotation; }
	};
	std::vector<SWaypoint> db_waypoints;
	std::vector<std::pair<std::string, SDK::UClass*>> db_filteredEnts;

	//static function
	static SDK::UWorld* GetUWorld();
	static SDK::UPalCharacterImportanceManager* GetCharacterImpManager();
	static SDK::APalPlayerCharacter* GetPalPlayerCharacter(); 
	static SDK::ULocalPlayer* GetLocalPlayer();
	static SDK::APalPlayerController* GetPalPlayerController();
	static SDK::APalPlayerState* GetPalPlayerState();
	static SDK::UPalPlayerInventoryData* GetInventoryComponent();
	static SDK::APalWeaponBase* GetPlayerEquippedWeapon();
	static bool GetPartyPals(std::vector<SDK::AActor*>* outResult);
	static bool GetPlayerDeathChests(std::vector<SDK::FVector>* outLocations);
	static bool GetPartyPals(std::vector<SDK::AActor*> outResult);
	static bool	GetTAllPlayers(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool	GetTAllImpNPC(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool	GetTAllNPC(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool	GetTAllPals(SDK::TArray<class SDK::APalCharacter*>* outResult);
	static bool GetAllActorsofType(SDK::UClass* mType, std::vector<SDK::AActor*>* outArray, bool bLoopAllLevels = false, bool bSkipLocalPlayer = false);
	static void Init();
	static void Update(const char* filterText);
	static const std::vector<std::string>& GetFilteredItems();

	//tele spots
	float AnubisLocation[3] = { -170269, 94163.7, -1527.83 };
	float AstegonLocation[3] = { -320254.55, -119209.93, 18600.84 };
	float AzurobeLocation[3] = { -300596, 136090, -2033.13 };
	float BeakonLocation[3] = { -237981, 2559.41, 8413.65 };
	float BroncherryAquaLocation[3] = { -330059.98, 81386.99, -1929.8 };
	float BroncherryLocation[3] = { -430777.18, 56266.50, -1774.57 };
	float BushiLocation[3] = { -349079.05, 104564.46, -121.11 };
	float ChilletLocation[3] = { -315195, 236714, 2452.12 };
	float DinossomLuxLocation[3] = { 125311, 318722, 266.384 };
	float ElizabeeLocation[3] = { -197627, 167101, -1964.75 };
	float FelbatLocation[3] = { -149024, -30562.7, -1291.73 };
	float FenglopeLocation[3] = { -332470, 40256.4, 1333.93 };
	float FrostallionLocation[3] = { 111978, -6394.85, 21940.2 };
	float GrintaleLocation[3] = { -234807, 321166, -1826.19 };
	float GumossLocation[3] = { -409885.46, 108120.6, -1949.58 };
	float JetragonLocation[3] = { -270762, -205837, 3834.92 };
	float Jormuntide2Location[3] = { -163184, 314483, -2100.13 };
	float JormuntideLocation[3] = { -244207, 74851.5, -1157.08 };
	float KatressLocation[3] = { -276223, 268992, -1209.67 };
	float KingpacaLocation[3] = { -336105, 181639, 901.022 };
	float LunarisLocation[3] = { -426589.48, 90677.8, 215.90 };
	float MammorestLocation[3] = { -341702, 243628, -533.76 };
	float MenastingLocation[3] = { -77943, 393182, 665.51 };
	float MossandaLuxLocation[3] = { -208233, 364318, 1167.46 };
	float NitewingLocation[3] = { -157475, 30628.2, -1894.64 };
	float PaladiusLocation[3] = { 187235, 349924, 2563.07 };
	float PenkingLocation[3] = { -285343.94, 210129.58, 854.23 };
	float PetalliaLocation[3] = { -245440, 149098, 913.216 };
	float QuivernLocation[3] = { -183795, 40661.4, 8547.3 };
	float RelaxasaurusLuxLocation[3] = { -282860, 64923.7, 5357.72 };
	float SiblexLocation[3] = { -92023.6, 273762, 18967.3 };
	float SuzakuLocation[3] = { -4320.07, 340927, 205.005 };
	float UnivoltLocation[3] = { -372419.57, 102508.29, -392 };
	float VaeletLocation[3] = { -147042, 217357, 2857.45 };
	float VerdashLocation[3] = { -119349, 288954, 3186.98 };
	float WarsectLocation[3] = { -226359, 231970, -1807.45 };
	float WumpoBotanLocation[3] = { -148826, 364859, -1831.33 };
	float BillysBase[3] = { -295060.40, 195446.51, 8.80 };
};
extern config Config;
