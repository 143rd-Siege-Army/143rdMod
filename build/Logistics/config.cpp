class CfgPatches
{
	class DK143_Logistics
	{
		units[] = {"143_DKOK_Ammobox","143_CustomAmmobox_1","143_CustomAmmobox_2","143_CustomAmmobox_3","143_CustomAmmobox_4","143_CustomAmmobox_5","143_CustomAmmobox_6","143_CustomAmmobox_7","143_CustomAmmobox_8","143_CustomAmmobox_9","143_CustomAmmobox_10","143_CustomAmmobox_11","143_CustomAmmobox_12","143_CustomAmmobox_13","143_CustomAmmobox_14","143_CustomAmmobox_15"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredaddons[] = {"DkoKFoot"};
	};
};

class CfgEditorCategories
{
	class 143rd_Objects
	{
		displayName = "143rd Objects";
		priority = 1;
		side = 1;
	};
};
class CfgEditorSubcategories
{
	class 143rd_Storage
	{
		displayName = "143rd Storage";
	};
};

class CfgVehicles {
	class All{};
	class Static: All{};
	class Building: Static{};
	class NonStrategic: Building{};
	class TargetTraining: NonStrategic{};
	class TargetGrenade: TargetTraining{};
	class House_F;
	class ThingX;
	class TIOW_IG_WeaponBox1_DKOK;
	class 143_DKOK_Ammobox : TIOW_IG_WeaponBox1_DKOK 
	{
			displayName = "Death Korps Ammo Box";
			scope = 2; scopeCurator = 2;
			descriptionShort = "Ammobox";
			editorCategory = "143rd_Objects";
			editorSubcategory = "143rd_Storage";
			//These code lines increase the storage Capacity of the box
			maximumLoad = 100000;
			transportMaxWeapons = 100000;
			transportMaxMagazines = 100000;
			transportMaxItems = 100000;
			//end of storage capacity fix
			class TransportWeapons
			{ // this class controls what weapons can be found in the box
				class Lucius98LasgunBlackS
				{
					weapon = "Lucius98LasgunBlackS";
					count = 15;
				};
				class LuciusLaspistolBlack
				{
					weapon = "LuciusLaspistolBlack";
					count = 10;
				};
			};
			class TransportMagazines
			{ // this class controls what magazines can be found in the box
				class Lucius98_mag
				{
					magazine = "Lucius98_mag";
					count = 100;
				};
				class DK143_HotShot_Lucius_Mag
				{
					magazine = "DK143_HotShot_Lucius_Mag";
					count = 50;
				};
				class LuciusLaspistol_mag
				{
					magazine = "LuciusLaspistol_mag";
					count = 50;
				};
			};
	};
	
	//now after defining base class (a bit too much but hey who tf cares)
	class 143_CustomAmmobox_1 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Plasma Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class DK_PlasmaGun
				{
					weapon = "DK_PlasmaGun";
					count = 10;
				};
				class TIOW_Guard_Plasma_Pistol
				{
					weapon = "TIOW_Guard_Plasma_Pistol";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class TIOW_IGPlasmaPistol_Mag
				{
					magazine = "TIOW_IGPlasmaPistol_Mag";
					count = 20;
				};
				class TIOW_IGPlasmaPistol_OC_Mag
				{
					magazine = "TIOW_IGPlasmaPistol_OC_Mag";
					count = 10;
				};
				class DK_PlasmaGun_Flask
				{
					magazine = "DK_PlasmaGun_Flask";
					count = 20;
				};
				class DK_Overcharge_PlasmaGun_Flask
				{
					magazine = "DK_Overcharge_PlasmaGun_Flask";
					count = 10;
				};
		};
	};

	class 143_CustomAmmobox_2 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Launcher Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class MissileLauncherDKOKBlack
				{
					weapon = "MissileLauncherDKOKBlack";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class MLAT_Mag
				{
					magazine = "MLAT_Mag";
					count = 10;
				};
				class MLHE_Mag
				{
					magazine = "MLHE_Mag";
					count = 10;
				};
				class VNG_MLSmoke_Mag
				{
					magazine = "VNG_MLSmoke_Mag";
					count = 10;
				};
				class VNG_MLMelta_Mag
				{
					magazine = "VNG_MLMelta_Mag";
					count = 3;
				};
		};
	};
	class 143_CustomAmmobox_3 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Melta Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class TIOW_MeltaGun_01
				{
					weapon = "TIOW_MeltaGun_01";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class TIOW_Meltagun_Mag
				{
					magazine = "TIOW_Meltagun_Mag";
					count = 25;
				};
		};
	};
	class 143_CustomAmmobox_4 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Grenade Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class TIOW_KriegLauncher
				{
					weapon = "TIOW_KriegLauncher";
					count = 10;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class TIOW_Krieg_LauncherFrag_mag
				{
					magazine = "TIOW_Krieg_LauncherFrag_mag";
					count = 15;
				};
				class DK143_Krieg_GL_Krak_Mag
				{
					magazine = "DK143_Krieg_GL_Krak_Mag";
					count = 15;
				};
				class DK143_Krieg_GL_Smoke_Mag
				{
					magazine = "DK143_Krieg_GL_Smoke_Mag";
					count = 15;
				};
				class DK143_Krieg_GL_Flare_Mag
				{
					magazine = "DK143_Krieg_GL_Flare_Mag";
					count = 15;
				};
				class DK143_Krieg_GL_Buck_Mag
				{
					magazine = "DK143_Krieg_GL_Buck_Mag";
					count = 15;
				};
				class DK143_Krieg_GL_Flame_Mag
				{
					magazine = "DK143_Krieg_GL_Flame_Mag";
					count = 15;
				};
				class TIOW_ig_frag_grenade_mag
				{
					magazine = "TIOW_ig_frag_grenade_mag";
					count = 25;
				};
				class TIOW_ig_krak_grenade_mag
				{
					magazine = "TIOW_ig_krak_grenade_mag";
					count = 25;
				};
				class TIOW_ig_melta_bomb_mag
				{
					magazine = "TIOW_ig_melta_bomb_mag";
					count = 5;
				};
				class TIOW_ig_smoke_grenade_mag
				{
					magazine = "TIOW_ig_smoke_grenade_mag";
					count = 15;
				};
		};
	};
	class 143_CustomAmmobox_5 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Kinetic Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class Lucius22c
				{
					weapon = "Lucius22c";
					count = 5;
				};
				
				class ML700_LMG_Stubber_Black
				{
					weapon = "ML700_LMG_Stubber_Black";
					count = 5;
				};
				class KriegHeavyStubberDK
				{
					weapon = "KriegHeavyStubberDK";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class Lucius22c_Solid
				{
					magazine = "Lucius22c_Solid";
					count = 30;
				};
				class Lucius22c_Pellet
				{
					magazine = "Lucius22c_Pellet";
					count = 30;
				};
				class TIOW_50Rnd_Stubber_mag
				{
					magazine = "TIOW_50Rnd_Stubber_mag";
					count = 30;
				};
				class TIOW_50Rnd_Stubber_mag_Tracer
				{
					magazine = "TIOW_50Rnd_Stubber_mag_Tracer";
					count = 30;
				};
				class TIOW_50Rnd_Stubber_amput
				{
					magazine = "TIOW_50Rnd_Stubber_amput";
					count = 30;
				};
				class TIOW_50Rnd_Stubber_manstop
				{
					magazine = "TIOW_50Rnd_Stubber_manstop";
					count = 30;
				};
				class TIOW_50Rnd_Stubber_expander
				{
					magazine = "TIOW_50Rnd_Stubber_expander";
					count = 30;
				};
				class VNG_100Rnd_Stubber_mag
				{
					magazine = "VNG_100Rnd_Stubber_mag";
					count = 30;
				};
				class VNG_100Rnd_Stubber_mag_Tracer
				{
					magazine = "VNG_100Rnd_Stubber_mag_Tracer";
					count = 30;
				};
				class VNG_100Rnd_Stubber_amput
				{
					magazine = "VNG_100Rnd_Stubber_amput";
					count = 30;
				};
				class VNG_100Rnd_Stubber_manstop
				{
					magazine = "VNG_100Rnd_Stubber_manstop";
					count = 30;
				};
				class VNG_100Rnd_Stubber_expander
				{
					magazine = "VNG_100Rnd_Stubber_expander";
					count = 30;
				};
				class VNG_150Rnd_Stubber_mag
				{
					magazine = "VNG_150Rnd_Stubber_mag";
					count = 30;
				};
				class VNG_150Rnd_Stubber_mag_Tracer
				{
					magazine = "VNG_150Rnd_Stubber_mag_Tracer";
					count = 30;
				};
				class VNG_150Rnd_Stubber_amput
				{
					magazine = "VNG_150Rnd_Stubber_amput";
					count = 30;
				};
				class ML700_Stubber_Drum
				{
					magazine = "VNG_150Rnd_Stubber_amput";
					count = 30;
				};
				class ML700_Stubber_Drum_Green
				{
					magazine = "VNG_150Rnd_Stubber_amput";
					count = 30;
				};
				class ML700_Stubber_Drum_Red
				{
					magazine = "VNG_150Rnd_Stubber_amput";
					count = 30;
				};
				class ML700_Stubber_Drum_Yellow
				{
					magazine = "VNG_150Rnd_Stubber_amput";
					count = 30;
				};
		};
	};
	class 143_CustomAmmobox_6 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Type 14 Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class Type14HeavyBlack
				{
					weapon = "Type14HeavyBlack";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class Type14_mag
				{
					magazine = "Type14_mag";
					count = 10;
				};
		};
	};
	class 143_CustomAmmobox_7 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Sniper Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class TIOW_LongLas_776
				{
					weapon = "TIOW_LongLas_776";
					count = 5;
				};
				class ML700_Longlas_Aquila_Skull_Rifle_Black
				{
					weapon = "ML700_Longlas_Aquila_Skull_Rifle_Black";
					count = 5;
				};
				class srifle_GM6_F
				{
					weapon = "srifle_GM6_F";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class TIOW_LongLas_Mag
				{
					magazine = "TIOW_LongLas_Mag";
					count = 20;
				};
				class DK143_LongLasHP_Mag
				{
					magazine = "DK143_LongLasHP_Mag";
					count = 20;
				};
				class ML700_Longlas_Rifle_B_Battery
				{
					magazine = "ML700_Longlas_Rifle_B_Battery";
					count = 15;
				};
				class ML700_Longlas_Heavy_Rifle_B_Battery
				{
					magazine = "ML700_Longlas_Heavy_Rifle_B_Battery";
					count = 15;
				};
				class A5Rnd_127x108_APDS_Mag
				{
					magazine = "5Rnd_127x108_APDS_Mag";
					count = 30;
				};
				class A5Rnd_127x108_Mag
				{
					magazine = "5Rnd_127x108_Mag";
					count = 30;
				};
				class ACE_5Rnd_127x99_Mag
				{
					magazine = "ACE_5Rnd_127x99_Mag";
					count = 30;
				};
				class ACE_5Rnd_127x99_AMAX_Mag
				{
					magazine = "ACE_5Rnd_127x99_AMAX_Mag";
					count = 30;
				};
				class ACE_5Rnd_127x99_API_Mag
				{
					magazine = "ACE_5Rnd_127x99_API_Mag";
					count = 30;
				};
		};
	};
	class 143_CustomAmmobox_8 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Medicae Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{
		};

		class TransportMagazines
		{
		};
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
					count = 25;
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
					count = 50;
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
	class 143_CustomAmmobox_9 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Engineering Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class DKOK_Mole_Launcher_1
				{
					weapon = "DKOK_Mole_Launcher_1";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class Mol_AT_Mag
				{
					magazine = "Mol_AT_Mag";
					count = 10;
				};
				class Mol_HE_Mag
				{
					magazine = "Mol_HE_Mag";
					count = 10;
				};
		};
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class ACE_Fortify
				{
					name = "ACE_Fortify";
					count = 5;
				};
				class ACE_DefusalKit
				{
					name = "ACE_DefusalKit";
					count = 10;
				};
				class ToolKit
				{
					name = "ToolKit";
					count = 10;
				};
		};
	};
	class 143_CustomAmmobox_10 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Equipment Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{
		};

		class TransportMagazines
		{
		};
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class TFAR_anprc152
				{
					name = "TFAR_anprc152";
					count = 10;
				};
				class ACE_EntrenchingTool
				{
					name = "ACE_EntrenchingTool";
					count = 20;
				};
				class Laserdesignator
				{
					name = "Laserdesignator";
					count = 15;
				};
				class TIOW_CadPreysenseGoggles
				{
					name = "TIOW_CadPreysenseGoggles";
					count = 20;
				};
				class TIOW_CadPhotovisorGoggles
				{
					name = "TIOW_CadPhotovisorGoggles";
					count = 20;
				};
				class ItemCompass
				{
					name = "ItemCompass";
					count = 20;
				};
				class ItemMap
				{
					name = "ItemMap";
					count = 20;
				};
				class ItemGPS
				{
					name = "ItemGPS";
					count = 20;
				};
				class ItemMicroDAGR
				{
					name = "ItemMicroDAGR";
					count = 20;
				};
				class ItemcTab
				{
					name = "ItemcTab";
					count = 20;
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
				class ACE_morphine
				{
					name = "ACE_morphine";
					count = 50;
				};
				class ACE_epinephrine
				{
					name = "ACE_epinephrine";
					count = 50;
				};
				class ACE_splint
				{
					name = "ACE_splint";
					count = 50;
				};
				class ACE_tourniquet
				{
					name = "ACE_tourniquet";
					count = 50;
				};
		};
	};
	class 143_CustomAmmobox_11 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Flamer Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class TIOW_Krieg_Flamer
				{
					weapon = "TIOW_Krieg_Flamer";
					count = 5;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class TIOW_Krieg_Flamer_mag
				{
					magazine = "TIOW_Krieg_Flamer_mag";
					count = 25;
				};
		};
	};
	class 143_CustomAmmobox_12 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Bolter Ammo Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{ // this class controls what weapons can be found in the box
			    class TIOW_Guard_Bolter_2
				{
					weapon = "TIOW_Guard_Bolter_2";
					count = 2;
				};
				class TIOW_Guard_Bolter_1
				{
					weapon = "TIOW_Guard_Bolter_1";
					count = 2;
				};
				class ML700_Bolter_F
				{
					weapon = "ML700_Bolter_F";
					count = 2;
				};
				class ML700_Bolter_F_Silver
				{
					weapon = "ML700_Bolter_F_Silver";
					count = 2;
				};
				class TIOW_Bolt_Pistol
				{
					weapon = "TIOW_Bolt_Pistol";
					count = 2;
				};
				class TIOW_Bolt_Pistol2
				{
					weapon = "TIOW_Bolt_Pistol2";
					count = 2;
				};
		};
		class TransportMagazines
		{ // this class controls what magazines can be found in the box
				class ML700_Bolter_Stanag
				{
					magazine = "ML700_Bolter_Stanag";
					count = 10;
				};
				class ML700_Bolter_Metalstorm
				{
					magazine = "ML700_Bolter_Metalstorm";
					count = 10;
				};
				class ML700_BoltPistol_Stanag
				{
					magazine = "ML700_BoltPistol_Stanag";
					count = 10;
				};
				class ML700_BoltPistol_Metalstorm
				{
					magazine = "ML700_BoltPistol_Metalstorm";
					count = 10;
				};
				class TIOW_IGBoltPistol_Mag
				{
					magazine = "TIOW_IGBoltPistol_Mag";
					count = 10;
				};
				class TIOW_Guard_BoltMag
				{
					magazine = "TIOW_Guard_BoltMag";
					count = 10;
				};
		};
	};
	class 143_CustomAmmobox_13 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Mine Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
				class AT
				{
					magazine = "ATMine_Range_Mag";
					count = 5;
				};
				class AP
				{
					magazine = "APERSMine_Range_Mag";
					count = 5;
				};
				class APERS
				{
					magazine = "APERSMineDispenser_Mag";
					count = 5;
				};
		};
		class TransportItems
		{ // this class controls what magazines can be found in the box
				
				class FiringDevice1
				{
					name = "ACE_M26_Clacker";
					count = 5;
				};
		};
	};
	class 143_CustomAmmobox_14 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Explosive Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
				class DemoBlock
				{
					magazine = "DemoCharge_Remote_Mag";
					count = 5;
				};
				class MeltaCharge
				{
					magazine = "TIOW_melta_bomb_placeable_Mag";
					count = 1;
				};
				class Satchel
				{
					magazine = "SatchelCharge_Remote_Mag";
					count = 5;
				};
		};
		class TransportItems
		{ // this class controls what magazines can be found in the box
				
				class FiringDevice2
				{
					name = "ACE_M26_Clacker";
					count = 5;
				};
		};
	};
	class 143_CustomAmmobox_15 : 143_DKOK_Ammobox
	{
		displayName = "Death Korps Gear Box";
		scope = 2; scopeCurator = 2;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{ // this class controls what magazines can be found in the box
				class DKoK_GM_Helm_1489th
				{
					name = "DKoK_GM_Helm_1489th";
					count = 5;
				};
				class DKoK_GM_Helm_1491st
				{
					name = "DKoK_GM_Helm_1491st";
					count = 5;
				};
				class DKoK_GM_Uniform_1489th
				{
					name = "DKoK_GM_Uniform_1489th";
					count = 5;
				};
				class DKoK_GM_Uniform_1491st
				{
					name = "DKoK_GM_Uniform_1491st";
					count = 5;
				};
				class DKoK_Gren_Uniform_1491st
				{
					name = "DKoK_Gren_Uniform_1491st";
					count = 5;
				};
				class DKoK_Eng_Uniform_1491st
				{
					name = "DKoK_Eng_Uniform_1491st";
					count = 5;
				};
				class DKoK_Off_Uniform_1491st
				{
					name = "DKoK_Off_Uniform_1491st";
					count = 5;
				};
				class kc_coat
				{
					name = "kc_coat";
					count = 5;
				};
				class DKoK_QM_Uniform_1491st
				{
					name = "DKoK_QM_Uniform_1491st";
					count = 5;
				};
				class DKoK_Eng_Armor_1491st
				{
					name = "DKoK_Eng_Armor_1491st";
					count = 5;
				};
				class DKoK_Gren_Armor_1491st
				{
					name = "DKoK_Gren_Armor_1491st";
					count = 5;
				};
				class DK143_Flak_Weave
				{
					name = "DK143_Flak_Weave";
					count = 5;
				};
				class VNG_Captain_Armor
				{
					name = "VNG_Captain_Armor";
					count = 5;
				};
				class DKoK_AT_BackPack
				{
					name = "DKoK_AT_BackPack";
					count = 5;
				};
				class DKoK_BackPack
				{
					name = "DKoK_BackPack";
					count = 5;
				};
				class DKoK_Eng_BackPack
				{
					name = "DKoK_Eng_BackPack";
					count = 5;
				};
				class DKoK_HeavyStubberBackPack
				{
					name = "DKoK_HeavyStubberBackPack";
					count = 5;
				};
				class DKoK_PlasmaBackPack
				{
					name = "DKoK_PlasmaBackPack";
					count = 5;
				};
				class TIOW_Vox_Caster_Black
				{
					name = "TIOW_Vox_Caster_Black";
					count = 5;
				};
				class TIOW_IG_Vox_Caster
				{
					name = "TIOW_IG_Vox_Caster";
					count = 5;
				};
				class DK143_Voxcaster_Invisible
				{
					name = "DK143_Voxcaster_Invisible";
					count = 5;
				};
		};
	};
};