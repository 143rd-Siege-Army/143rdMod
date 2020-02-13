#define _ARMA_

class CfgPatches
{
	class 143_ACE_Config
	{
		author = "Siggyfreed";
		name = "DK143 TIOW ACE Compat";
		requiredAddons[] = {"TIOW", "DKoKFoot"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

// find out where TIOW_dude is defined
// class tiow_dude:tiow_dude -> define beneath
class UniformSlotInfo;
class B_Soldier_F;
class Strategic;
class CfgVehicles
{
    class ThingX;
    class CAManBase;
    class SoldierWB: CAManBase
    {
        class HeadLimits;
    };
    class TIOWSpaceMarine_Base: SoldierWB
    {
        class HitPoints
        {
            class HitFace
			{
				armor = 9;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
                pen = 0.4;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=40;
				material=-1;
				name="neck";
				passThrough=0.80000001;
                pen = 0.4;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=9;
				material=-1;
				name="head";
				passThrough=0.80000001;
                pen = 0.4;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=40;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
                pen = 0.4;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=40;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
                pen = 0.4;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=40;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
                pen = 0.4;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=40;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
                pen = 0.4;
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
                pen = 0.4;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=40;
				material=-1;
				name="arms";
				passThrough=1;
                pen = 0.4;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=40;
				material=-1;
				name="hands";
				passThrough=1;
                pen = 0.4;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=40;
				material=-1;
				name="legs";
				passThrough=1;
                pen = 0.4;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
                pen = 0.4;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
            class HitLeftArm
			{
				armor = 40;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				pen = 0.4;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 40;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				pen = 0.4;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
        };
        armor = 40;
		armorStructural = 10;
		explosionShielding = 10.25;
		class EventHandlers;
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		uniformAccessories[] = {};
    };
    class B_Soldier_F;
};
class CfgWeapons
{
    class InventoryItem_base_F;
    class ItemCore;
    class HeadgearItem;
    class VestItem;
    class UniformItem;
    
    /* // Space Marines
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
    class TIOW_Mk7Vest: SM_Gear
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
				class Neck
				{
					hitpointName = "HitNeck";
					pen = 0.4;
					armor = 250;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					pen = 0.4;
					armor = 100;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					pen = 0.4;
					armor = 250;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					pen = 0.4;
					armor = 250;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					pen = 0.4;
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					pen = 0.4;
					armor = 100;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					pen = 0.4;
					armor = 100;
					passThrough = 0.1;
				};
			};
        };
    };
    */

    // Uniforms

    // Helmets
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
        class ItemInfo: HeadgearItem
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
    class TIOW_IG_PatrolCap_2836: H_HelmetB
    {
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
    // Renegade enforcer mask, heavy armor and face protection.
    class TIOW_RenEnforcerMask_1: Ren_Helm_00 
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
        class ItemInfo: HeadgearItem
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
// Vests
    class DKoK_Eng_Armor: DKoK_Eng_Armor_1489th
    {
        class ItemInfo: VestItem
         {
            class Abdomen
            {
                armor = 16;
                hitpointName = "HitAbdomen";
                passThrough = 0.3;
            };
            class Arms
            {
                armor = 8;
                hitpointName = "HitArms";
                passThrough = 0.5;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.6;
            };
            class Chest
            {
                armor = 78;
                hitpointName = "HitChest";
                passThrough = 0.6;
            };
            class Diaphragm
            {
                armor = 78;
                hitpointName = "HitDiaphragm";
                passThrough = 0.6;
            };
            class Neck
            {
                armor = 8;
                hitpointName = "HitNeck";
                passThrough = 0.5;
            };
            class Pelvis
            {
                armor = 16;
                hitpointName = "HitPelvis";
                passThrough = 0.3;
            };
        };
    };
    class DKoK_Eng_Armor: DKoK_Eng_Armor_1490th
    {
        class ItemInfo: VestItem
         {
            class Abdomen
            {
                armor = 16;
                hitpointName = "HitAbdomen";
                passThrough = 0.3;
            };
            class Arms
            {
                armor = 8;
                hitpointName = "HitArms";
                passThrough = 0.5;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.6;
            };
            class Chest
            {
                armor = 78;
                hitpointName = "HitChest";
                passThrough = 0.6;
            };
            class Diaphragm
            {
                armor = 78;
                hitpointName = "HitDiaphragm";
                passThrough = 0.6;
            };
            class Neck
            {
                armor = 8;
                hitpointName = "HitNeck";
                passThrough = 0.5;
            };
            class Pelvis
            {
                armor = 16;
                hitpointName = "HitPelvis";
                passThrough = 0.3;
            };
        };
    };
    class DKoK_Eng_Armor: DKoK_Eng_Armor_1491st
    {
        class ItemInfo: VestItem
         {
            class Abdomen
            {
                armor = 16;
                hitpointName = "HitAbdomen";
                passThrough = 0.3;
            };
            class Arms
            {
                armor = 8;
                hitpointName = "HitArms";
                passThrough = 0.5;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.6;
            };
            class Chest
            {
                armor = 78;
                hitpointName = "HitChest";
                passThrough = 0.6;
            };
            class Diaphragm
            {
                armor = 78;
                hitpointName = "HitDiaphragm";
                passThrough = 0.6;
            };
            class Neck
            {
                armor = 8;
                hitpointName = "HitNeck";
                passThrough = 0.5;
            };
            class Pelvis
            {
                armor = 16;
                hitpointName = "HitPelvis";
                passThrough = 0.3;
            };
        };
    };
    class DKoK_Eng_Armor: DKoK_Eng_Armor_82nd
    {
        class ItemInfo: VestItem
         {
            class Abdomen
            {
                armor = 16;
                hitpointName = "HitAbdomen";
                passThrough = 0.3;
            };
            class Arms
            {
                armor = 8;
                hitpointName = "HitArms";
                passThrough = 0.5;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.6;
            };
            class Chest
            {
                armor = 78;
                hitpointName = "HitChest";
                passThrough = 0.6;
            };
            class Diaphragm
            {
                armor = 78;
                hitpointName = "HitDiaphragm";
                passThrough = 0.6;
            };
            class Neck
            {
                armor = 8;
                hitpointName = "HitNeck";
                passThrough = 0.5;
            };
            class Pelvis
            {
                armor = 16;
                hitpointName = "HitPelvis";
                passThrough = 0.3;
            };
        };
    };
    class DKoK_Gren_Armor: DKoK_Gren_Armor_1489th
    {
        class ItemInfo: VestItem
        {
            class Abdomen
            {
                armor = 20;
                hitpointName = "HitAbdomen";
                passThrough = 0.2;
            };
            class Arms
            {
                armor = 20;
                hitpointName = "HitArms";
                passThrough = 0.2;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.2;
            };
            class Chest
            {
                armor = 20;
                hitpointName = "HitChest";
                passThrough = 0.2;
            };
            class Diaphragm
            {
                armor = 20;
                hitpointName = "HitDiaphragm";
                passThrough = 0.2;
            };
            class Neck
            {
                armor = 20;
                hitpointName = "HitNeck";
                passThrough = 0.2;
            };
            class Pelvis
            {
                armor = 20;
                hitpointName = "HitPelvis";
                passThrough = 0.2;
            };
        };
    };
    class DKoK_Gren_Armor: DKoK_Gren_Armor_1490th
    {
        class ItemInfo: VestItem
        {
            class Abdomen
            {
                armor = 20;
                hitpointName = "HitAbdomen";
                passThrough = 0.2;
            };
            class Arms
            {
                armor = 20;
                hitpointName = "HitArms";
                passThrough = 0.2;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.2;
            };
            class Chest
            {
                armor = 20;
                hitpointName = "HitChest";
                passThrough = 0.2;
            };
            class Diaphragm
            {
                armor = 20;
                hitpointName = "HitDiaphragm";
                passThrough = 0.2;
            };
            class Neck
            {
                armor = 20;
                hitpointName = "HitNeck";
                passThrough = 0.2;
            };
            class Pelvis
            {
                armor = 20;
                hitpointName = "HitPelvis";
                passThrough = 0.2;
            };
        };
    };
    class DKoK_Gren_Armor: DKoK_Gren_Armor_1491st
    {
        class ItemInfo: VestItem
        {
            class Abdomen
            {
                armor = 20;
                hitpointName = "HitAbdomen";
                passThrough = 0.2;
            };
            class Arms
            {
                armor = 20;
                hitpointName = "HitArms";
                passThrough = 0.2;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.2;
            };
            class Chest
            {
                armor = 20;
                hitpointName = "HitChest";
                passThrough = 0.2;
            };
            class Diaphragm
            {
                armor = 20;
                hitpointName = "HitDiaphragm";
                passThrough = 0.2;
            };
            class Neck
            {
                armor = 20;
                hitpointName = "HitNeck";
                passThrough = 0.2;
            };
            class Pelvis
            {
                armor = 20;
                hitpointName = "HitPelvis";
                passThrough = 0.2;
            };
        };
    };
    class DKoK_Gren_Armor: DKoK_Gren_Armor_82nd
    {
        class ItemInfo: VestItem
        {
            class Abdomen
            {
                armor = 20;
                hitpointName = "HitAbdomen";
                passThrough = 0.2;
            };
            class Arms
            {
                armor = 20;
                hitpointName = "HitArms";
                passThrough = 0.2;
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.2;
            };
            class Chest
            {
                armor = 20;
                hitpointName = "HitChest";
                passThrough = 0.2;
            };
            class Diaphragm
            {
                armor = 20;
                hitpointName = "HitDiaphragm";
                passThrough = 0.2;
            };
            class Neck
            {
                armor = 20;
                hitpointName = "HitNeck";
                passThrough = 0.2;
            };
            class Pelvis
            {
                armor = 20;
                hitpointName = "HitPelvis";
                passThrough = 0.2;
            };
        };
    };
};