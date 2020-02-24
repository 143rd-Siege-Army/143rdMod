#define _ARMA_

class CfgPatches
{
	class 143_ACE_Config
	{
		author = "Siggyfreed";
		name = "DK143 TIOW ACE Compat";
		requiredAddons[] = {"TIOW", "DKoKFoot", "CadFoot", "40k_tau", "Renegades_Foot", "TIOW_IG_Cosmetics", "TIOW_IG_HQ", "TIOW_Mordian", "TIOW_Valhallans"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgWeapons
{
    class HeadgearItem;
    class VestItem;
    class UniformItem;
    
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

// Cad. Flak Armors (Base, Medicae, and Sergeant), Medium.
    class Cad_Gear2: Cad_Gear_Vest2
    {
        class ItemInfo: VestItem
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
					passThrough=0.2;
				};
			};
        };
    };
// Cad. Kasrkin Armor, Heavy.
    class Cad_KasrGear667th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.1;
				};
			};
        };
    };
    class Cad_KasrGear700th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.1;
				};
			};
        };
    };
    class Cad_KasrGear776th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.1;
				};
			};
        };
    };
    class Cad_KasrGear836th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.1;
				};
			};
        };
    };
// Cad. Officer Flak Armor, Light.
    class TIOW_IG_Officer_Armour_836: TIOW_IG_Sergeant_Armour_836
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Officer_Armour_776: TIOW_IG_Sergeant_Armour_776
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Officer_Armour_700: TIOW_IG_Sergeant_Armour_700
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
    class TIOW_IG_Officer_Armour_667: TIOW_IG_Sergeant_Armour_667
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
// Cad. Officer Golden Shoulderpads, Unarmored.
// Cad. Sergeant Flak Armor, Medium.
    class TIOW_IG_Seargeant_Armour_667: Cad_Gear_Vest2
    {
        class ItemInfo: VestItem
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
					passThrough=0.2;
				};
			};
        };
    };
    class TIOW_IG_Seargeant_Armour_700: Cad_Gear_Vest2
    {
        class ItemInfo: VestItem
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
					passThrough=0.2;
				};
			};
        };
    };
    class TIOW_IG_Seargeant_Armour_776: Cad_Gear_Vest2
    {
        class ItemInfo: VestItem
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
					passThrough=0.2;
				};
			};
        };
    };
    class TIOW_IG_Seargeant_Armour_836: Cad_Gear_Vest2
    {
        class ItemInfo: VestItem
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
					passThrough=0.2;
				};
			};
        };
    };    
// Cad. Tanker Webbing, Light.
    class Cad_TnkGear836th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
    class Cad_TnkGear667th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
    class Cad_TnkGear776th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
    class Cad_TnkGear700th: Cad_Gear2
    {
        class ItemInfo: VestItem
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
					passThrough=0.30000001;
				};
			};
        };
    };
// DK Engineer Armor, Explosive resistant.
    class DKoK_Eng_Armor: DKoK_Gear
    {
        class ItemInfo: VestItem
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
					passThrough=0.60000002;
				};
			};
        };
    };
// DK Grenadier Armor, Heavy.
    class DKoK_Gren_Armor: DKoK_Gear
    {
        class ItemInfo: VestItem
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
					passThrough=0.5;
				};
			};
        };
    };
// Ren. Armored Chestplate, Heavy.
    class Ren_ArmorSet_02_black: Ren_ArmorSet_00
    {
        class ItemInfo: VestItem
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
					passThrough=0.1;
				};
			};
        };
    };
//Ren. Flak Chest, Medium.
    class Ren_ArmorSet_00: Ren_Gear
    {
        class ItemInfo: VestItem
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
					passThrough=0.2;
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
					passThrough=0.5;
				};
			};            
        };
    };
// Tau Fire Warrior Belt, Medium.
// Tau F. War. Breacher Belt, Explosive resistant.
// Tau Pathfinder Belt, Light.
};