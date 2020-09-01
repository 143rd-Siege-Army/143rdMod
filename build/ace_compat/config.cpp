#define _ARMA_

class CfgPatches
{
	class DK143_ACE_Compat
	{
		author = "Siggyfreed";
		name = "DK143 TIOW ACE Compat";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "ML700_Weapons"}; 
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgAmmo
{
	class BulletBase;
	class ShotgunBase;
	class B_127x99_Ball;
	class B_12Gauge_Pellets;
	class B_762x51_Ball;
	// class medium_hit: BulletBase
	// {
	// 	hit = 9;
	// 	timeToLive = 0.0675;
	// };
	// class light_hit: medium_hit
	// {
	// 	hit = 5;
	// };
	// class hard_hit: medium_hit
	// {
	// 	hit = 12;
	// };
	class TIOW_LongLas_LasBolt: BulletBase
	{
		hit = 16;
		typicalSpeed = 1000;
		timetolive = 8.0;
	};
    class DK143_LongLas_HPBolt: TIOW_LongLas_LasBolt
	{
		hit = 32;
		typicalSpeed = 1000;
		timetoLive = 10.0;
	};
	class Shoota1Round: BulletBase 
	{
		hit = 9;
    };
	class Lucius98_LasBolt: BulletBase
	{
		hit = 10;
	};
	class DK143_HotShot_Lucius98_Lasbolt : Lucius98_LasBolt
	{
		//caliber for the lucius is already 3, so upping damage to 14 should significantly increase performance to match/exceed the Kantreal
		hit = 14;
	};
	class TIOW_Antioc43_LasBolt: Lucius98_LasBolt
	{
		hit = 9;
	};
	class TIOW_Antioc43_LasBoltHeavy: Lucius98_LasBolt
	{
		hit = 13;
	};
	class Type14_LasBolt: BulletBase
	{
		hit = 11.6;
		caliber = 3;
	};
	class Lucius22c_Pellets: ShotgunBase
	{
		hit = 2;
	};
	class M36KantRifle_LasBolt: Bulletbase
	{
		hit = 9;
	};
	class DK143_KantRifle_HPBolt: M36KantRifle_LasBolt
	{
		hit = 16;
		caliber = 2;
	};
	class TIOW_IGBoltRound: BulletBase
	{
		hit = 5;
	};
	class Long825: BulletBase
	{
		hit = 8;
	};
	class TIOW_Long825HS: Long825
	{
		hit = 10;
	};
	class TIOW_Long825HSA: Long825
	{
		hit = 7;
	};
	class TIOW_Long825HSER: Long825
	{
		hit = 12;
	};
	class TIOW_Long825HSMS: Long825
	{
		hit = 11.6;
	};
	class TIOW_blaster_pulseshot: B_12Gauge_Pellets 
	{
		hit = 2;
    };
	class TIOW_rifle_pulseshot: B_127x99_Ball 
	{
		hit = 11.6;
	};
	class TIOW_pulse_pistol_shot: TIOW_rifle_pulseshot 
	{
		hit = 5;
	};
	
	//Grim Dark edits here
	//Create new ammoumnition for medium stubber
	class DK143_Medium_ManStopper : B_762x51_Ball
	{
		hit = 10;
		caliber = 1.7;
	};
	
	class DK143_Medium_Expanders : B_762x51_Ball
	{
		hit = 9;
		caliber = 2.5
	};
	
	class DK143_Medium_Amputators : B_762x51_Ball
	{
		hit = 6;
		indirectHit = 2;
		indirectHitRange = 1;
		explosive = 0.25;
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "";
		explosionEffects = "AmputatorRoundExplosion";
		
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class Type14_mag: CA_Magazine
	{
		mass = 175;
	};
	class M36KantRifle_mag: CA_Magazine {};
	class DK143_KantRifleHP_Mag: M36KantRifle_mag
	{
		displayName = "[DK143] Kantrael Overcharged Laspack";
		ammo = "DK143_KantRifle_HPBolt";
		count = 20;
	};
	
	//DKK hotshot laspack
	class Lucius98_mag : CA_Magazine {};
	class DK143_HotShot_Lucius_Mag : Lucius98_mag 
	{ 
		displayName = "[DK143] Lucius Hotshot Laspack"; 
		ammo = "DK143_HotShot_Lucius98_Lasbolt"; 
		count = 15;
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
	
	//Grim Dark Medium Stubber Mags go HERE
	class 200Rnd_556x45_Box_F; //import base class
	class ML700_Stubber_Drum: 200Rnd_556x45_Box_F {}; // import the GD class for the base mag
	
	class DK143_Expander_Drum : ML700_Stubber_Drum // Expanders Drum
	{
		displayname = "100rnd Stubber Expander Drum";
		displaynameshort = "Stubber Expander Drum Magazine";
		ammo = "DK143_Medium_Expanders";
		count = 100;
	};
	
	class DK143_Amputators_Drum : ML700_Stubber_Drum // Amputators
	{
		displayname = "100rnd Stubber Amputators Drum";
		displaynameshort = "Stubber Amputators Drum Magazine";
		ammo = "DK143_Medium_Amputators";
		count = 100;
	};
	
	class DK143_ManStopper_Drum : ML700_Stubber_Drum // Manstoppers
	{
		displayname = "100rnd Stubber ManStopper Drum";
		displaynameshort = "Stubber ManStopper Drum Magazine";
		ammo = "DK143_Medium_ManStopper";
		count = 100;
	};
	
	// Heavy Stubber larger mags
	// call TIOW classes for inheritance
	class TIOW_50Rnd_Stubber_mag: CA_Magazine 
	{
		tracersEvery = 5;
	};
	class TIOW_50Rnd_Stubber_mag_Tracer: TIOW_50Rnd_Stubber_mag 
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
	
	// now to define larger mags for the heavy stubber
	class DK143_150Rnd_Hvy_Stubber_Mag : TIOW_50Rnd_Stubber_mag 
	{
		displayName = "150 Round Heavy Stubber Magazine";
		descriptionShort = "150 Round Magazine";
		count = 150;
		mass = 30; 
	};
	
	class DK143_150Rnd_Hvy_Stubber_Tracer_Mag : TIOW_50Rnd_Stubber_mag_Tracer
	{
		displayName = "150 Round Heavy Stubber Magazine, Tracers";
		descriptionShort = "150 Round Tracer Magazine";
		count = 150;
		mass = 30; 
	};
	
	class DK143_150Rnd_Hvy_Stubber_Amput_Mag : TIOW_50Rnd_Stubber_amput
	{
		displayName = "150 Round Heavy Stubber Magazine, Amputators";
		descriptionShort = "150 Round Amputator Magazine";
		count = 150;
		mass = 30; 
	};
	
	class DK143_150Rnd_Hvy_Stubber_Manstop_Mag : TIOW_50Rnd_Stubber_manstop
	{
		displayName = "150 Round Heavy Stubber Magazine, ManStoppers";
		descriptionShort = "150 Round ManStoppers Magazine";
		count = 150;
		mass = 30; 
	};
	
	class DK143_150Rnd_Hvy_Stubber_Expander_Mag : TIOW_50Rnd_Stubber_expander
	{
		displayName = "150 Round Heavy Stubber Magazine, Expanders";
		descriptionShort = "150 Round Expanders Magazine";
		count = 150;
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
            init="(_this select 0) setFlagTexture '143rdMod\build\ace_compat\Images\DK143Flag_CO.paa'";
        };
	};

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

	// Vox Caster Storage

	class Bag_Base;
	class TIOW_IG_Vox_Caster: Bag_Base
	{
		maximumLoad = 80;
	};

	// Invisible vox caster
	class DK143_Voxcaster_Invisible: TIOW_IG_Vox_Caster
	{
		author = "Cpt. Stinkyrowanbutt";
		displayName = "[Krieg] Voxcaster (Invisible)";
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

	/*

	Uniforms: Note that uniforms are being adjusted in TIOW by adjusting the health values of their base soldier classes.

	*/

	// Space Marine

	class TIOWSpaceMarine_Base: SoldierWB
	{
        armor=40;
        armorStructural=10;
        explosionShielding=10.25;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=100;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=100;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=100;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=600;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=100;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=100;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=100;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=300;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=300;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=300;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
	};

	// Orks
	class I_Soldier_base_F: SoldierWB{};
	class Naked1: I_Soldier_base_F 
	{
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
		{
			class HitFace 
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.100000;
				radius = 0.080000;
				explosionShielding = 0.100000;
				minimalHit = 0.010000;
			};
			class HitNeck: HitFace 
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.100000;
				radius = 0.100000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
			};
			class HitHead: HitNeck 
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitAbdomen: HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitDiaphragm: HitAbdomen 
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitChest: HitDiaphragm 
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitBody: HitChest 
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.100000;
				radius = 0.160000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms 
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
			};
			class HitHands: HitArms 
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
				depends = "HitArms";
			};
			class HitLegs 
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.120000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
	};
	class Naked1_OP: Naked1 
	{

		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;

