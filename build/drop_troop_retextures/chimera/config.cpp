class CfgPatches
{
	class 143rd_TIOWM_APCs
	{
		units[]=
		{
			"_143rdChimAuto",
			"_143rdChimMed",
			"TIOW_DKOKTrojan_143rd",
			"TIOW_KriegHydra_143rd",
			"TIOW_KriegWyvern_143rd"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"A40k_WepBase",
			"TIOWM_APCs"
		};
		requiredVersion=0.1;
	};
};
class CfgVehicles
{
	class _1491stChimAuto;
	class _143rdChimAuto: _1491stChimAuto
	{
		simulation="tankX";
		scope=2;
		vehicleClass="DKOK_APC";
		displayName="Chimera w/ Autocannon (143rd)";
		side=1;
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1491st";
		hasCommander=0;
		hasDriver=1;
		typicalCargo[]=
		{
			"DKoK_GM_1491st"
		};
		hiddenSelections[]=
		{
			"HULL_TEX",
			"markings",
			"TRACKS_TEX"
		};
		hiddenSelectionsTextures[]=
		{
			"APCs\data\Textures\Chimera1491st_co.paa",
			"143rdMod\build\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"APCs\data\Textures\Chimera_Track_co.paa"
		};
			maximumLoad = 100000;
			transportMaxWeapons = 100000;
			transportMaxMagazines = 100000;
			transportMaxItems = 100000;
			class TransportWeapons
			{ // this class controls what weapons can be found in the box
				class Lucius98LasgunBlackS
				{
					weapon = "Lucius98LasgunBlackS";
					count = 5;
				};
				class LuciusLaspistolBlack
				{
					weapon = "LuciusLaspistolBlack";
					count = 5;
				};
			};
			class TransportMagazines
			{ // this class controls what magazines can be found in the box
				class Lucius98_mag
				{
					magazine = "Lucius98_mag";
					count = 10;
				};
				class DK143_HotShot_Lucius_Mag
				{
					magazine = "DK143_HotShot_Lucius_Mag";
					count = 5;
				};
				class LuciusLaspistol_mag
				{
					magazine = "LuciusLaspistol_mag";
					count = 5;
				};
				class TIOW_ig_frag_grenade_mag
				{
					magazine = "TIOW_ig_frag_grenade_mag";
					count = 3;
				};
				class TIOW_ig_krak_grenade_mag
				{
					magazine = "TIOW_ig_krak_grenade_mag";
					count = 3;
				};
			};
	};
	class _143rdChimMed: _1491stChimAuto
	{
		simulation="tankX";
		scope=2;
		vehicleClass="DKOK_APC";
		displayName="Medical Chimera (143rd)";
		side=1;
		faction="B_143rd_DKoK";
		crew="DKoK_GM_1491st";
		hasCommander=0;
		hasDriver=1;
		typicalCargo[]=
		{
			"DKoK_GM_1491st"
		};
		hiddenSelections[]=
		{
			"HULL_TEX",
			"markings",
			"TRACKS_TEX"
		};
		hiddenSelectionsTextures[]=
		{
			"APCs\data\Textures\Chimera1491st_co.paa",
			"@DK143_Mod (ARCHIVE)\Addons\drop_troop_retextures\textures\ChimeraInsignia143rdmed_ca.paa",
			"APCs\data\Textures\Chimera_Track_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ACE_bloodIV
				{
					name = "ACE_bloodIV";
					count = 50;
				};
				class ACE_bloodIV_250
				{
					name = "ACE_bloodIV_250";
					count = 50;
				};
				class ACE_bloodIV_500
				{
					name = "ACE_bloodIV_500";
					count = 50;
				};
				class ACE_elasticBandage
				{
					name = "ACE_elasticBandage";
					count = 100;
				};
				class ACE_packingBandage
				{
					name = "ACE_packingBandage";
					count = 100;
				};
				class ACE_quikclot
				{
					name = "ACE_quikclot";
					count = 100;
				};
				class ACE_epinephrine
				{
					name = "ACE_epinephrine";
					count = 100;
				};
				class ACE_morphine
				{
					name = "ACE_morphine";
					count = 100;
				};
				class ACE_adenosine
				{
					name = "ACE_adenosine";
					count = 100;
				};
				class ACE_personalAidKit
				{
					name = "ACE_personalAidKit";
					count = 30;
				};
				class ACE_plasmaIV
				{
					name = "ACE_plasmaIV";
					count = 50;
				};
				class ACE_plasmaIV_250
				{
					name = "ACE_plasmaIV_250";
					count = 50;
				};
				class ACE_plasmaIV_500
				{
					name = "ACE_plasmaIV_500";
					count = 50;
				};
				class ACE_salineIV
				{
					name = "ACE_salineIV";
					count = 50;
				};
				class ACE_salineIV_250
				{
					name = "ACE_salineIV_250";
					count = 50;
				};
				class ACE_salineIV_500
				{
					name = "ACE_salineIV_500";
					count = 50;
				};
				class ACE_splint
				{
					name = "ACE_splint";
					count = 75;
				};
				class ACE_surgicalKit
				{
					name = "ACE_surgicalKit";
					count = 10;
				};
				class ACE_tourniquet
				{
					name = "ACE_tourniquet";
					count = 75;
				};
		};
	};
	class TIOW_DKOKTrojan_1491;
	class TIOW_DKOKTrojan_143rd: TIOW_DKOKTrojan_1491
	{
		simulation="tankX";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		vehicleClass="DKOK_APC";
		displayName="Trojan (143rd)";
		side=1;
		faction="B_143rd_DKoK";
		crew="DKoK_Eng_1491st";
		transportRepair=2e+008;
		supplyRadius=25;
		transportSoldier=0;
		engineer=1;
		transportAmmo=1e+012;
		secondaryExplosion=10000;
		transportFuel=1e+012;
		fuelExplosionPower=1;
		memoryPointSupply="zamerny";
		hasCommander=0;
		hasDriver=1;
		typicalCargo[]=
		{
			"DKoK_Eng_1491st"
		};
		hiddenSelections[]=
		{
			"HULL_TEX",
			"markings",
			"TrojanParts"
		};
		hiddenSelectionsTextures[]=
		{
			"APCs\data\Textures\Chimera1491st_co.paa",
			"@DK143_Mod (ARCHIVE)\Addons\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"APCs\data\Textures\TIOW_Expansion_Chassis_1491_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ACE_Fortify
				{
					name = "ACE_Fortify";
					count = 1;
				};
				class ACE_DefusalKit
				{
					name = "ACE_DefusalKit";
					count = 1;
				};
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_KriegHydra_1491st;
	class TIOW_KriegHydra_143rd: TIOW_KriegHydra_1491st
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		Faction="B_143rd_DKoK";
		side=1;
		typicalCargo[]=
		{
			"DKoK_GM_1491st"
		};
		crew="DKoK_GM_1491st";
		hiddenSelections[]=
		{
			"HULL_TEX",
			"markings",
			"Hydra_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"APCs\data\Textures\Chimera1491st_co.paa",
			"@DK143_Mod (ARCHIVE)\Addons\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"apcs\data\textures\tiow_hydra1491_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ACE_Fortify
				{
					name = "ACE_Fortify";
					count = 1;
				};
				class ACE_DefusalKit
				{
					name = "ACE_DefusalKit";
					count = 1;
				};
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
	class TIOW_KriegWyvern_1491st;
	class TIOW_KriegWyvern_143rd: TIOW_KriegWyvern_1491st
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		Faction="B_143rd_DKoK";
		side=1;
		typicalCargo[]=
		{
			"DKoK_GM_1491st"
		};
		crew="DKoK_GM_1491st";
		hiddenSelections[]=
		{
			"HULL_TEX",
			"markings",
			"Hydra_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"APCs\data\Textures\Chimera1491st_co.paa",
			"@DK143_Mod (ARCHIVE)\Addons\drop_troop_retextures\textures\ChimeraInsignia143rd_ca.paa",
			"apcs\data\textures\TIOW_Hydra1491_co.paa"
		};
		maximumLoad = 100000;
		transportMaxWeapons = 100000;
		transportMaxMagazines = 100000;
		transportMaxItems = 100000;
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ACE_Fortify
				{
					name = "ACE_Fortify";
					count = 1;
				};
				class ACE_DefusalKit
				{
					name = "ACE_DefusalKit";
					count = 1;
				};
				class ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
		};
	};
};
