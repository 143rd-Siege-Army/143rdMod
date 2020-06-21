class CfgPatches {
	class DK143_ACE_Compat {
		author = "Siggyfreed";
		name = "DK143 TIOW ACE Compat";
		requiredAddons[] = 
        {"AM_weapons"};
		requiredVersion = 0.1;
		units[] = {
			"G_AdMech_Skitarii_Ranger_01",
			"G_AdMech_Skitarii_Ranger_Alpha_01",
			"G_AdMech_Skitarii_Ranger_AT_Rifle_01",
			"G_AdMech_Skitarii_Vanguard_01",
			"G_AdMech_Skitarii_Vanguard_Alpha_1_01",
			"G_AdMech_Skitarii_Vanguard_Alpha_2_01",
			"G_AdMech_Skitarii_Vanguard_Plasma_01",
			"B_AdMech_Skitarii_Ranger_01",
			"B_AdMech_Skitarii_Ranger_Alpha_01",
			"B_AdMech_Skitarii_Ranger_AT_Rifle_01",
			"B_AdMech_Skitarii_Vanguard_01",
			"B_AdMech_Skitarii_Vanguard_Alpha_1_01",
			"B_AdMech_Skitarii_Vanguard_Alpha_2_01",
			"B_AdMech_Skitarii_Vanguard_Plasma_01",
			"O_AdMech_Skitarii_Ranger_01",
			"O_AdMech_Skitarii_Ranger_Alpha_01",
			"O_AdMech_Skitarii_Ranger_AT_Rifle_01",
			"O_AdMech_Skitarii_Vanguard_01",
			"O_AdMech_Skitarii_Vanguard_Alpha_1_01",
			"O_AdMech_Skitarii_Vanguard_Alpha_2_01",
			"O_AdMech_Skitarii_Vanguard_Plasma_01"
		};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
    class O_AdMech {
        displayName = "AdMech";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
	
	class B_AdMech {
        displayName = "AdMech";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
	
	class G_AdMech {
        displayName = "AdMech";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
	
   class EAST {

        class O_AdMech {
            name = "AdMech";

            class Infantry {
                name = "Infantry";

                class O_AdMech_infantry_fireteam {
                    name = "Skitarii Ranger Fireteam";
                    side = 0;
                    faction = "O_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                };

                class O_AdMech_infantry_fireteam_ATRilfe {
                    name = "AT Rifle Fireteam";
                    side = 0;
                    faction = "O_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                };

                class O_AdMech_infantry_fireteam_CQB {
                    name = "Skitarii Vanguard Fireteam";
                    side = 0;
                    faction = "O_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_Alpha_1_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                };


                class O_AdMech_infantry_fireteam_plasma {
                    name = "Skitarii Vanguard Fireteam Plasma";
                    side = 0;
                    faction = "O_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Alpha_2_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Plasma_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                };

                class O_AdMech_infantry_squad {
                    name = "Skitarii Ranger Squad";
                    side = 0;
                    faction = "O_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                };

				class O_AdMech_infantry_squad_Vanguard {
                    name = "Skitarii Vanguard Squad";
                    side = 0;
                    faction = "O_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_Alpha_1_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_Alpha_2_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_Plasma_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_AdMech_Skitarii_Vanguard_Plasma_01";
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
	
	    class WEST {

        class B_AdMech {
            name = "AdMech";

            class Infantry {
                name = "Infantry";

                class B_AdMech_infantry_fireteam {
                    name = "Skitarii Ranger Fireteam";
                    side = 1;
                    faction = "B_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                };

                class B_AdMech_infantry_fireteam_ATRilfe {
                    name = "AT Rifle Fireteam";
                    side = 1;
                    faction = "B_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                };

                class B_AdMech_infantry_fireteam_CQB {
                    name = "Skitarii Vanguard Fireteam";
                    side = 1;
                    faction = "B_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Alpha_1_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                };


                class B_AdMech_infantry_fireteam_plasma {
                    name = "Skitarii Vanguard Fireteam Plasma";
                    side = 1;
                    faction = "B_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Alpha_2_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Plasma_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                };

                class B_AdMech_infantry_squad {
                    name = "Skitarii Ranger Squad";
                    side = 1;
                    faction = "B_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                };

				class B_AdMech_infantry_squad_Vanguard {
                    name = "Skitarii Vanguard Squad";
                    side = 1;
                    faction = "B_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Alpha_1_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Alpha_2_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Plasma_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_AdMech_Skitarii_Vanguard_Plasma_01";
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
	
	    class Indep {

        class G_AdMech {
            name = "AdMech";

            class Infantry {
                name = "Infantry";

                class G_AdMech_infantry_fireteam {
                    name = "Skitarii Ranger Fireteam";
                    side = 2;
                    faction = "G_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                };

                class G_AdMech_infantry_fireteam_ATRilfe {
                    name = "AT Rifle Fireteam";
                    side = 2;
                    faction = "G_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                };

                class G_AdMech_infantry_fireteam_CQB {
                    name = "Skitarii Vanguard Fireteam";
                    side = 2;
                    faction = "G_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_Alpha_1_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                };


                class G_AdMech_infantry_fireteam_plasma {
                    name = "Skitarii Vanguard Fireteam Plasma";
                    side = 2;
                    faction = "G_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_Alpha_2_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_Plasma_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                };

                class G_AdMech_infantry_squad {
                    name = "Skitarii Ranger Squad";
                    side = 2;
                    faction = "G_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_Alpha_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Ranger_AT_Rifle_01";
                    };
                };

				class G_AdMech_infantry_squad_Vanguard {
                    name = "Skitarii Vanguard Squad";
                    side = 2;
                    faction = "G_AdMech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_Alpha_1_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_Alpha_2_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_Plasma_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "G_AdMech_Skitarii_Vanguard_Plasma_01";
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

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 198.146373 on Stable branch
// Generated with ALiVE version 1.12.1.2002131
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class AM_Ranger;
    class AM_Ranger_OCimport_01 : AM_Ranger { scope = 0; class EventHandlers; };
    class AM_Ranger_OCimport_02 : AM_Ranger_OCimport_01 { class EventHandlers; };

    class AM_Ranger_alpha;
    class AM_Ranger_alpha_OCimport_01 : AM_Ranger_alpha { scope = 0; class EventHandlers; };
    class AM_Ranger_alpha_OCimport_02 : AM_Ranger_alpha_OCimport_01 { class EventHandlers; };

    class AM_Ranger_arquebus;
    class AM_Ranger_arquebus_OCimport_01 : AM_Ranger_arquebus { scope = 0; class EventHandlers; };
    class AM_Ranger_arquebus_OCimport_02 : AM_Ranger_arquebus_OCimport_01 { class EventHandlers; };

    class AM_Vanguard;
    class AM_Vanguard_OCimport_01 : AM_Vanguard { scope = 0; class EventHandlers; };
    class AM_Vanguard_OCimport_02 : AM_Vanguard_OCimport_01 { class EventHandlers; };

    class AM_Vanguard_Alpha1;
    class AM_Vanguard_Alpha1_OCimport_01 : AM_Vanguard_Alpha1 { scope = 0; class EventHandlers; };
    class AM_Vanguard_Alpha1_OCimport_02 : AM_Vanguard_Alpha1_OCimport_01 { class EventHandlers; };

    class AM_Vanguard_Alpha2;
    class AM_Vanguard_Alpha2_OCimport_01 : AM_Vanguard_Alpha2 { scope = 0; class EventHandlers; };
    class AM_Vanguard_Alpha2_OCimport_02 : AM_Vanguard_Alpha2_OCimport_01 { class EventHandlers; };

    class AM_Vanguard_plasma;
    class AM_Vanguard_plasma_OCimport_01 : AM_Vanguard_plasma { scope = 0; class EventHandlers; };
    class AM_Vanguard_plasma_OCimport_02 : AM_Vanguard_plasma_OCimport_01 { class EventHandlers; };

	//OPFOR
	class O_AdMech_Skitarii_Ranger_01 : AM_Ranger_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger";
        side = 0;
        faction = "O_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_robesUNI";

        linkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"galvanic_rifle"};
        respawnWeapons[] = {"galvanic_rifle"};

        magazines[] = {"galvanic_mag","galvanic_mag"};
        respawnMagazines[] = {"galvanic_mag","galvanic_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"galvanic_rifle","","","",{"galvanic_mag",30},{},""},{},{},{"AM_robesUNI",{{"FirstAidKit",1},{"galvanic_mag",3,30}}},{"AM_armor",{}},{"BP",{}},"AM_hood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_AdMech_Skitarii_Ranger_Alpha_01 : AM_Ranger_alpha_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger Alpha";
        side = 0;
        faction = "O_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"galvanic_rifle"};
        respawnWeapons[] = {"galvanic_rifle"};

        magazines[] = {"galvanic_mag","galvanic_mag"};
        respawnMagazines[] = {"galvanic_mag","galvanic_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"galvanic_rifle","","","",{"galvanic_mag",30},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"galvanic_mag",3,30}}},{"AM_armor",{}},{"BP",{}},"AM_alphahood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_AdMech_Skitarii_Ranger_AT_Rifle_01 : AM_Ranger_arquebus_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger (AT Rifle)";
        side = 0;
        faction = "O_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"transuranic_arquebus"};
        respawnWeapons[] = {"transuranic_arquebus"};

        magazines[] = {"transuranic_AP_mag","transuranic_AP_mag"};
        respawnMagazines[] = {"transuranic_AP_mag","transuranic_AP_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"transuranic_arquebus","","","",{"transuranic_AP_mag",1},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"transuranic_AP_mag",3,1},{"transuranic_HE_mag",1,1}}},{"AM_armor",{{"transuranic_HE_mag",3,1}}},{"BP",{}},"AM_alphahood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_AdMech_Skitarii_Vanguard_01 : AM_Vanguard_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard";
        side = 0;
        faction = "O_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_AdMech_Skitarii_Vanguard_Alpha_1_01 : AM_Vanguard_Alpha1_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Alpha 1";
        side = 0;
        faction = "O_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_AdMech_Skitarii_Vanguard_Alpha_2_01 : AM_Vanguard_Alpha2_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Alpha 2";
        side = 0;
        faction = "O_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH3","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_AdMech_Skitarii_Vanguard_Plasma_01 : AM_Vanguard_plasma_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Plasma";
        side = 0;
        faction = "O_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"plasma_caliver"};
        respawnWeapons[] = {"plasma_caliver"};

        magazines[] = {"plasma_mag","plasma_mag"};
        respawnMagazines[] = {"plasma_mag","plasma_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"plasma_caliver","","","",{"plasma_mag",10},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"plasma_mag",3,10}}},{"AM_armor",{}},{"BP",{}},"AM_VH2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
	
	//BLUFOR
	class B_AdMech_Skitarii_Ranger_01 : AM_Ranger_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger";
        side = 1;
        faction = "B_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_robesUNI";

        linkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"galvanic_rifle"};
        respawnWeapons[] = {"galvanic_rifle"};

        magazines[] = {"galvanic_mag","galvanic_mag"};
        respawnMagazines[] = {"galvanic_mag","galvanic_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"galvanic_rifle","","","",{"galvanic_mag",30},{},""},{},{},{"AM_robesUNI",{{"FirstAidKit",1},{"galvanic_mag",3,30}}},{"AM_armor",{}},{"BP",{}},"AM_hood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_AdMech_Skitarii_Ranger_Alpha_01 : AM_Ranger_alpha_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger Alpha";
        side = 1;
        faction = "B_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"galvanic_rifle"};
        respawnWeapons[] = {"galvanic_rifle"};

        magazines[] = {"galvanic_mag","galvanic_mag"};
        respawnMagazines[] = {"galvanic_mag","galvanic_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"galvanic_rifle","","","",{"galvanic_mag",30},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"galvanic_mag",3,30}}},{"AM_armor",{}},{"BP",{}},"AM_alphahood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_AdMech_Skitarii_Ranger_AT_Rifle_01 : AM_Ranger_arquebus_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger (AT Rifle)";
        side = 1;
        faction = "B_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"transuranic_arquebus"};
        respawnWeapons[] = {"transuranic_arquebus"};

        magazines[] = {"transuranic_AP_mag","transuranic_AP_mag"};
        respawnMagazines[] = {"transuranic_AP_mag","transuranic_AP_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"transuranic_arquebus","","","",{"transuranic_AP_mag",1},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"transuranic_AP_mag",3,1},{"transuranic_HE_mag",1,1}}},{"AM_armor",{{"transuranic_HE_mag",3,1}}},{"BP",{}},"AM_alphahood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_AdMech_Skitarii_Vanguard_01 : AM_Vanguard_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard";
        side = 1;
        faction = "B_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_AdMech_Skitarii_Vanguard_Alpha_1_01 : AM_Vanguard_Alpha1_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Alpha 1";
        side = 1;
        faction = "B_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_AdMech_Skitarii_Vanguard_Alpha_2_01 : AM_Vanguard_Alpha2_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Alpha 2";
        side = 1;
        faction = "B_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH3","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_AdMech_Skitarii_Vanguard_Plasma_01 : AM_Vanguard_plasma_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Plasma";
        side = 1;
        faction = "B_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"plasma_caliver"};
        respawnWeapons[] = {"plasma_caliver"};

        magazines[] = {"plasma_mag","plasma_mag"};
        respawnMagazines[] = {"plasma_mag","plasma_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"plasma_caliver","","","",{"plasma_mag",10},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"plasma_mag",3,10}}},{"AM_armor",{}},{"BP",{}},"AM_VH2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
	
	//GreenFor
	class G_AdMech_Skitarii_Ranger_01 : AM_Ranger_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger";
        side = 2;
        faction = "G_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_robesUNI";

        linkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"galvanic_rifle"};
        respawnWeapons[] = {"galvanic_rifle"};

        magazines[] = {"galvanic_mag","galvanic_mag"};
        respawnMagazines[] = {"galvanic_mag","galvanic_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"galvanic_rifle","","","",{"galvanic_mag",30},{},""},{},{},{"AM_robesUNI",{{"FirstAidKit",1},{"galvanic_mag",3,30}}},{"AM_armor",{}},{"BP",{}},"AM_hood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class G_AdMech_Skitarii_Ranger_Alpha_01 : AM_Ranger_alpha_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger Alpha";
        side = 2;
        faction = "G_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"galvanic_rifle"};
        respawnWeapons[] = {"galvanic_rifle"};

        magazines[] = {"galvanic_mag","galvanic_mag"};
        respawnMagazines[] = {"galvanic_mag","galvanic_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"galvanic_rifle","","","",{"galvanic_mag",30},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"galvanic_mag",3,30}}},{"AM_armor",{}},{"BP",{}},"AM_alphahood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class G_AdMech_Skitarii_Ranger_AT_Rifle_01 : AM_Ranger_arquebus_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Ranger (AT Rifle)";
        side = 2;
        faction = "G_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"transuranic_arquebus"};
        respawnWeapons[] = {"transuranic_arquebus"};

        magazines[] = {"transuranic_AP_mag","transuranic_AP_mag"};
        respawnMagazines[] = {"transuranic_AP_mag","transuranic_AP_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"transuranic_arquebus","","","",{"transuranic_AP_mag",1},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"transuranic_AP_mag",3,1},{"transuranic_HE_mag",1,1}}},{"AM_armor",{{"transuranic_HE_mag",3,1}}},{"BP",{}},"AM_alphahood","AM_skitarii_head",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class G_AdMech_Skitarii_Vanguard_01 : AM_Vanguard_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard";
        side = 2;
        faction = "G_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class G_AdMech_Skitarii_Vanguard_Alpha_1_01 : AM_Vanguard_Alpha1_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Alpha 1";
        side = 2;
        faction = "G_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class G_AdMech_Skitarii_Vanguard_Alpha_2_01 : AM_Vanguard_Alpha2_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Alpha 2";
        side = 2;
        faction = "G_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"radium_carbine"};
        respawnWeapons[] = {"radium_carbine"};

        magazines[] = {"radium_mag","radium_mag"};
        respawnMagazines[] = {"radium_mag","radium_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"radium_carbine","","","",{"radium_mag",50},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"radium_mag",3,50}}},{"AM_armor",{}},{"BP",{}},"AM_VH3","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class G_AdMech_Skitarii_Vanguard_Plasma_01 : AM_Vanguard_plasma_OCimport_02 {
        author = "VAp. Venture";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skitarii Vanguard Plasma";
        side = 2;
        faction = "G_AdMech";

        identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

        uniformClass = "AM_alpha_robesUNI";

        linkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"plasma_caliver"};
        respawnWeapons[] = {"plasma_caliver"};

        magazines[] = {"plasma_mag","plasma_mag"};
        respawnMagazines[] = {"plasma_mag","plasma_mag"};

        backpack = "BP";

        ALiVE_orbatCreator_loadout[] = {{"plasma_caliver","","","",{"plasma_mag",10},{},""},{},{},{"AM_alpha_robesUNI",{{"FirstAidKit",1},{"plasma_mag",3,10}}},{"AM_armor",{}},{"BP",{}},"AM_VH2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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