		class Hitpoints: Hitpoints 
		{
			class HitFace 
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.100000;
				radius = 0.080000;
				explosionShielding = 0.100000;
				minimalHit = 0.010000;
			};
			class HitNeck: HitFace 
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.100000;
				radius = 0.100000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
			};
			class HitHead: HitNeck 
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitAbdomen: HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitDiaphragm: HitAbdomen 
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitChest: HitDiaphragm 
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitBody: HitChest 
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.100000;
				radius = 0.160000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms 
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
			};
			class HitHands: HitArms 
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
				depends = "HitArms";
			};
			class HitLegs 
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.120000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
	};
	class Naked1_Blu: Naked1 
	{
		
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;

		class Hitpoints: Hitpoints 
		{
			class HitFace 
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.100000;
				radius = 0.080000;
				explosionShielding = 0.100000;
				minimalHit = 0.010000;
			};
			class HitNeck: HitFace 
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.100000;
				radius = 0.100000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
			};
			class HitHead: HitNeck 
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitAbdomen: HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitDiaphragm: HitAbdomen 
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitChest: HitDiaphragm 
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitBody: HitChest 
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.100000;
				radius = 0.160000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms 
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
			};
			class HitHands: HitArms 
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
				depends = "HitArms";
			};
			class HitLegs 
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.120000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
	};

	// Orks - SM Variant
	class TIOWOrkTest1: TIOWSpaceMarine_Base 
	{
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
		{
			class HitFace 
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.100000;
				radius = 0.080000;
				explosionShielding = 0.100000;
				minimalHit = 0.010000;
			};
			class HitNeck: HitFace 
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.100000;
				radius = 0.100000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
			};
			class HitHead: HitNeck 
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitAbdomen: HitPelvis 
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitDiaphragm: HitAbdomen 
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitChest: HitDiaphragm 
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			class HitBody: HitChest 
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.100000;
				radius = 0.160000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms 
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
			};
			class HitHands: HitArms 
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
				depends = "HitArms";
			};
			class HitLegs 
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.120000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
	};

	//Renegade
	class SoldierEB: CAManBase {};
	class O_Soldier_base_F: SoldierEB {};
	class O_Soldier_F: O_Soldier_base_F {};
    class TIOW_O_Ren_B_Base: O_Soldier_F 
	{
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };

	// Cadian
    class CadTroopBase: B_Soldier_F {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };
    
	// TIOW IG HQ
    class TIOW_IG_Captain_667: B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };
    class TIOW_Comissar: B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };
    class TIOW_Priest: B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };

	// DKoK
    class DKoK_GM_1: B_Soldier_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };

	// Mordian
    class TIOW_Mordian_Trooper_1_Blu: B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };

	// Valhallans
    class TIOW_Valhallan_Trooper_1_Blu: B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };

	// Tau
    class TIOW_Fire_Warrior: B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };
    class TIOW_Air_Caste_Pilot_B : B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
		};
    };
    class TIOW_Pathfinder: B_Soldier_base_f {
        armor=2;
        armorStructural=3;
        explosionShielding=0.30000001;
        
        class Hitpoints: Hitpoints 
        {
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=3;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=3;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=3;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
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
	class SM_Gear: ItemCore
	{
		scope = 0;
		allowedSlots[] = {"BACKPACK_SLOT"};
		hiddenSelections[] = {"camo"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo"};
			LOAD[] = {"(0","0)"};
		};
	};

	class Rifle;
	class Rifle_Base_F: Rifle {};
	class arifle_MX_Base_F: Rifle_Base_F {};

	class TIOW_LongLas_Base: arifle_MX_Base_F
	{
		magazines[] = {"TIOW_LongLas_Mag","DK143_LongLasHP_Mag"};
	};
	class M36KantRifleBase: arifle_MX_Base_F
	{
		magazines[] = {"M36KantRifle_mag","DK143_KantRifleHP_Mag"};
	};
	// this adds the high power mags to the Lucius Lasgun
	class Lucius98Lasgun : Rifle_Base_F
	{
		magazines[] = {"Lucius98_mag", "DK143_HotShot_Lucius_Mag"};
	};
	
	//Medium Stubber changes to the magazines go here
	class LMG_Mk200_F;
	class ML700_MachineGun_Base: LMG_Mk200_F{};
	class ML700_LMG_Stubber_base_F: ML700_MachineGun_Base{};
	
	class ML700_LMG_Stubber_Black: ML700_LMG_Stubber_base_F
	{
		magazines[] = {"ML700_Stubber_Drum","ML700_Stubber_Drum_Green","ML700_Stubber_Drum_Red","ML700_Stubber_Drum_Yellow", "DK143_Expander_Drum", "DK143_Amputators_Drum", "DK143_ManStopper_Drum"};
	};
	
	class ML700_LMG_Stubber_Green: ML700_LMG_Stubber_Black
	{
		magazines[] = {"ML700_Stubber_Drum","ML700_Stubber_Drum_Green","ML700_Stubber_Drum_Red","ML700_Stubber_Drum_Yellow", "DK143_Expander_Drum", "DK143_Amputators_Drum", "DK143_ManStopper_Drum"};
	};
	
	class KriegHeavyStubber : Rifle_Base_F 
	{
		magazines[] = {"TIOW_50Rnd_Stubber_mag","TIOW_50Rnd_Stubber_mag_Tracer","TIOW_50Rnd_Stubber_amput","TIOW_50Rnd_Stubber_manstop","TIOW_50Rnd_Stubber_expander", "DK143_150Rnd_Hvy_Stubber_Expander_Mag", "DK143_150Rnd_Hvy_Stubber_Manstop_Mag", "DK143_150Rnd_Hvy_Stubber_Amput_Mag", "DK143_150Rnd_Hvy_Stubber_Tracer_Mag", "DK143_150Rnd_Hvy_Stubber_Mag"};
	};
	
/*

Helmets

*/

	// Orks
	class ArdBoyHelm1: ItemCore
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
	class ArdBoyHelm2: ArdBoyHelm1
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
	class BossHelm1: ItemCore
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
	class BossHelm2: BossHelm1
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
	class TankBustaHelm1: ItemCore
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
	class TankBustaHelm2: TankBustaHelm1
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
	class ShootaBoyHelm1: ItemCore
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
	class ShootaBoyHelm2: ShootaBoyHelm1
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 25;
                    passThrough = 0.300001;
                };
            };
        };
    };
 
	// All Cadian helmets, medium armor.
    class Cad_Inf_Helm2: ItemCore 
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
	// IG patrol caps, no armor.
    class TIOW_IG_PatrolCap_836: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap2_836: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap3_836: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap4_836: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap_700: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap2_700: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap3_700: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap4_700: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap_776: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap2_776: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap3_776: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap4_776: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap_661: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap2_661: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap3_661: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_PatrolCap4_661: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap1_836: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap2_836: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap3_836: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap1_776: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap2_776: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap3_776: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap1_667: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap2_667: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap3_667: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap1_700: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap2_700: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_IG_Officer_Cap3_700: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
	// IG Priest hoods, no armor.
    class TIOW_Priest_Hood: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Priest_Hood_Grey: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Priest_Hood_Red: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
	// IG Comissar caps, no armor. Krieg cap inherits.
    class TIOW_Comissar_Cap: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
	// IG Mordian caps, no armor.
    class TIOW_Mordian_Cap: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Mordian_Cap_2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Mordian_Cap_white_2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Mordian_Cap_3: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Mordian_Cap_white_3: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
	// Bloodpact helmet, heavy armor. Adding to virtual arsenal
	class TIOW_Bloodpact_helmet_01: H_HelmetB
	{
		scopeArsenal = 2;
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	// Renegade enforcer mask, heavy armor and face protection.
    class Ren_Helm_00: ItemCore
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
	// Renegade cultist hoods, no armor.
    class TIOW_Cultist_Hood: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Cultist_Hood_green: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Cultist_Hood_brown: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
	// IG Valhallan caps, light armor.
    class TIOW_Valhallan_Cap: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_brown_Cap: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_camo_Cap: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_white_Cap: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_camo_2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_brown_2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_white_2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_3: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_camo_3: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_white_3: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Valhallan_Cap_brown_3: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
        };
    };
	// Valhallan helmet, medium armor.
    class TIOW_Valhallan_Helmet: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
	// All DK inf. helmets, medium armor.
    class DKoK_GM_Helm: ItemCore
    {
        class ItemInfo: HeadgearItem
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
	// Tau F. Warrior Breacher Helms, heavy armor with face protection.
    class TIOW_Tau_HelmetB2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.5;
                };
            };
        };
    };
	// Tau F. Warrior striker helms, medium armor with face protection.
    class TIOW_Tau_HelmetS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };
	// Tau headsets, no armor.
    class TIOW_Tau_Hset1: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Tau_Hset2: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Tau_Hset3: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Tau_Hset4: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
    class TIOW_Tau_Hset5: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
        };
    };
	// Tau pathfinder helmet, medium armor with face protection.
    class TIOW_Tau_HelmetP: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
    };

