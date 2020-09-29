class CfgPatches {
    class I_40kRebels {
        units[] = {
            "I_40kRebels_Group_Leader_01",
            "I_40kRebels_Rebel_01",
            "I_40kRebels_Rebel_AT_01",
            "I_40kRebels_Rebel_Heavy_Gunner_01",
            "I_40kRebels_Escaped_Convict_01",
            "I_40kRebels_Convict_Leader_01",
	        "I_40kRebels_Convict_Bomber_01",
	        "I_40kRebels_Rebel_AT_Specalist_01",
	        "I_40kRebels_Heavy_Rebel_01",
            "I_40kRebels_Light_Rebel_01",
            "I_40kRebels_Light_Rebel_AT_01",
            "I_40kRebels_Rebel_Scout_Leader_01",
            "I_40kRebels_Rebel_Sniper_01"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"ace_common"};
        author = "Gm. Minewolf";
        authors[] = {"Gm. Minewolf"};
    };
};
class CfgFactionClasses {
    class I_40kRebels {
        displayName = "Free Rayan Rebels";
        side = 2;
        flag = "\a3\Data_F_Exp\Flags\flag_GEN_CO.paa";
        icon = "\a3\Data_F_Exp\Flags\flag_GEN_CO.paa";
        priority = 0;
    };
};

class CfgGroups {
    class Indep {

        class I_40kRebels {
            name = "Free Rayan Rebels";

            class Infantry {
                name = "Infantry";

                class i_40krebels_infantry_makeshift_team {
                    name = "Makeshift Team";
                    side = 2;
                    faction = "I_40kRebels";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_40kRebels_Group_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_AT_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_Heavy_Gunner_01";
                    };
                };

                class i_40krebels_infantry_convict_group {
                    name = "Convict Group";
                    side = 2;
                    faction = "I_40kRebels";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_40kRebels_Convict_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Escaped_Convict_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Convict_Bomber_01";
                    };
                };

                class i_40krebels_infantry_makeshift_squad {
                    name = "Makeshift Squad";
                    side = 2;
                    faction = "I_40kRebels";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_40kRebels_Group_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_AT_Specalist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_Heavy_Gunner_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Heavy_Rebel_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_AT_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_01";
                    };
                };

                class i_40krebels_infantry_recon_team {
                    name = "Recon Team";
                    side = 2;
                    faction = "I_40kRebels";
                    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_Scout_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Light_Rebel_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Light_Rebel_AT_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_40kRebels_Rebel_Sniper_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class I_C_Soldier_Para_2_F;
    class I_C_Soldier_Para_2_F_OCimport_01 : I_C_Soldier_Para_2_F { scope = 0; class EventHandlers; };
    class I_C_Soldier_Para_2_F_OCimport_02 : I_C_Soldier_Para_2_F_OCimport_01 { class EventHandlers; };


    class I_40kRebels_Group_Leader_01 : I_C_Soldier_Para_2_F_OCimport_02 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Group Leader";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_2_F";

        linkedItems[] = {"Ren_ArmorSet_01_green","Cad_RebreatherMask836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Ren_ArmorSet_01_green","Cad_RebreatherMask836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Antioc43Lasgun_3","LuciusLaspistolBlack"};
        respawnWeapons[] = {"Antioc43Lasgun_3","LuciusLaspistolBlack"};

        magazines[] = {"TIOW_Antioc43_Mag","LuciusLaspistol_mag","TIOW_Antioc43_Mag","LuciusLaspistol_mag"};
        respawnMagazines[] = {"TIOW_Antioc43_Mag","LuciusLaspistol_mag","TIOW_Antioc43_Mag","LuciusLaspistol_mag"};

