#define _ARMA_

class CfgPatches
{
	class DK143_ACE_Compat
	{
		author = "Siggyfreed";
		name = "DK143 TIOW ACE Compat";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgAmmo
{
	class CA_Magazine;
	class RocketBase;
	class BulletBase;
	class ShotgunBase;
	class B_127x99_Ball;
	class B_12Gauge_Pellets;
	class B_762x51_Ball;

	class SH_120mm_HE;
	
	class TIOW_PlasmagunRound: SH_120mm_HE
	{
		indirectHitRange = 3.0;
	};
	
	class TIOW_LongLas_LasBolt: BulletBase {};
    class DK143_LongLas_HPBolt: TIOW_LongLas_LasBolt
	{
		hit = 32;
		typicalSpeed = 1000;
		timetoLive = 10.0;
	};

	class Lucius98_LasBolt: BulletBase {};
	class DK143_HotShot_Lucius98_Lasbolt: Lucius98_LasBolt
	{
		hit = 14;
	};

	class M36KantRifle_LasBolt: BulletBase {};
	class DK143_KantRifle_HPBolt: M36KantRifle_LasBolt
	{
		hit = 16;
		caliber = 2;
	};

	class DK143_Medium_ManStopper: B_762x51_Ball
	{
		hit = 10;
		caliber = 1.7;
	};
	class DK143_Medium_Expanders: B_762x51_Ball
	{
		hit = 9;
		caliber = 2.5;
	};
	class DK143_Medium_Amputators: B_762x51_Ball
	{
		hit = 6;
		indirectHit = 2;
		indirectHitRange = 1;
		explosive = 0.25;
		explosionSoundEffect = "DefaultExplosion";
		craterEffects = "";
		explosionEffects = "AmputatorRoundExplosion";
	};

	class DK143_MLSmoke: RocketBase
	{
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		hit = 10;
		indirectHit = 10;
		indirectHitRange = 4;
		explosive = 1;
		caliber = 0;
		airFriction = 0.085;
		sideAirFriction = 0.085;
		maxSpeed = 500;
		initTime = 0;
		thrustTime = 1;
		thrust = 1600;
		fuseDistance = 15;
		CraterEffects = "";
		explosionEffects = "smokeMissileSmokeEffect";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,1800};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		class CamShakeExplode
		{
			power = "(35*0.2)";
			duration = "((round (35^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 35^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 85;
			duration = "((round (85^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(15^0.25)";
			duration = "((round (15^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((15^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};

	class TIOW_MLAT;
	class ammo_Penetrator_Base;
	class DK143_MLMelta: TIOW_MLAT
	{
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		hit = 400;
		indirectHit = 3;
		indirectHitRange = 1;
		submunitionAmmo = "DK143_MLMelta_Penetrator";
		CraterEffects = "ATMissileCrater";
		explosionEffects = "TIOW_Meltagun_flameExplosion";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 820;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
	};
	class DK143_MLMelta_Penetrator: ammo_Penetrator_Base
	{
		warheadName = "TandemHEAT";
		caliber = 300;
		hit = 512;
		indirectHit = 12;
		indirectHitRange = 2;
	};

	// First attempt at making mortar smoke bigger: did not work :)

	// class HandGrenade: CA_Magazine {};
	// class SmokeShell: HandGrenade {};
	// class SmokeShellArty: SmokeShell
	// {
	// 	simulation="shotSmoke";
	// 	effectsSmoke="SmokeMissileFast";
	// 	model="\A3\weapons_f\ammo\shell_smoke";
	// };

	// class ShotDeployCore;
	// class ShotDeployBase: ShotDeployCore {};
	// class Smoke_82mm_AMOS_White: ShotDeployBase
	// {
	// 	submunitionAmmo="SmokeShellArty";
	// };
};

class CfgMagazines
{
	class CA_Magazine;
	class 200Rnd_556x45_Box_F;
	class Lucius98_mag: CA_Magazine {};
	class ML700_Stubber_drum: 200Rnd_556x45_Box_F {};
	class Type14_mag: CA_Magazine
	{
		mass = 125;
	};
	class M36KantRifle_mag: CA_Magazine {};
	class DK143_KantRifleHP_Mag: M36KantRifle_mag
	{
		displayName = "[DK143] Kantrael Overcharged Laspack";
		ammo = "DK143_KantRifle_HPBolt";
		count = 20;
	};
	class TIOW_LongLas_Mag: CA_Magazine 
	{
		initSpeed = 1000;
	};
	class DK143_LongLasHP_Mag: TIOW_LongLas_Mag
	{
		displayName = "[DK143] LongLas Overcharged Powerpack";
		ammo = "DK143_LongLas_HPBolt";
		count = 10;
		descriptionShort = "[DK143] LongLas Overcharged Powerpack";
	};
	class DK143_HotShot_Lucius_Mag: Lucius98_mag
	{
		displayName = "[DK143] Lucius Hotshot Laspack";
		ammo = "DK143_HotShot_Lucius98_Lasbolt";
		count = 15;
	};
	class DK143_Expander_Drum: ML700_Stubber_Drum
	{
		displayName = "[DK143] 100rnd Stubber Expander Drum";
		displayNameShort = "Stubber Expander Drum Magazine";
		ammo = "DK143_Medium_Expanders";
		count = 100;
	};
	class DK143_Amputators_Drum: ML700_Stubber_Drum
	{
		displayName = "[DK143] 100rnd Stubber Amputators Drum";
		displayNameShort = "Stubber Amputators Drum Magazine";
		ammo = "DK143_Medium_Amputators";
		count = 100;
	};
	class DK143_ManStopper_Drum: ML700_Stubber_Drum
	{
		displayName = "[DK143] 100rnd Stubber ManStopper Drum";
		displayNameShort = "Stubber ManStopper Drum Magazine";
		ammo = "DK143_Medium_ManStopper";
		count = 100;
	};

	class TIOW_50Rnd_Stubber_mag: CA_Magazine
	{
		tracersEvery = 5;
	};
	class TIOW_50Rnd_Stubber_mag_Tracer: CA_Magazine
	{
		tracersEvery = 2;
	};
	class TIOW_50Rnd_Stubber_amput: CA_Magazine
	{
		tracersEvery = 5;
	};
	class TIOW_50Rnd_Stubber_manstop: CA_Magazine
	{
		tracersEvery = 5;
	};
	class TIOW_50Rnd_Stubber_expander: CA_Magazine
	{
		tracersEvery = 5;
	};

	class DK143_150Rnd_Hvy_Stubber_Mag: TIOW_50Rnd_Stubber_mag
	{
		displayName = "[DK143] 150 Round Heavy Stubber Magazine";
		descriptionShort = "150 Round Tracer Magazine";
		count = 150;
		mass = 30;
	};
	class DK143_150Rnd_Hvy_Stubber_Tracer_Mag: TIOW_50Rnd_Stubber_mag_Tracer
	{
		displayName = "[DK143] 150 Round Heavy Stubber Magazine, Tracers";
		descriptionShort = "150 Round Amputator Magazine";
		count = 150;
		mass = 30;
	};
	class DK143_150Rnd_Hvy_Stubber_Amput_Mag: TIOW_50Rnd_Stubber_amput
	{
		displayName = "[DK143] 150 Round Heavy Stubber Magazine, Amputators";
		descriptionShort = "150 Round Amputator Magazine";
		count = 150;
		mass = 30;
	};
	class DK143_150Rnd_Hvy_Stubber_Manstop_Mag: TIOW_50Rnd_Stubber_manstop
	{
		displayName = "[DK143] 150 Round Heavy Stubber Magazine, ManStoppers";
		descriptionShort = "150 Round ManStoppers Magazine";
		count = 150;
		mass = 30; 
	};
	class DK143_150Rnd_Hvy_Stubber_Expander_Mag: TIOW_50Rnd_Stubber_expander
	{
		displayName = "[DK143] 150 Round Heavy Stubber Magazine, Expanders";
		descriptionShort = "150 Round Expanders Magazine";
		count = 150;
		mass = 30; 
	};

	class DK_PlasmaGun_Flask: CA_Magazine
	{
		mass = 15;
	};
	
	class TIOW_IG_GL_Frag_mag: CA_Magazine {};
	class TIOW_IG_GL_Krak_mag: TIOW_IG_GL_Frag_mag {};
	class TIOW_IG_GL_Smoke_mag: TIOW_IG_GL_Frag_mag {};
	class TIOW_IG_GL_Flare_mag: TIOW_IG_GL_Frag_mag {};
	class TIOW_IG_GL_Buck_mag: TIOW_IG_GL_Frag_mag {};
	class TIOW_IG_GL_Flame_mag: TIOW_IG_GL_Frag_mag {};
	class DK143_Krieg_GL_Krak_Mag: TIOW_IG_GL_Krak_mag
	{
		displayName = "[DK143] Krieg GL Krak Magazine";
		descriptionShort = "GL (Krak)";
		mass = 1;
		count = 1;
	};
	class DK143_Krieg_GL_Smoke_Mag: TIOW_IG_GL_Smoke_mag
	{
		displayName = "[DK143] Krieg GL Smoke Magazine";
		descriptionShort = "GL (Smoke)";
		mass = 1;
		count = 1;
	};
	class DK143_Krieg_GL_Flare_Mag: TIOW_IG_GL_Flare_mag
	{
		displayName = "[DK143] Krieg GL Flare Magazine";
		descriptionShort = "GL (Flare)";
		mass = 1;
		count = 1;
	};
	class DK143_Krieg_GL_Buck_Mag: TIOW_IG_GL_Buck_mag
	{
		displayName = "[DK143] Krieg GL Buck Magazine";
		descriptionShort = "GL (Buck)";
		mass = 1;
		count = 1;
	};
	class DK143_Krieg_GL_Flame_Mag: TIOW_IG_GL_Flame_mag
	{
		displayName = "[DK143] Krieg GL Flame Magazine";
		descriptionShort = "GL (Flame)";
		mass = 1;
		count = 1;
	};

	class RPG32_F;
	class DK143_MLSmoke_Mag: RPG32_F
	{
		author = "Siggyfreed";
		scope = 2;
		displayName = "Smoke Missile";
		displaynameShort = "Smoke";
		descriptionShort = "";
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
		picture = "\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
		initSpeed = 140;
		ammo = "DK143_MLSmoke";
		type = "2*	256";
		mass = 30;
	};
	class DK143_MLMelta_Mag: RPG32_F
	{
		author = "Siggyfreed";
		scope = 2;
		displayName = "Melta Missile";
		displaynameShort = "Melta";
		descriptionShort = "";
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
		picture = "\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
		initSpeed = 140;
		ammo = "DK143_MLMelta";
		type = "2*	256";
		mass = 30;
	};
};

class CfgVehicles
{
	class FlagCarrierCore;
	class FlagCarrier: FlagCarrierCore{};
	class DK143_Flag: FlagCarrier
	{
		author="Siggyfreed";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_NATO_F.jpg";
		_generalMacro="DK143_Flag";
		scope=2;
		scopeCurator=2;
		displayName="DK143 Flag";
		hiddenSelectionsTextures[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
        };
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\143rdMod\build\ace_compat\Images\DK143Flag_CO.paa'";
        };
	};

	// Can't confirm functionality at current.
	// class ACE_Explosives_Place;
	// class DK143_Melta_Place: ACE_Explosives_Place
	// {
	// 	displayName = "Melta Bomb";
	// 	model = "E:\Program Files (x86)\Steam\steamapps\common\Arma 3\!Workshop\@There is Only War Mod - Release 5 BETA\Addons\TIOW_IG_Explosives\TIOW_IG_Explosives\tiow_ig_melta_bomb_placeable\ig_melta_bomb_placeable_mag.p3d";
	// 	ACE_offset[] = {0,0,0};
	// };

    class Man;
    class CAManBase: Man{
        class HitPoints {
            class HitFace;
            class HitNeck;
            class HitHead;
            class HitPelvis;
            class HitAbdomen;
            class HitDiaphragm;
            class HitChest;
            class HitBody;
            class HitArms;
            class HitHands;
            class HitLegs;
        };
    };

    class SoldierWB: CAManBase {};
    class B_Soldier_base_F: SoldierWB{};
    class B_Soldier_F: B_Soldier_base_F {};
	class ReammoBox;
	class Bag_Base: ReammoBox {};
	class B_AssaultPack_Base: Bag_Base {};

	// Backpacks

	// ALL PACKS REDEFINED TO MATCH CARRYALL LOAD <ROWAN>
	class DKoK_BackPack: B_AssaultPack_Base
	{
		maximumLoad = 320;
	};
	class DKoK_AT_BackPack: B_AssaultPack_Base
	{
		maximumLoad = 320;
	};
	class DKoK_Eng_BackPack: B_AssaultPack_Base
	{
		maximumLoad = 320;
	};
	class DKoK_HeavyStubberBackPack: B_AssaultPack_Base
	{
		maximumLoad = 320;
	};
	class TIOW_IG_Vox_Caster: Bag_Base
	{
		maximumLoad = 320;
	};
	class TIOW_CadBackpack: B_AssaultPack_Base
	{
		maximumLoad = 320;
	};
	class TIOW_CadBackpack_Winter: B_AssaultPack_Base
	{
		maximumLoad = 320;
	};

	// Invisible vox caster
	class DK143_Voxcaster_Invisible: TIOW_IG_Vox_Caster
	{
		author = "Rowan";
		displayName = "[DK143] Voxcaster (Invisible)";
		model = "\A3\Weapons_F\empty.p3d";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3\Weapons_F\empty.p3d",""
		};
	};

