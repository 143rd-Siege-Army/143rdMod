// 143rd TIOW Compat - Mordians	
// Units Used:
	// Mordian Infantry
		//	TIOW_Mordian_Trooper_1_Indep
		//	TIOW_Mordian_Trooper_2_Indep
		//	TIOW_Mordian_NCO_1_Indep
		//	TIOW_Mordian_Meltagunner_1_Indep
		//	TIOW_Mordian_Stubber_2_Indep
		//	TIOW_Mordian_Launcher_1_Indep
		//	TIOW_Mordian_Plasmagunner_1_Indep
		//	TIOW_Mordian_Tanker_1_Indep
		//	TIOW_Mordian_Trooper_1_white_Indep
		//	TIOW_Mordian_Trooper_2_white_Indep
		//	TIOW_Mordian_NCO_1_white_Indep
		//	TIOW_Mordian_Meltagunner_1_white_Indep
		//	TIOW_Mordian_Stubber_2_white_Indep
		//	TIOW_Mordian_Launcher_1_white_Indep
		//	TIOW_Mordian_Plasmagunner_1_white_Indep
		//	TIOW_Mordian_Tanker_1_white_Indep
	//APCS
		//	TIOW_ValhallanChimAuto_Grey_Indep
	//Tanks
		//	TIOW_Valhallan_LR_Battlecannon_Grey_Indep
	//Motorized
		// TIOW_Taurox_HS_667_Indep 
#define _ARMA_

class CfgPatches
{
	class DK143_ACE_Compat
	{
		author = "Siggyfreed";
		name = "DK143 TIOW ACE Compat";
		requiredAddons[] = 
        {"TIOW_Mordians"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgGroups {
    class Indep { // Indep, WEST, EAST are options here

        class TIOW_Mordians{
            name = "143rd Mordians";

            class Infantry {
                name = "Infantry";

                class TIOW_Mordians_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };

                class TIOW_Mordians_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };

                class TIOW_Mordians_infantry_fireteam_at {
                    name = "Fireteam - AT";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Launcher_1_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };

                class TIOW_Mordians_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Plasmagunner_1_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };

                class TIOW_Mordians_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Meltagunner_1_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };

                class TIOW_Mordians_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Launcher_1_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Plasmagunner_1_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };


            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";
                class TIOW_Mordians_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Taurox_HS_667_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Mordian_Plasmagunner_1_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Mordian_Meltagunner_1_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";
                class TIOW_Mordians_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Plasmagunner_1_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Launcher_1_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_2_Indep";
                    };
                };

            };

            class Mechanized { 
                name = "Mechanized Infantry";

                class TIOW_Mordians_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_ValhallanChimAuto_Grey_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Mordian_NCO_1_white_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Mordian_Plasmagunner_1_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Mordian_Meltagunner_1_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Mordian_Trooper_1_Indep";
                    };
                };

            };

            class Armored {
                name = "Armor";
				class TIOW_Mordians_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "TIOW_Mordians";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Valhallan_LR_Battlecannon_Grey_Indep";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Valhallan_LR_Battlecannon_Grey_Indep";
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