/*

 Vests

*/

	// Invisible Flak Weave, medium 
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
		author = "Siggyreed";
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

	// Space Marine

	class TIOW_Mk7Vest: SM_Gear
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_UM: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_IF: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_WB: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_IW: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_BL: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_WE: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_EC: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_AL: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_TS: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_NL: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_DG: TIOW_Mk7Vest
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	
	// Orks
	class OrkBaseGear: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		hiddenSelections[] = {"Camo1","Camo2"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			maximumLoad = 0;
			mass = 0;
		};
	};
	class ShootaBoyGear1: OrkBaseGear
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class ShootaBoyGear2: ShootaBoyGear1
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class TankBustaGear1: OrkBaseGear
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class TankBustaGear2: TankBustaGear1
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class BossGear1: OrkBaseGear
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class BossGear2: OrkBaseGear
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class ArdBoyGear1: OrkBaseGear
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class ArdBoyGear2: OrkBaseGear
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	// Orks - SM Variant
	class TIOW_Ork_Gear: ItemCore
	{
		scope = 0;
		allowedSlots[] = {"BACKPACK_SLOT"};
		hiddenSelections[] = {"camo"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo"};
			LOAD[] = {"(0,0)"};
		};
	};
	class TIOW_Ork_Gear_Base: TIOW_Ork_Gear{};
	class TIOW_OrkVest_SinglePauldron001: TIOW_Ork_Gear_Base
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
	  	};
	};
	class TIOW_OrkVest_SinglePauldron002: TIOW_Ork_Gear_Base
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};	
	  	};
	};
	class TIOW_OrkVest_SinglePauldron003: TIOW_Ork_Gear_Base
	{
	  	class ItemInfo: ItemInfo
	  	{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 14;
					passThrough = 0.25;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 16;
					passThrough = 0.25;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 32;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
	  	};
	};

	// Cad. Flak Armors (Base, Medicae, and Sergeant), Medium.
    class Cad_Gear_Vest2: ItemCore 
	{
		class ItemInfo: VestItem {};
	};
    class Cad_Gear2: Cad_Gear_Vest2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_Gear836th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_Gear700th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_Gear776th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_Gear667th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_MedGear667th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_MedGear776th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_MedGear700th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
    class Cad_MedGear836th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
	// Cad. Kasrkin Armor, Heavy.
    class Cad_KasrGear667th: Cad_Gear2
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.1;
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
    class Cad_KasrGear700th: Cad_Gear2
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.1;
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
    class Cad_KasrGear776th: Cad_Gear2
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.1;
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
    class Cad_KasrGear836th: Cad_Gear2
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.1;
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
	// Cad. Officer Flak Armor, Light.
    class TIOW_IG_Sergeant_Armour_836: Cad_Gear_Vest2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Officer_Armour_836: TIOW_IG_Sergeant_Armour_836
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Sergeant_Armour_776: Cad_Gear_Vest2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Officer_Armour_776: TIOW_IG_Sergeant_Armour_776
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Sergeant_Armour_700: Cad_Gear_Vest2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Officer_Armour_700: TIOW_IG_Sergeant_Armour_700
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Sergeant_Armour_667: Cad_Gear_Vest2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Officer_Armour_667: TIOW_IG_Sergeant_Armour_667
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };

	// Cad. Tanker Webbing, Light.
    class Cad_TnkGear836th: Cad_Gear2
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class Cad_TnkGear667th: Cad_TnkGear836th
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class Cad_TnkGear776th: Cad_TnkGear836th
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
				};
			};
        };
    };
    class Cad_TnkGear700th: Cad_TnkGear836th
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.30000001;
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
	// Mordian Belt, Unarmored.
    class TIOW_Mordian_Belt: ItemCore
    {
        class ItemInfo: VestItem
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.5;
				};
			};
        };
    };
	//Ren. Flak Chest, Medium.
    class Ren_Gear: ItemCore 
	{
		class ItemInfo;
	};
    class Ren_ArmorSet_00: Ren_Gear
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= 16;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= 16;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= 16;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };
    };
	// Bloodpact Flak Armor, medium.
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class TIOW_Bloodpact_vest_01: Vest_Camo_Base
	{
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};
        };		
	};
	// Bloodpact Grenadier Armor, heavy explosive resist.
    class TIOW_Bloodpact_vest_02: TIOW_Bloodpact_vest_01
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
	// Bloodpact Heavy Armor, heavy.
    class TIOW_Bloodpact_vest_03: TIOW_Bloodpact_vest_01
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
        };
    };
	// Bloodpact Medium Armor, medium.
    class TIOW_Bloodpact_vest_04: TIOW_Bloodpact_vest_01
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0;
					passThrough = 1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 0;
					passThrough = 1;
				};
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
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.2;
				};
			};            
        };
    };	
	// Ren. Armored Chestplate, Heavy.
    class Ren_ArmorSet_02_black: Ren_ArmorSet_00
    {
        class ItemInfo: ItemInfo
        {
			containerClass="Supply140";
			mass=100;
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
	// Valhallan Belt, Unarmored.
    class Valhallan_Belt: ItemCore
    {
        class ItemInfo: VestItem
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.5;
				};
			};            
        };
    };
	// Cultist Belt, Unarmored.
    class TIOW_Cultist_Gear: ItemCore
    {
        class ItemInfo: VestItem
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.5;
				};
			};            
        };
    };
    class TIOW_Cultist_Gear2: ItemCore
    {
        class ItemInfo: VestItem
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.5;
				};
			};            
        };
    };
	// Priest Belt, Unarmored.
    class TIOW_Priest_Gear: ItemCore
    {
        class ItemInfo: VestItem
        {
            class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					armor = 0;
					passThrough=0.5;
				};
			};            
        };
    };
	// All Tau Belts, Medium.
    class TIOW_Tau_Gear_Base: ItemCore
    {
        class ItemInfo;
    };
    class TIOW_Tau_Belt: TIOW_Tau_Gear_Base
    {
        class ItemInfo: ItemInfo
        {
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
					armor = 0;
					passThrough=0.2;
				};
			};            
        };
    };
};
