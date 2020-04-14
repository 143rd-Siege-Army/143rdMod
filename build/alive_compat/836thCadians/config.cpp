//836th Units
class CfgPatches {
    class I_143Cadian836 {
        units[] = {
				"I_143Cadian836_Cadian_Officer_836_01",
				"I_143Cadian836_Cadian_Shocktrooper_Plasma_836_01",
				"I_143Cadian836_Cadian_Shocktrooper_Missile_836_01",
				"I_143Cadian836_Cadian_Meltagunner_836th_01",
				"I_143Cadian836_Cadian_Kasrkin_836th_01",
				"I_143Cadian836_Cadian_Tanker_836th_01",
				"I_143Cadian836_Cadian_Veteran_836th_01",
				"I_143Cadian836_Cadian_Shocktrooper_836th_01",
				"I_143Cadian836_Cadian_Medicae_836th_01"
		};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"ace_common"};
        author = "VGm. Venture";
        authors[] = {"VGm. Venture"};
    };
};

class CfgFactionClasses {
    class I_143Cadian836 {
        displayName = "143rd Cadians - 836th";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\EU_ca.paa";
        priority = 1;
    };
};

class CfgGroups {
    class Indep {

        class I_143Cadian836 {
            name = "143rd Cadians - 836th";

            class Infantry {
                name = "Infantry";

                class i_143cadian836_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                };

                class i_143cadian836_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                };

                class i_143cadian836_infantry_fireteam_at {
                    name = "Fireteam - AT";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Missile_836_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                };

                class i_143cadian836_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Plasma_836_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                };

                class i_143cadian836_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Meltagunner_836th_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                };

                class i_143cadian836_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Missile_836_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Plasma_836_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                };

                class i_143cadian836_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Officer_836_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Plasma_836_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Plasma_836_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Missile_836_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Missile_836_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";
				class i_143cadian836_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Kasrkin_836th_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Kasrkin_836th_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Kasrkin_836th_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Kasrkin_836th_01";
                    };
                };

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

                class i_143cadian836_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_CadianChimAuto_836_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Veteran_836th_01";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_Plasma_836_01";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Meltagunner_836th_01";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_143Cadian836_Cadian_Shocktrooper_836th_01";
                    };
                };

            };

            class Armored {
                name = "Armor";
				class i_143cadian836_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "I_143Cadian836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_836th_Indep";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_836th_Indep";
                    };
				};

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


class CfgVehicles
{
	//Infantry
		// Base Units
		// TIOW_Cad_GM836th_Indep
		// TIOW_Cad_VET836th_Indep
		// TIOW_Cad_Tnk836th_Indep
		// TIOW_Cad_Med836th_Indep
		// TIOW_Cad_Kasr836th_Indep
		// TIOW_Cad_GM_Melta_836th_Indep
	// Infantry Imports
		class TIOW_Cad_Med836th_Indep;
		class TIOW_Cad_Med836th_Indep_OCimport_01 : TIOW_Cad_Med836th_Indep { scope = 1; class EventHandlers; };
		class TIOW_Cad_Med836th_Indep_OCimport_02 : TIOW_Cad_Med836th_Indep_OCimport_01 { class EventHandlers; };

		class TIOW_Cad_GM836th_Indep;
		class TIOW_Cad_GM836th_Indep_OCimport_01 : TIOW_Cad_GM836th_Indep { scope = 1; class EventHandlers; };
		class TIOW_Cad_GM836th_Indep_OCimport_02 : TIOW_Cad_GM836th_Indep_OCimport_01 { class EventHandlers; };

		class TIOW_Cad_VET836th_Indep;
		class TIOW_Cad_VET836th_Indep_OCimport_01 : TIOW_Cad_VET836th_Indep { scope = 1; class EventHandlers; };
		class TIOW_Cad_VET836th_Indep_OCimport_02 : TIOW_Cad_VET836th_Indep_OCimport_01 { class EventHandlers; };

