
class CfgPatches
{
	class DK143_ALIVE_COMPAT_Custom_Factions
	{
		author = "Venture";
		name = "DK143 TIOW ALIVE_COMPAT Custom Factions";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
	class DK143_O_NurgleCultists {
		displayName = "Nurgle Cultists";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
    	};
};

class CfgGroups {
	class EAST {
		class DK143_Custom_Factions{
			name = "143rd Custom Factions";
			class DK143_O_NurgleCultists
			{
				displayName = "Nurgle Cultists";
				class DK143_O_NurgleCultists_fireteam {
					name = "Fireteam";
					side = 0;
					faction = "DK143_O_NurgleCultists";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Plasmagun";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					 };
				};
				
				class DK143_O_NurgleCultists_Squad {
					name = "Squad";
					side = 0;
					faction = "DK143_O_NurgleCultists";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit1 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Plasmagun";
					};
					class Unit2 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_ML";
					};
					class Unit3 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit4 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit5 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit6 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit7 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit8 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit9 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
				};
				
				class DK143_O_NurgleCultists_Squad_CQB {
					name = "Squad CQB";
					side = 0;
					faction = "DK143_O_NurgleCultists";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit1 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Plasmagun";
					};
					class Unit2 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Melta";
					};
					class Unit3 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit4 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit5 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit6 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit7 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit8 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit9 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
				};
			};
		};
	};
	class WEST{};
	class INDEP{};
};

class CfgVehicles
{
	// ARMA 3 Base Soldier Classes
	class O_Soldier_base_F;
	
	// Created Base Classes, used for inheritance only
	class DK143_Base_Nurgle_Cultist : O_Soldier_base_F {
		scope = 0; // 0 = inheritance use only, not available by macro or editor, 0 = inheritance only, 1 = Macro, 2 = Editor
		cost = 1; // AI target weight - 1 = Grunt, 4 =Squad Leader, 8 = Medic, 10 = Officer
		faction = "DK143_O_NurgleCultists"; // Sets Faction for the unit
		side = 0; // sets units side, 0 = OPFOR, 1 = BLUFOR, 2 = INDEP
		// Identity (head, language)	
        	identityTypes[] = {"Head_Chaos","LanguageENGB"};
		// Uniform
		uniformClass = "U_TIOW_Cultist_brown";
		//Base/small items
		linkedItems[] = {"TIOW_Cultist_Gear","TIOW_Cultist_Hood_brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"TIOW_Cultist_Gear","TIOW_Cultist_Hood_brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
	};
	
	// Fleshed out Units
	// Nurgle Cultists
	// OPFOR
	class DK143_O_Nurgle_Cultist_Rifleman : DK143_Base_Nurgle_Cultist {
		scope = 2;
		side = 0;
		// Give AI gun
		weapons[] = {"AgripinaaAutoChaos3"};
        	respawnWeapons[] = {"AgripinaaAutoChaos3"};
		// Give AI boolets
       	 	magazines[] = {mag_5("30Rnd_Agrip_mag_Tracer"),mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};
        	respawnMagazines[] = {mag_5("30Rnd_Agrip_mag_Tracer"),mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};
		backpack = "Ren_Backpack_02_black";
	};
	
	class DK143_O_Nurgle_Cultist_Melta : DK143_Base_Nurgle_Cultist {
		scope = 2;
		side = 0;
		cost = 3;
		// Give AI gun
		weapons[] = {"TIOW_MeltaGun_01","LuciusLaspistolGreen"};
        	respawnWeapons[] = {"TIOW_MeltaGun_01","LuciusLaspistolGreen"};
		// Give AI boolets
        	magazines[] = {mag_5("TIOW_Meltagun_Mag"), mag_2("LuciusLaspistol_mag"), mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};
        	respawnMagazines[] = {mag_5("TIOW_Meltagun_Mag"), mag_2("LuciusLaspistol_mag"),mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};

	};
	
	class DK143_O_Nurgle_Cultist_Plasmagun : DK143_Base_Nurgle_Cultist {
		scope = 2;
		side = 0;
		cost = 3;
		// Give AI gun
		weapons[] = {"Chaos_PlasmaGun","ML700_LasPistol_F"};
        	respawnWeapons[] = {"Chaos_PlasmaGun","ML700_LasPistol_F"};
		// Give AI Boolets
        	magazines[] = {mag_5("DK_PlasmaGun_Flask"), mag_2("ML700_Laspistol_Battery"), mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};
		respawnMagazines[] = {mag_5("DK_PlasmaGun_Flask"), mag_2("ML700_Laspistol_Battery"), mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};

	};
	
	class DK143_O_Nurgle_Cultist_ML : DK143_Base_Nurgle_Cultist {
		scope = 2;
		side = 0;
		cost = 3;
		// Give AI Gun
		weapons[] = {"AgripinaaAutoChaos3","ML700_Launcher_Weapon_LockeLauncher_Blood"};
        	respawnWeapons[] = {"AgripinaaAutoChaos3","ML700_Launcher_Weapon_LockeLauncher_Blood"};
		// Give AI Boolets
        	magazines[] = {mag_5("30Rnd_Agrip_mag_Tracer"), mag_2("ML700_84mm_HE_Locke_Mag"), mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};
        	respawnMagazines[] = {mag_5("30Rnd_Agrip_mag_Tracer"), mag_2("ML700_84mm_HE_Locke_Mag"), mag_2("TIOW_ig_frag_grenade_mag"), mag_2("ML700_krak_grenade_magazine")};
	};
};