        ALiVE_orbatCreator_loadout[] = {{"Antioc43Lasgun_3","","","",{"TIOW_Antioc43_Mag",50},{},""},{},{"LuciusLaspistolBlack","","","",{"LuciusLaspistol_mag",50},{},""},{"U_I_C_Soldier_Para_2_F",{{"FirstAidKit",1},{"TIOW_Antioc43_Mag",3,50},{"LuciusLaspistol_mag",1,50}}},{"Ren_ArmorSet_01_green",{{"LuciusLaspistol_mag",3,50},{"TIOW_Antioc43_Mag",4,50},{"TIOW_ig_smoke_grenade_mag",2,1},{"ML700_frag_grenade_magazine",2,1}}},{},"Cad_RebreatherMask836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Rebel_01 : I_40kRebels_Group_Leader_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rebel";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_3_F";

        linkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Antioc43Lasgun_3"};
        respawnWeapons[] = {"Antioc43Lasgun_3"};

        magazines[] = {"TIOW_Antioc43_Mag","TIOW_Antioc43_Mag"};
        respawnMagazines[] = {"TIOW_Antioc43_Mag","TIOW_Antioc43_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"Antioc43Lasgun_3","","","",{"TIOW_Antioc43_Mag",50},{},""},{},{},{"U_I_C_Soldier_Para_3_F",{{"FirstAidKit",1},{"TIOW_Antioc43_Mag",3,50}}},{"Ren_ArmorSet_01_green",{{"TIOW_Antioc43_Mag",4,50},{"ML700_frag_grenade_magazine",2,1}}},{},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Rebel_AT_01 : I_40kRebels_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rebel (AT)";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_3_F";

        linkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Antioc43Lasgun_3","ML700_Launcher_Weapon_CadianLauncher"};
        respawnWeapons[] = {"Antioc43Lasgun_3","ML700_Launcher_Weapon_CadianLauncher"};

        magazines[] = {"TIOW_Antioc43_Mag","TIOW_Antioc43_Mag"};
        respawnMagazines[] = {"TIOW_Antioc43_Mag","TIOW_Antioc43_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"Antioc43Lasgun_3","","","",{"TIOW_Antioc43_Mag",50},{},""},{"ML700_Launcher_Weapon_CadianLauncher","","","",{},{},""},{},{"U_I_C_Soldier_Para_3_F",{{"FirstAidKit",1},{"TIOW_Antioc43_Mag",3,50}}},{"Ren_ArmorSet_01_green",{{"TIOW_Antioc43_Mag",4,50},{"ML700_frag_grenade_magazine",2,1}}},{},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Rebel_Heavy_Gunner_01 : I_40kRebels_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rebel Heavy Gunner";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_3_F";

        linkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"TIOW_BP_Heavy_Stubber"};
        respawnWeapons[] = {"TIOW_BP_Heavy_Stubber"};

        magazines[] = {"TIOW_150Rnd_Stubber_mag","TIOW_150Rnd_Stubber_mag"};
        respawnMagazines[] = {"TIOW_150Rnd_Stubber_mag","TIOW_150Rnd_Stubber_mag"};

        backpack = "B_Carryall_oli";

        ALiVE_orbatCreator_loadout[] = {{"TIOW_BP_Heavy_Stubber","","","",{"TIOW_150Rnd_Stubber_mag",120},{},"BP_Heavy_Stubber_bipod_unfolded"},{},{},{"U_I_C_Soldier_Para_3_F",{{"FirstAidKit",1},{"TIOW_150Rnd_Stubber_mag",3,120}}},{"Ren_ArmorSet_01_green",{{"TIOW_150Rnd_Stubber_expander",6,120}}},{"B_Carryall_oli",{{"TIOW_150Rnd_Stubber_expander",14,120}}},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Escaped_Convict_01 : I_40kRebels_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Escaped Convict";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_C_WorkerCoveralls";

        linkedItems[] = {"TIOW_Valhallan_Belt","H_ShemagOpen_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Valhallan_Belt","H_ShemagOpen_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"ML700_Autogun_Black"};
        respawnWeapons[] = {"ML700_Autogun_Black"};

        magazines[] = {"ML700_30rnd_Autogun_Mag","ML700_30rnd_Autogun_Mag"};
        respawnMagazines[] = {"ML700_30rnd_Autogun_Mag","ML700_30rnd_Autogun_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"ML700_Autogun_Black","","","",{"ML700_30rnd_Autogun_Mag",30},{},""},{},{},{"U_C_WorkerCoveralls",{{"FirstAidKit",1},{"ML700_30rnd_Autogun_Mag",2,30}}},{"TIOW_Valhallan_Belt",{{"ACE_DeadManSwitch",1},{"ACE_M14",1,1},{"ML700_30rnd_Autogun_Mag",6,30},{"DemoCharge_Remote_Mag",1,1}}},{},"H_ShemagOpen_khk","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Convict_Leader_01 : I_40kRebels_Escaped_Convict_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Convict Leader";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_C_WorkerCoveralls";

        linkedItems[] = {"Ren_ArmorSet_01_brown","H_HeadBandage_stained_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Ren_ArmorSet_01_brown","H_HeadBandage_stained_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"TIOW_Type3_AgripinaaAuto_Base"};
        respawnWeapons[] = {"TIOW_Type3_AgripinaaAuto_Base"};

        magazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};
        respawnMagazines[] = {"30Rnd_Agrip_mag","30Rnd_Agrip_mag"};

        ALiVE_orbatCreator_loadout[] = {{"TIOW_Type3_AgripinaaAuto_Base","","","",{"30Rnd_Agrip_mag",30},{},""},{},{},{"U_C_WorkerCoveralls",{{"FirstAidKit",1},{"30Rnd_Agrip_mag",3,30}}},{"Ren_ArmorSet_01_brown",{{"ACE_DeadManSwitch",1},{"DemoCharge_Remote_Mag",1,1},{"30Rnd_Agrip_mag",5,30},{"TIOW_ig_frag_grenade_mag",2,1},{"TIOW_ig_smoke_grenade_mag",1,1}}},{},"H_HeadBandage_stained_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Convict_Bomber_01 : I_40kRebels_Escaped_Convict_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Convict Bomber";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_C_WorkerCoveralls";

        linkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sand","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sand","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"TIOW_KriegLauncher"};
        respawnWeapons[] = {"TIOW_KriegLauncher"};

        magazines[] = {"TIOW_Krieg_LauncherFrag_mag","TIOW_Krieg_LauncherFrag_mag"};
        respawnMagazines[] = {"TIOW_Krieg_LauncherFrag_mag","TIOW_Krieg_LauncherFrag_mag"};

        ALiVE_orbatCreator_loadout[] = {{"TIOW_KriegLauncher","","","",{"TIOW_Krieg_LauncherFrag_mag",1},{},""},{},{},{"U_C_WorkerCoveralls",{{"FirstAidKit",1},{"TIOW_Krieg_LauncherFrag_mag",3,1}}},{"TIOW_Valhallan_Belt",{{"ACE_DeadManSwitch",1},{"ACE_M14",1,1},{"DemoCharge_Remote_Mag",1,1},{"TIOW_Krieg_LauncherFrag_mag",6,1}}},{},"H_Bandanna_sand","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Rebel_AT_Specalist_01 : I_40kRebels_Rebel_AT_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rebel AT Specalist";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Ren_ArmorSet_01_green","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Antioc43Lasgun_3","MissileLauncherDKOKGreen"};
        respawnWeapons[] = {"Antioc43Lasgun_3","MissileLauncherDKOKGreen"};

        magazines[] = {"TIOW_Antioc43_Mag","MLAT_Mag","TIOW_Antioc43_Mag"};
        respawnMagazines[] = {"TIOW_Antioc43_Mag","MLAT_Mag","TIOW_Antioc43_Mag"};

        backpack = "B_Kitbag_sgg";

        ALiVE_orbatCreator_loadout[] = {{"Antioc43Lasgun_3","","","",{"TIOW_Antioc43_Mag",50},{},""},{"MissileLauncherDKOKGreen","","","",{"MLAT_Mag",1},{},""},{},{"U_I_C_Soldier_Para_1_F",{{"FirstAidKit",1},{"TIOW_Antioc43_Mag",3,50}}},{"Ren_ArmorSet_01_green",{{"TIOW_Antioc43_Mag",4,50},{"ML700_frag_grenade_magazine",2,1}}},{"B_Kitbag_sgg",{{"MLAT_Mag",5,1},{"MLHE_Mag",2,1},{"RPG7_F",1,1},{"TIOW_Antioc43_Mag",3,50}}},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Heavy_Rebel_01 : I_40kRebels_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Rebel";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"Ren_ArmorSet_02_black","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Ren_ArmorSet_02_black","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"TIOW_Shotgun"};
        respawnWeapons[] = {"TIOW_Shotgun"};

        magazines[] = {"TIOW_Shotgun_pellets_mag","TIOW_Shotgun_pellets_mag"};
        respawnMagazines[] = {"TIOW_Shotgun_pellets_mag","TIOW_Shotgun_pellets_mag"};

        ALiVE_orbatCreator_loadout[] = {{"TIOW_Shotgun","","","",{"TIOW_Shotgun_pellets_mag",6},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{{"FirstAidKit",1},{"TIOW_Shotgun_pellets_mag",5,6}}},{"Ren_ArmorSet_02_black",{{"TIOW_Shotgun_pellets_mag",3,6},{"TIOW_ig_frag_grenade_mag",4,1},{"TIOW_ig_smoke_grenade_mag",1,1}}},{},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Light_Rebel_01 : I_40kRebels_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Light Rebel";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Lucius98LasgunGreenG"};
        respawnWeapons[] = {"Lucius98LasgunGreenG"};

        magazines[] = {"Lucius98_mag","Lucius98_mag"};
        respawnMagazines[] = {"Lucius98_mag","Lucius98_mag"};

        ALiVE_orbatCreator_loadout[] = {{"Lucius98LasgunGreenG","","","",{"Lucius98_mag",25},{},""},{},{},{"U_I_C_Soldier_Para_1_F",{{"FirstAidKit",1},{"Lucius98_mag",3,25}}},{"TIOW_Valhallan_Belt",{{"ML700_frag_grenade_magazine",2,1}}},{},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Light_Rebel_AT_01 : I_40kRebels_Light_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Light Rebel (AT)";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Lucius98LasgunGreenG","ML700_Launcher_Weapon_CadianLauncher"};
        respawnWeapons[] = {"Lucius98LasgunGreenG","ML700_Launcher_Weapon_CadianLauncher"};

        magazines[] = {"Lucius98_mag","Lucius98_mag"};
        respawnMagazines[] = {"Lucius98_mag","Lucius98_mag"};

        ALiVE_orbatCreator_loadout[] = {{"Lucius98LasgunGreenG","","","",{"Lucius98_mag",25},{},""},{"ML700_Launcher_Weapon_CadianLauncher","","","",{},{},""},{},{"U_I_C_Soldier_Para_1_F",{{"FirstAidKit",1},{"Lucius98_mag",3,25}}},{"TIOW_Valhallan_Belt",{{"ML700_frag_grenade_magazine",2,1}}},{},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Rebel_Scout_Leader_01 : I_40kRebels_Light_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rebel Scout Leader";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"TIOW_Valhallan_Belt","H_MilCap_grn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Valhallan_Belt","H_MilCap_grn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Lucius98LasgunGreenG","TIOW_StubPistol","Binocular"};
        respawnWeapons[] = {"Lucius98LasgunGreenG","TIOW_StubPistol","Binocular"};

        magazines[] = {"Lucius98_mag","TIOW_6rnd_StubPistolMag","Lucius98_mag","TIOW_6rnd_StubPistolMag"};
        respawnMagazines[] = {"Lucius98_mag","TIOW_6rnd_StubPistolMag","Lucius98_mag","TIOW_6rnd_StubPistolMag"};

        ALiVE_orbatCreator_loadout[] = {{"Lucius98LasgunGreenG","","","",{"Lucius98_mag",25},{},""},{},{"TIOW_StubPistol","","","",{"TIOW_6rnd_StubPistolMag",6},{},""},{"U_I_C_Soldier_Camo_F",{{"FirstAidKit",1},{"Lucius98_mag",3,25},{"TIOW_6rnd_StubPistolMag",1,6}}},{"TIOW_Valhallan_Belt",{{"TIOW_ig_smoke_grenade_mag",2,1},{"TIOW_ig_frag_grenade_mag",2,1},{"ACE_CTS9",2,1},{"TIOW_6rnd_StubPistolMag",3,6},{"Lucius98_mag",3,25}}},{},"H_MilCap_grn","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_40kRebels_Rebel_Sniper_01 : I_40kRebels_Light_Rebel_01 {
        author = "Gm. Minewolf";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rebel Sniper";
        side = 2;
        faction = "I_40kRebels";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_Valhallan_Belt","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"TIOW_LongLas_836"};
        respawnWeapons[] = {"TIOW_LongLas_836"};

        magazines[] = {"TIOW_LongLas_Mag","TIOW_LongLas_Mag"};
        respawnMagazines[] = {"TIOW_LongLas_Mag","TIOW_LongLas_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"TIOW_LongLas_836","","","",{"TIOW_LongLas_Mag",20},{},""},{},{},{"U_I_C_Soldier_Para_1_F",{{"FirstAidKit",1},{"TIOW_LongLas_Mag",1,20}}},{"TIOW_Valhallan_Belt",{{"ML700_frag_grenade_magazine",2,1},{"TIOW_LongLas_Mag",3,20}}},{},"H_Bandanna_sgg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};