		class TIOW_Cad_Tnk836th_Indep;
		class TIOW_Cad_Tnk836th_Indep_OCimport_01 : TIOW_Cad_Tnk836th_Indep { scope = 1; class EventHandlers; };
		class TIOW_Cad_Tnk836th_Indep_OCimport_02 : TIOW_Cad_Tnk836th_Indep_OCimport_01 { class EventHandlers; };

		class TIOW_Cad_Kasr836th_Indep;
		class TIOW_Cad_Kasr836th_Indep_OCimport_01 : TIOW_Cad_Kasr836th_Indep { scope = 1; class EventHandlers; };
		class TIOW_Cad_Kasr836th_Indep_OCimport_02 : TIOW_Cad_Kasr836th_Indep_OCimport_01 { class EventHandlers; };

		class TIOW_Cad_GM_Melta_836th_Indep;
		class TIOW_Cad_GM_Melta_836th_Indep_OCimport_01 : TIOW_Cad_GM_Melta_836th_Indep { scope = 1; class EventHandlers; };
		class TIOW_Cad_GM_Melta_836th_Indep_OCimport_02 : TIOW_Cad_GM_Melta_836th_Indep_OCimport_01 { class EventHandlers; };

		class I_143Cadian836_Cadian_Medicae_836th_01 : TIOW_Cad_Med836th_Indep_OCimport_02 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Medicae (836th)";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni836th_Indep";

			linkedItems[] = {"Cad_MedGear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_MedGear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"M36KantRifle836"};
			respawnWeapons[] = {"M36KantRifle836"};

			magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

			backpack = "TIOW_CadMedicaeBackpack_Winter";

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle836","","","",{"M36KantRifle_mag",50},{},""},{},{},{"CadUni836th_Indep",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_MedGear836th",{}},{"TIOW_CadMedicaeBackpack_Winter",{{"FirstAidKit",2},{"Medikit",1},{"M36KantRifle_mag",2,50}}},"Cad_Inf_Helm836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Shocktrooper_836th_01 : TIOW_Cad_GM836th_Indep_OCimport_02 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Shocktrooper (836th)";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni836th_Indep";

			linkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"M36KantRifle836"};
			respawnWeapons[] = {"M36KantRifle836"};

			magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle836","","","",{"M36KantRifle_mag",50},{},""},{},{},{"CadUni836th_Indep",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_Gear836th",{}},{},"Cad_Inf_Helm836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Veteran_836th_01 : TIOW_Cad_VET836th_Indep_OCimport_02 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Veteran (836th)";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni836th_Indep";

			linkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch","TIOW_CadPhotovisorGoggles"};
			respawnlinkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch","TIOW_CadPhotovisorGoggles"};

			weapons[] = {"M36KantRifle836"};
			respawnWeapons[] = {"M36KantRifle836"};

			magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle836","","","",{"M36KantRifle_mag",50},{},""},{},{},{"CadUni836th_Indep",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_Gear836th",{}},{},"Cad_Inf_Helm836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","TIOW_CadPhotovisorGoggles"}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Tanker_836th_01 : TIOW_Cad_Tnk836th_Indep_OCimport_02 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Tanker (836th)";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadTnkUni836th_Indep";

			linkedItems[] = {"Cad_TnkGear836th","Cad_Tnk_Helm","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_TnkGear836th","Cad_Tnk_Helm","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"M36KantRifle836"};
			respawnWeapons[] = {"M36KantRifle836"};

			magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle836","","","",{"M36KantRifle_mag",50},{},""},{},{},{"CadTnkUni836th_Indep",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_TnkGear836th",{}},{},"Cad_Tnk_Helm","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Kasrkin_836th_01 : TIOW_Cad_Kasr836th_Indep_OCimport_02 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Kasrkin (836th)";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "TIOW_CadKasrUni_836_Indep";

			linkedItems[] = {"Cad_KasrGear836th","Cad_Kasr_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_KasrGear836th","Cad_Kasr_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"TIOW_CadianHellgun"};
			respawnWeapons[] = {"TIOW_CadianHellgun"};

			magazines[] = {};
			respawnMagazines[] = {};

			backpack = "TIOW_CadKasrkinBackpack_836th";

			ALiVE_orbatCreator_loadout[] = {{"TIOW_CadianHellgun","","","",{},{},""},{},{},{"TIOW_CadKasrUni_836_Indep",{{"FirstAidKit",1},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_KasrGear836th",{}},{"TIOW_CadKasrkinBackpack_836th",{{"FirstAidKit",2},{"TIOW_CadianHellgun_Mag",1,200}}},"Cad_Kasr_Helm836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Meltagunner_836th_01 : TIOW_Cad_GM_Melta_836th_Indep_OCimport_02 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Meltagunner (836th)";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni836th_Indep";

			linkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"TIOW_MeltaGun_01"};
			respawnWeapons[] = {"TIOW_MeltaGun_01"};

			magazines[] = {"TIOW_Meltagun_Mag","TIOW_Meltagun_Mag"};
			respawnMagazines[] = {"TIOW_Meltagun_Mag","TIOW_Meltagun_Mag"};

			ALiVE_orbatCreator_loadout[] = {{"TIOW_MeltaGun_01","","","",{"TIOW_Meltagun_Mag",5},{},""},{},{},{"CadUni836th_Indep",{{"FirstAidKit",1},{"TIOW_Meltagun_Mag",3,5},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_Gear836th",{}},{},"Cad_Inf_Helm836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Shocktrooper_Missile_836_01 : I_143Cadian836_Cadian_Shocktrooper_836th_01 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Shocktrooper - Missile [836]";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni836th_Indep";

			linkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"M36KantRifle836","MissileLauncherDKOKBlack"};
			respawnWeapons[] = {"M36KantRifle836","MissileLauncherDKOKBlack"};

			magazines[] = {"M36KantRifle_mag","MLAT_Mag","M36KantRifle_mag"};
			respawnMagazines[] = {"M36KantRifle_mag","MLAT_Mag","M36KantRifle_mag"};

			backpack = "VNG_CadATBackpack";

			ALiVE_orbatCreator_loadout[] = {{"M36KantRifle836","","","TIOW_2x4xScope_1",{"M36KantRifle_mag",50},{},""},{"MissileLauncherDKOKBlack","","","",{"MLAT_Mag",1},{},""},{},{"CadUni836th_Indep",{{"FirstAidKit",1},{"ACE_elasticBandage",10},{"ACE_quikclot",10},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"Cad_Gear836th",{{"M36KantRifle_mag",10,50}}},{"VNG_CadATBackpack",{{"VNG_MLMelta_Mag",4,1},{"MLHE_Mag",2,1}}},"Cad_Inf_Helm836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Shocktrooper_Plasma_836_01 : I_143Cadian836_Cadian_Shocktrooper_836th_01 {
			author = "VGm. Venture";
			scope = 2;
			scopeCurator = 2;
			displayName = "Cadian Shocktrooper - Plasma [836]";
			side = 2;
			faction = "I_143Cadian836";

			identityTypes[] = {"Head_NATO","LanguageENGB_F"};

			uniformClass = "CadUni836th_Indep";

			linkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
			respawnlinkedItems[] = {"Cad_Gear836th","Cad_Inf_Helm836th","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

			weapons[] = {"TIOW_IG_Plasmagun_01","LuciusLaspistolBlack"};
			respawnWeapons[] = {"TIOW_IG_Plasmagun_01","LuciusLaspistolBlack"};

			magazines[] = {"DK_PlasmaGun_Flask","LuciusLaspistol_mag","DK_PlasmaGun_Flask","LuciusLaspistol_mag"};
			respawnMagazines[] = {"DK_PlasmaGun_Flask","LuciusLaspistol_mag","DK_PlasmaGun_Flask","LuciusLaspistol_mag"};

			backpack = "VNG_CadATBackpack";

			ALiVE_orbatCreator_loadout[] = {{"TIOW_IG_Plasmagun_01","","","",{"DK_PlasmaGun_Flask",10},{},""},{},{"LuciusLaspistolBlack","","","",{"LuciusLaspistol_mag",50},{},""},{"CadUni836th_Indep",{{"FirstAidKit",1},{"ACE_elasticBandage",2},{"TIOW_ig_frag_grenade_mag",2,1},{"DK_PlasmaGun_Flask",2,10}}},{"Cad_Gear836th",{{"DK_PlasmaGun_Flask",1,10},{"LuciusLaspistol_mag",3,50},{"DK_Overcharge_PlasmaGun_Flask",1,3}}},{"VNG_CadATBackpack",{{"DK_Overcharge_PlasmaGun_Flask",5,3},{"DK_PlasmaGun_Flask",6,10},{"LuciusLaspistol_mag",2,50}}},"Cad_Inf_Helm836th","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


			class EventHandlers : EventHandlers {
				class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

				class ALiVE_orbatCreator {
					init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
				};

			};

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

		class I_143Cadian836_Cadian_Officer_836_01 : I_143Cadian836_Cadian_Shocktrooper_836th_01 {
        author = "VGm. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cadian Officer [836]";
        side = 2;
        faction = "I_143Cadian836";

        identityTypes[] = {"Head_NATO","LanguageENGB_F"};

        uniformClass = "CadUni836th";

        linkedItems[] = {"TIOW_IG_Sergeant_Armour_836","TIOW_IG_PatrolCap_836","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"TIOW_IG_Sergeant_Armour_836","TIOW_IG_PatrolCap_836","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"M36KantRifle836"};
        respawnWeapons[] = {"M36KantRifle836"};

        magazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};
        respawnMagazines[] = {"M36KantRifle_mag","M36KantRifle_mag"};

        backpack = "TIOW_CadBackpack_Winter";

        ALiVE_orbatCreator_loadout[] = {{"M36KantRifle836","","","",{"M36KantRifle_mag",50},{},""},{},{},{"CadUni836th",{{"FirstAidKit",1},{"M36KantRifle_mag",4,50},{"TIOW_ig_frag_grenade_mag",2,1}}},{"TIOW_IG_Sergeant_Armour_836",{{"VNG_HighPoweredM36KantRifle_mag",10,25}}},{"TIOW_CadBackpack_Winter",{{"ACE_elasticBandage",20},{"ACE_quikclot",20}}},"TIOW_IG_PatrolCap_836","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

			// custom attributes (do not delete)
			ALiVE_orbatCreator_owned = 1;

		};

	//APCS
		// TIOW_CadianChimAuto_836_Indep
		// TIOW_CadianTrojan_836_Indep
		// TIOW_Centaur_01_Cadian_836_Indep
	
	//Tanks
		// TIOW_Cad_LR_Battlecannon_836th_Indep
		// TIOW_Cad_LR_Vanquisher_836th_Indep
		// TIOW_Cad_LR_Conqueror_836th_Indep
		// TIOW_Cad_LR_Demolisher_836th_Indep
		// TIOW_Cad_LR_Exterminator_836th_Indep
		// TIOW_Cad_LR_Executioner_836th_Indep
		// TIOW_Cad_LR_Annihilator_836th_Indep
		// TIOW_Cad_LR_Punisher_836th_Indep
		
	//Taurox
		//
		
	//Statics
		// TIOW_IG_Lascannon_836_INDEP
		// TIOW_IG_Mortar_836_INDEP
		// TIOW_IG_MissileLauncher_AT_836_INDEP
		// TIOW_IG_MissileLauncher_AA_836_INDEP
		// TIOW_IG_HeavyBolter_836_INDEP
		// TIOW_IG_Autocannon_836_INDEP
};