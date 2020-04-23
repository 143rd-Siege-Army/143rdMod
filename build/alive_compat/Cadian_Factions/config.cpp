// Replaces Individual Cadian Configs
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

class CfgGroups{
	
	class Indep {

		
		class Cad667_Indep {
			//Groups here?
            name = "Cadian 667th";
            class Infantry {
                name = "Infantry";

                class Cad667_Indep_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };

                class Cad667_Indep_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };

                class Cad667_Indep_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };

                class Cad667_Indep_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };

                class Cad667_Indep_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_667th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };

                class Cad667_Indep_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad667_Indep_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr667th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr667th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr667th_Indep";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad667_Indep_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 2;
                    faction = "Cad667_Indep";
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
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_667th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad667_Indep_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Med667th_Indep";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad667_Indep_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_CadianChimAuto_667_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT667th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_667th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM667th_Indep";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad667_Indep_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "Cad667_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_667th_Indep";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_667th_Indep";
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
		class Cad700_Indep {
			//Groups here?
            name = "Cadian 700th";

            class Infantry {
                name = "Infantry";

                class Cad700_Indep_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };

                class Cad700_Indep_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };

                class Cad700_Indep_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };

                class Cad700_Indep_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };

                class Cad700_Indep_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_700th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };

                class Cad700_Indep_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad700_Indep_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr700th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr700th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr700th_Indep";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad700_Indep_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Taurox_HS_700_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_700th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad700_Indep_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Med700th_Indep";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad700_Indep_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_CadianChimAuto_700_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT700th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_700th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM700th_Indep";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad700_Indep_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "Cad700_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_700th_Indep";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_700th_Indep";
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
		class Cad776_Indep {
			//Groups here?
            name = "Cadian 776th";

            class Infantry {
                name = "Infantry";

                class Cad776_Indep_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class Cad776_Indep_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class Cad776_Indep_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class Cad776_Indep_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class Cad776_Indep_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

                class Cad776_Indep_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad776_Indep_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr776th_Indep";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad776_Indep_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Taurox_HS_776_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad776_Indep_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Med776th_Indep";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad776_Indep_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_CadianChimAuto_776_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT776th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM776th_Indep";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad776_Indep_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "Cad776_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Indep";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Indep";
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
		class Cad836_Indep {
			//Groups here?
            name = "Cadian 836th";

            class Infantry {
                name = "Infantry";

                class Cad836_Indep_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };

                class Cad836_Indep_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };

                class Cad836_Indep_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };

                class Cad836_Indep_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };

                class Cad836_Indep_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_836th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };

                class Cad836_Indep_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad836_Indep_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr836th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr836th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Kasr836th_Indep";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad836_Indep_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Taurox_HS_836_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_836th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad836_Indep_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 2;
                    faction = "Cad836_Indep";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Indep";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th_Indep";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_Med836th_Indep";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad836_Indep_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 2;
                    faction = "Cad836_Indep";
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
                        vehicle = "TIOW_Cad_SGT836th_Indep";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Indep";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "TIOW_Cad_GM_Melta_836th_Indep";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TIOW_Cad_GM836th_Indep";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad836_Indep_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "Cad836_Indep";
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
	class East {
		
		class Cad667_Op {
			//Groups here?
            name = "Cadian 667th";
			
            class Infantry {
                name = "Infantry";

                class Cad667_Op_infantry_sentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };

                class Cad667_Op_infantry_fireteam {
                    name = "Fireteam";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };

                class Cad667_Op_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };

                class Cad667_Op_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };

                class Cad667_Op_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_667th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };

                class Cad667_Op_infantry_squad {
                    name = "Squad";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad667_Op_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr667th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr667th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr667th_Op";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad667_Op_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Taurox_HS_667_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_667th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad667_Op_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Med667th_Op";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad667_Op_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_CadianChimAuto_667_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT667th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_667th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_667th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM667th_Op";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad667_Op_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 0;
                    faction = "Cad667_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_667th_Op";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_667th_Op";
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
		class Cad700_Op {
			//Groups here?
            name = "Cadian 700th";

            class Infantry {
                name = "Infantry";

                class Cad700_Op_infantry_sentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };

                class Cad700_Op_infantry_fireteam {
                    name = "Fireteam";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };

                class Cad700_Op_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };

                class Cad700_Op_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };

                class Cad700_Op_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_700th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };

                class Cad700_Op_infantry_squad {
                    name = "Squad";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad700_Op_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr700th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr700th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr700th_Op";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad700_Op_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Taurox_HS_700_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_700th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad700_Op_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Med700th_Op";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad700_Op_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_CadianChimAuto_700_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT700th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_700th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_700th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM700th_Op";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad700_Op_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 0;
                    faction = "Cad700_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_700th_Op";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_700th_Op";
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
		class Cad776_Op {
			//Groups here?
            name = "Cadian 776th";

            class Infantry {
                name = "Infantry";

                class Cad776_Op_infantry_sentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };

                class Cad776_Op_infantry_fireteam {
                    name = "Fireteam";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };

                class Cad776_Op_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };

                class Cad776_Op_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };

                class Cad776_Op_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };

                class Cad776_Op_infantry_squad {
                    name = "Squad";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad776_Op_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr776th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr776th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr776th_Op";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad776_Op_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Taurox_HS_776_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad776_Op_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Med776th_Op";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad776_Op_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_CadianChimAuto_776_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT776th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_776th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_776th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM776th_Op";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad776_Op_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 0;
                    faction = "Cad776_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Op";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Op";
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
		class Cad836_Op {
			//Groups here?
            name = "Cadian 836th";

            class Infantry {
                name = "Infantry";

                class Cad836_Op_infantry_sentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };

                class Cad836_Op_infantry_fireteam {
                    name = "Fireteam";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };

                class Cad836_Op_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };

                class Cad836_Op_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };

                class Cad836_Op_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_836th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };

                class Cad836_Op_infantry_squad {
                    name = "Squad";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad836_Op_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr836th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr836th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Kasr836th_Op";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad836_Op_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Taurox_HS_836_OP";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_836th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad836_Op_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Op";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th_Op";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_Med836th_Op";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad836_Op_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_CadianChimAuto_836_Op";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_SGT836th_Op";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Plasma_836th_Op";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "TIOW_Cad_GM_Melta_836th_Op";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "TIOW_Cad_GM836th_Op";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad836_Op_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 0;
                    faction = "Cad836_Op";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_836th_Op";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "TIOW_Cad_LR_Battlecannon_836th_Op";
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
	class West {
		
		class Cad667 {
			//Groups here?
            name = "Cadian 667th";
            class Infantry {
                name = "Infantry";

                class Cad667_infantry_sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };

                class Cad667_infantry_fireteam {
                    name = "Fireteam";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };

                class Cad667_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };

                class Cad667_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_667th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };

                class Cad667_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_667th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };

                class Cad667_infantry_squad {
                    name = "Squad";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_667th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad667_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr667th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr667th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr667th";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad667_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Taurox_HS_667";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_667th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_667th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad667_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_667th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_667th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Med667th";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad667_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_CadianChimAuto_667";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT667th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_667th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_667th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM667th";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad667_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 1;
                    faction = "Cad667";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_667th_Blu";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_667th_Blu";
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
		class Cad700 {
			//Groups here?
            name = "Cadian 700th";

            class Infantry {
                name = "Infantry";

                class Cad700_infantry_sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };

                class Cad700_infantry_fireteam {
                    name = "Fireteam";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };

                class Cad700_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };

                class Cad700_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_700th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };

                class Cad700_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_700th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };

                class Cad700_infantry_squad {
                    name = "Squad";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_700th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad700_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr700th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr700th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr700th";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad700_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Taurox_HS_700";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_700th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_700th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad700_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_700th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_700th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Med700th";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad700_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_CadianChimAuto_700";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT700th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_700th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_700th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM700th";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad700_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 1;
                    faction = "Cad700";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_700th_Blu";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_700th_Blu";
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
		class Cad776 {
			//Groups here?
            name = "Cadian 776th";

            class Infantry {
                name = "Infantry";

                class Cad776_infantry_sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };

                class Cad776_infantry_fireteam {
                    name = "Fireteam";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };

                class Cad776_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };

                class Cad776_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_776th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };

                class Cad776_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_776th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };

                class Cad776_infantry_squad {
                    name = "Squad";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_776th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad776_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr776th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr776th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr776th";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad776_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Taurox_HS_776";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_776th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_776th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad776_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_776th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_776th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Med776th";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad776_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_CadianChimAuto_776";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT776th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_776th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_776th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM776th";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad776_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 1;
                    faction = "Cad776";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Blu";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_776th_Blu";
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
		class Cad836 {
			//Groups here?
            name = "Cadian 836th";
		
            class Infantry {
                name = "Infantry";

                class Cad836_infantry_sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };

                class Cad836_infantry_fireteam {
                    name = "Fireteam";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };

                class Cad836_infantry_fireteam_GL {
                    name = "Fireteam - GL";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };

                class Cad836_infantry_fireteam_plasma {
                    name = "Fireteam - Plasma";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_836th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };

                class Cad836_infantry_fireteam_melta {
                    name = "Fireteam - Melta";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_836th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };

                class Cad836_infantry_squad {
                    name = "Squad";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_836th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };


            };
            class SpecOps {
                name = "Special Forces";
				class Cad836_specops_kaskrin_fireteam {
                    name = "Kasrkin Fireteam";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr836th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr836th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Kasr836th";
                    };
                };

            };
            class Motorized {
                name = "Motorized Infantry";
                class Cad836_Motorized_Taurox_squad {
                    name = "Taurox Squad";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Taurox_HS_836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_836th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_836th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };

            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };
            class Support {
                name = "Support Infantry";
                class Cad836_infantry_hq_platoon_team {
                    name = "HQ Platoon Team";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_836th";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_GrenadeLauncher_836th";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_Med836th";
                    };
                };

            };
            class Mechanized {
                name = "Mechanized Infantry";

                class Cad836_mechanized_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_CadianChimAuto_836";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_SGT836th";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Plasma_836th";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TIOW_Cad_GM_Melta_836th";
                    };
                    class Unit4 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit5 {
                        position[] = {-0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit6 {
                        position[] = {0,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit7 {
                        position[] = {5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit8 {
                        position[] = {-5,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                    class Unit9 {
                        position[] = {10,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TIOW_Cad_GM836th";
                    };
                };

            };
            class Armored {
                name = "Armor";
				class Cad836_armored_tank_squadron {
                    name = "Tank Squadron";
                    side = 1;
                    faction = "Cad836";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_836th_Blu";
                    };
                    class Unit1 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TIOW_Cad_LR_Battlecannon_836th_Blu";
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

