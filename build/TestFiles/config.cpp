#define _ARMA_

class CfgPatches
{
	class DK143_TestFiles
	{
		author = "Siggyfreed";
		name = "DK143 TestFiles";
		requiredAddons[] = 
        {"A3_Air_F_Heli_Light_01","Valkyrie"};
		requiredVersion = 0.1;
		units[] = {"DK143_Heli_Light"};
		weapons[] = {"TIOW_rockets_Skyfire_v","TIOW_LMHb_v"};
	};
};

class CfgFactionClasses
{
	class B_DK143_Navy
	{
		displayName = "DK143 Navy";
		priority = 3;
		side = 1;
		icon = "";
	};
};

class CfgVehicleClasses
{
	class B_DK143_Navy_Units
	{
		displayName = "Helicopters";
	};
};

class CfgMagazines
{
	class 24Rnd_PG_missiles;
	class TIOW_IG_HeavyBolter_Mag;
	class TIOW_38Rnd_80mm_rockets_v;
	class TIOW_rockets_Skyfire_v_Pylon: 24Rnd_PG_missiles
	{
		displayName = "Skyfire Rocket Pod";
		count = 48;
		ammo = "TIOW_R_80mm_HE_v";
		hardpoints[] = {"Skyfire_Pylon"};
		pylonWeapon = "TIOW_rockets_Skyfire_v";
		muzzlePos = "muzzlePos";
		muzzleEnd = "muzzleEnd";
	};
};

class CfgWeapons
{
	class TIOW_MultiLaser;
	class TIOW_LMHb_v;
	class TIOW_rockets_Skyfire_v;
	class TIOW_MultiLaser_Valk;
	class TIOW_LsCnn_mkII_v;
	class TIOW_LsCnn_mkII_vc;
};

class CfgVehicles
{
	class Components;
	class Heli_Light_01_armed_base_F;
	class Heli_Light_01_dynamicLoadout_base_F;
	class DK143_Heli_Light: Heli_Light_01_armed_base_F
	{
		displayName = "DK143 Little Valk";
		author = "Siggyfreed";
		Weapons[]=
		{
			"TIOW_LMHb_v", 
			"TIOW_rockets_Skyfire_v"
		};
		magazines[]=
		{
			"TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag",
			"TIOW_38Rnd_80mm_rockets_v","TIOW_38Rnd_80mm_rockets_v","TIOW_38Rnd_80mm_rockets_v"
		};
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "B_DK143_Navy";
		crew = "B_Helipilot_F";
		side = 1;		
	};
	class DK143_Heli_Light_Pylon: Heli_Light_01_dynamicLoadout_base_F
	{
		displayName = "DK143 Little Valk (Pylon Enabled)";
		author = "Siggyfreed";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "B_DK143_Navy";
		crew = "B_Helipilot_F";
		side = 1;
		weapons[]=
		{
			"TIOW_LMHB_v"
		};
		magazines[]=
		{
			"TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag","TIOW_IG_HeavyBolter_Mag"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F\Heli_Light_01\Data\UI\Heli_Light_01_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="TIOW_rockets_Skyfire_v_Pylon";
						priority=5;
						hardpoints[]=
						{
							"Skyfire_Pylon"
						};
						UIposition[]={0.059999999,0.40000001};					
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[]={0.58999997,0.40000001};					
					};
				};
			};
		};
	};
};