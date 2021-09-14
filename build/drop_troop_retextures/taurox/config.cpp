class CfgPatches
{
	class IC_DT_Taurox
	{
		requiredAddons[]=
		{
			"IC_Taurox",
			"A3_Armor_F_Beta",
			"A3_Data_F",
			"A3_Armor_F",
			"A3_Weapons_F_Rifles_SDAR",
			"A3_Weapons_F"
		};
		units[]=
		{
			"IC_Taurox_HS_med"
		};
	};
};
class CfgVehicles
{
	class IC_Taurox_HS_SL;
	class IC_Taurox_HS_med: IC_Taurox_HS_SL
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		vehicleClass="IC_SL_DT_B";
		displayName="Medical Taurox (143rd)";
		side=1;
		hasCommander=0;
		Faction="B_143rd_DKoK";
		crew="DKoK_GM_1491st";
		crewVulnerable=1;
		transportSoldier=10;
		fuelExplosionPower=1;
		typicalCargo[]=
		{
			"DKoK_Eng_1491st"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camonet_back",
			"camonet_front",
			"Armor_plates"
		};
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\taurox_med_co.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"IC_Taurox\Data\addons\addon_armor_taurox_SL_co.paa"
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
};
