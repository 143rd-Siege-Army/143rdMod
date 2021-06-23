class CfgPatches
{
	class IC_DT_Tauros
	{
		units[]=
		{
			"IC_SL_DT_Tauros_unarmed_medicae_F",
			"IC_SL_DT_Tauros_GMG_medical_F",
			"IC_SL_DT_Tauros_HMG_medical_F"
		};
		requiredAddons[]=
		{
			"A3_Soft_F_Exp",
			"A3_Data_F",
			"IC_Tauros"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class IC_Tauros_unarmed_snow_F;
	class IC_SL_DT_Tauros_unarmed_medicae_F: IC_Tauros_unarmed_snow_F
	{
		scope=2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass="B_143rd_DKoK";
		Faction="B_143rd_DKoK";
		crew="DKoK_GM_1491st";
		displayName="Med Tauros (Unarmed)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"143rdMod\build\drop_troop_retextures\textures\ic_tauros_medic_co.paa",
			"IC_Tauros\data\dashboard_co.paa"
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
					count = 25;
				};
				class ACE_bloodIV_250
				{
					name = "ACE_bloodIV_250";
					count = 25;
				};
				class ACE_bloodIV_500
				{
					name = "ACE_bloodIV_500";
					count = 25;
				};
				class ACE_elasticBandage
				{
					name = "ACE_elasticBandage";
					count = 50;
				};
				class ACE_packingBandage
				{
					name = "ACE_packingBandage";
					count = 50;
				};
				class ACE_quikclot
				{
					name = "ACE_quikclot";
					count = 50;
				};
				class ACE_epinephrine
				{
					name = "ACE_epinephrine";
					count = 50;
				};
				class ACE_morphine
				{
					name = "ACE_morphine";
					count = 50;
				};
				class ACE_adenosine
				{
					name = "ACE_adenosine";
					count = 50;
				};
				class ACE_personalAidKit
				{
					name = "ACE_personalAidKit";
					count = 15;
				};
				class ACE_plasmaIV
				{
					name = "ACE_plasmaIV";
					count = 25;
				};
				class ACE_plasmaIV_250
				{
					name = "ACE_plasmaIV_250";
					count = 25;
				};
				class ACE_plasmaIV_500
				{
					name = "ACE_plasmaIV_500";
					count = 25;
				};
				class ACE_salineIV
				{
					name = "ACE_salineIV";
					count = 25;
				};
				class ACE_salineIV_250
				{
					name = "ACE_salineIV_250";
					count = 25;
				};
				class ACE_salineIV_500
				{
					name = "ACE_salineIV_500";
					count = 25;
				};
				class ACE_splint
				{
					name = "ACE_splint";
					count = 25;
				};
				class ACE_surgicalKit
				{
					name = "ACE_surgicalKit";
					count = 5;
				};
				class ACE_tourniquet
				{
					name = "ACE_tourniquet";
					count = 50;
				};
		};
	};
	class IC_Tauros_GMG_snow_F;
	class IC_SL_DT_Tauros_GMG_medical_F: IC_Tauros_GMG_snow_F
	{
		scope=2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass="B_143rd_DKoK";
		Faction="B_143rd_DKoK";
		crew="DKoK_GM_1491st";
		displayName="Med Tauros (GMG)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"@DK143_Mod (ARCHIVE)\Addons\drop_troop_retextures\textures\ic_tauros_medic_co.paa",
			"IC_Tauros\data\dashboard_co.paa"
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
					count = 25;
				};
				class ACE_bloodIV_250
				{
					name = "ACE_bloodIV_250";
					count = 25;
				};
				class ACE_bloodIV_500
				{
					name = "ACE_bloodIV_500";
					count = 25;
				};
				class ACE_elasticBandage
				{
					name = "ACE_elasticBandage";
					count = 50;
				};
				class ACE_packingBandage
				{
					name = "ACE_packingBandage";
					count = 50;
				};
				class ACE_quikclot
				{
					name = "ACE_quikclot";
					count = 50;
				};
				class ACE_epinephrine
				{
					name = "ACE_epinephrine";
					count = 50;
				};
				class ACE_morphine
				{
					name = "ACE_morphine";
					count = 50;
				};
				class ACE_adenosine
				{
					name = "ACE_adenosine";
					count = 50;
				};
				class ACE_personalAidKit
				{
					name = "ACE_personalAidKit";
					count = 15;
				};
				class ACE_plasmaIV
				{
					name = "ACE_plasmaIV";
					count = 25;
				};
				class ACE_plasmaIV_250
				{
					name = "ACE_plasmaIV_250";
					count = 25;
				};
				class ACE_plasmaIV_500
				{
					name = "ACE_plasmaIV_500";
					count = 25;
				};
				class ACE_salineIV
				{
					name = "ACE_salineIV";
					count = 25;
				};
				class ACE_salineIV_250
				{
					name = "ACE_salineIV_250";
					count = 25;
				};
				class ACE_salineIV_500
				{
					name = "ACE_salineIV_500";
					count = 25;
				};
				class ACE_splint
				{
					name = "ACE_splint";
					count = 25;
				};
				class ACE_surgicalKit
				{
					name = "ACE_surgicalKit";
					count = 5;
				};
				class ACE_tourniquet
				{
					name = "ACE_tourniquet";
					count = 50;
				};
		};
	};
	class IC_Tauros_HMG_snow_F;
	class IC_SL_DT_Tauros_HMG_medical_F: IC_Tauros_HMG_snow_F
	{
		scope=2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass="B_143rd_DKoK";
		Faction="B_143rd_DKoK";
		crew="DKoK_GM_1491st";
		displayName="Med Tauros (HMG)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"@DK143_Mod (ARCHIVE)\Addons\drop_troop_retextures\textures\ic_tauros_medic_co.paa",
			"IC_Tauros\data\dashboard_co.paa"
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
					count = 25;
				};
				class ACE_bloodIV_250
				{
					name = "ACE_bloodIV_250";
					count = 25;
				};
				class ACE_bloodIV_500
				{
					name = "ACE_bloodIV_500";
					count = 25;
				};
				class ACE_elasticBandage
				{
					name = "ACE_elasticBandage";
					count = 50;
				};
				class ACE_packingBandage
				{
					name = "ACE_packingBandage";
					count = 50;
				};
				class ACE_quikclot
				{
					name = "ACE_quikclot";
					count = 50;
				};
				class ACE_epinephrine
				{
					name = "ACE_epinephrine";
					count = 50;
				};
				class ACE_morphine
				{
					name = "ACE_morphine";
					count = 50;
				};
				class ACE_adenosine
				{
					name = "ACE_adenosine";
					count = 50;
				};
				class ACE_personalAidKit
				{
					name = "ACE_personalAidKit";
					count = 15;
				};
				class ACE_plasmaIV
				{
					name = "ACE_plasmaIV";
					count = 25;
				};
				class ACE_plasmaIV_250
				{
					name = "ACE_plasmaIV_250";
					count = 25;
				};
				class ACE_plasmaIV_500
				{
					name = "ACE_plasmaIV_500";
					count = 25;
				};
				class ACE_salineIV
				{
					name = "ACE_salineIV";
					count = 25;
				};
				class ACE_salineIV_250
				{
					name = "ACE_salineIV_250";
					count = 25;
				};
				class ACE_salineIV_500
				{
					name = "ACE_salineIV_500";
					count = 25;
				};
				class ACE_splint
				{
					name = "ACE_splint";
					count = 25;
				};
				class ACE_surgicalKit
				{
					name = "ACE_surgicalKit";
					count = 5;
				};
				class ACE_tourniquet
				{
					name = "ACE_tourniquet";
					count = 50;
				};
		};
	};

};
