class CfgPatches
{
	class 143rd_WHtracked_TIOW_LR_Battlecannon
	{
		units[]=
		{
			"TIOW_Krieg_LR_Battlecannon_143rd_Blu",
			"TIOW_Krieg_LR_Vanquisher_143rd_Blu",
			"TIOW_Krieg_LR_Demolisher_143rd_Blu",
			"TIOW_Krieg_LR_Conqueror_143rd_Blu",
			"TIOW_Krieg_LR_Exterminator_143rd_Blu",
			"TIOW_Krieg_LR_Annihilator_143rd_Blu",
			"TIOW_Krieg_LR_Punisher_143rd_Blu"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"A40k_WepBase",
			"WHtracked_TIOW_LR_Battlecannon"
		};
		requiredVersion=0.1;
	};
};
class CfgVehicles
{
	class TIOW_Krieg_LR_Battlecannon_1491st_Blu;
	class TIOW_Krieg_LR_Battlecannon_143rd_Blu: TIOW_Krieg_LR_Battlecannon_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Battlecannon";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_Krieg_LR_Vanquisher_1491st_Blu;
	class TIOW_Krieg_LR_Vanquisher_143rd_Blu: TIOW_Krieg_LR_Vanquisher_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Vanquisher";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_Krieg_LR_Demolisher_1491st_Blu;
	class TIOW_Krieg_LR_Demolisher_143rd_Blu: TIOW_Krieg_LR_Demolisher_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Demolisher";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_Krieg_LR_Conqueror_1491st_Blu;
	class TIOW_Krieg_LR_Conqueror_143rd_Blu: TIOW_Krieg_LR_Conqueror_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Conqueror";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_Krieg_LR_Exterminator_1491st_Blu;
	class TIOW_Krieg_LR_Exterminator_143rd_Blu: TIOW_Krieg_LR_Exterminator_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Exterminator";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_Krieg_LR_Executioner_1491st_Blu;
	class TIOW_Krieg_LR_Executioner_143rd_Blu: TIOW_Krieg_LR_Executioner_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Executioner";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_Krieg_LR_Annihilator_1491st_Blu;
	class TIOW_Krieg_LR_Annihilator_143rd_Blu: TIOW_Krieg_LR_Annihilator_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Annihilator";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_Krieg_LR_Punisher_1491st_Blu;
	class TIOW_Krieg_LR_Punisher_143rd_Blu: TIOW_Krieg_LR_Punisher_1491st_Blu
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Leman Russ Punisher";
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1489th";
		side=1;
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"WHtracked\LRMIV\Data\LR_Krieg1491st_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
};