	// Storage adjustments
	class ThingX;
	class land_simple_muni_blue1b: ThingX {};
	class TIOW_IG_Ammobox1_836: ThingX
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class TIOW_IG_WeaponBox1_836: ThingX
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class TIOW_IG_WeaponBox2_836: ThingX
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class TIOW_IG_GrenadierBox1_DKOK: ThingX
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class TIOW_IG_WeaponBox1_DKOK: ThingX
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class TIOW_IG_WeaponBox2_DKOK: ThingX	
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class TIOW_IG_Ammobox1_DKOK: ThingX	
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class land_mini_muni_204: land_simple_muni_blue1b	
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
	class land_Mini_Muni2_tech: land_mini_muni_204	
	{
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;
	};
};

class Mode_FullAuto; //Required to adjust T14 firemode inheritance
class CfgWeapons
{
    class HeadgearItem;
    class VestItem;
    class UniformItem;
    class ItemCore;
    class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

	class Rifle;
	class Rifle_Base_F: Rifle 
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F: Rifle_Base_F {};
	class LMG_Mk200_F;
	class ML700_MachineGun_Base: LMG_Mk200_F {};
	class ML700_LMG_Stubber_base_F: ML700_MachineGun_Base {};

	class Type14Heavy: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.125;
		};
	};
	
	class TIOW_KriegLauncher: Rifle_Base_F // Lowered reload speed of GL launcher to make up for single shot <ERIC>
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.20;
		};
	};

	class launch_RPG7_F;
	class MissileLauncherDKOK: launch_RPG7_F
	{
		magazines[] = {"MLAT_Mag", "MLHE_Mag", "DK143_MLMelta_Mag", "DK143_MLSmoke_Mag"};
	};

	class TIOW_LongLas_Base: arifle_MX_Base_F
	{
		magazines[] = {"TIOW_LongLas_Mag","DK143_LongLasHP_Mag"};
	};
	class M36KantRifleBase: arifle_MX_Base_F
	{
		magazines[] = {"M36KantRifle_mag","DK143_KantRifleHP_Mag"};
	};
	class Lucius98Lasgun: Rifle_Base_F
	{
		magazines[] = {"Lucius98_mag", "DK143_HotShot_Lucius_Mag"};
	};
	class Lucius98LasgunBlackS: Lucius98Lasgun{};

	// ADD MARKSMAN VARIANTS OF THE LUCIUS RIFLE <ROWAN>
	class Lucius98Marksman: Lucius98LasgunBlackS
	{
		author = "Rowan";
		displayName = "[DK143]Lucius Pattern No. 98 - Marksman";

		// ADD THE TIOW TYPE 14 OPTICS TO THE LUCIUS RIFLE.  NEW P3D REQUIRED SINCE IT SHOOTS HIGH AND LEFT. <ROWAN>
		modelOptics = "\DKoK_Weapons\Type14_Optic.p3d";				
        opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
        opticsZoomMin = 0.0625;
        opticsZoomMax = 0.0625;
        opticsZoomInit = 0.0625;
	}
	class LuciusMarcoLoco: Lucius98LasgunBlackS
	{
		author = "Rowan";
		displayName = "[DK143]Lucius Pattern No. 98 'El Marco Loco'";

		// THIS IS A MEME, THERE IS NO OPTIC P3D BOUND.  IT LITERALLY ZOOMS IN ON THE IRON SIGHTS. <ROWAN>
        opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
        opticsZoomMin = 0.0625;
        opticsZoomMax = 0.0625;
        opticsZoomInit = 0.0625;
	}

	class ML700_LMG_Stubber_Black: ML700_LMG_Stubber_base_F
	{
		magazines[] = {"ML700_Stubber_Drum","ML700_Stubber_Drum_Green","ML700_Stubber_Drum_Red","ML700_Stubber_Drum_Yellow", "DK143_Expander_Drum", "DK143_Amputators_Drum", "DK143_ManStopper_Drum"};
	};
	class ML700_LMG_Stubber_Green: ML700_LMG_Stubber_Black
	{
		magazines[] = {"ML700_Stubber_Drum","ML700_Stubber_Drum_Green","ML700_Stubber_Drum_Red","ML700_Stubber_Drum_Yellow", "DK143_Expander_Drum", "DK143_Amputators_Drum", "DK143_ManStopper_Drum"};
	};
	class KriegHeavyStubber: Rifle_Base_F 
	{
		magazines[] = {"TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag_Tracer","TIOW_50Rnd_Stubber_amput","TIOW_50Rnd_Stubber_manstop","TIOW_50Rnd_Stubber_expander", "DK143_150Rnd_Hvy_Stubber_Expander_Mag", "DK143_150Rnd_Hvy_Stubber_Manstop_Mag", "DK143_150Rnd_Hvy_Stubber_Amput_Mag", "DK143_150Rnd_Hvy_Stubber_Tracer_Mag", "DK143_150Rnd_Hvy_Stubber_Mag"};
	};

	class TIOW_KriegLauncher: Rifle_Base_F
	{
		magazines[] = {"TIOW_Krieg_LauncherFrag_mag", "DK143_Krieg_GL_Krak_Mag", "DK143_Krieg_GL_Smoke_Mag", "DK143_Krieg_GL_Flare_Mag", "DK143_Krieg_GL_Buck_Mag", "DK143_Krieg_GL_Flame_Mag", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell"};
	};


/*

 Vests

*/

	// Invisible Flak Weave, medium 
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class DK143_ArmorBase: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: VestItem
		{
			maximumLoad = 0;
			mass = 0;
		};
	};
	class DK143_Flak_Weave: DK143_ArmorBase
	{
		author = "Siggyfreed";
		displayName = "[DK143] Flak Weave";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\A3\Weapons_F\empty.p3d";
		descriptionShort = "Invisible uniform Flak Weave";
		class ItemInfo: VestItem
		{	
			uniformModel = "\A3\Weapons_F\empty.p3d";
			containerClass = "Supply140";
			maximumLoad = 0;
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};

	// DK Engineer Armor, Explosive resistant.
    class DKoK_Gear: ItemCore 
	{
		class ItemInfo;
	};

    class DKoK_Eng_Armor: DKoK_Gear
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.60000002;
				};
			};
        };
    };
	// DK Grenadier Armor, Heavy.
    class DKoK_Gren_Armor: DKoK_Gear
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.1;
				};
			};
        };
    };

};
