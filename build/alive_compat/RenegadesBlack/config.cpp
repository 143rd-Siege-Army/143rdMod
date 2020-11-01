class CfgPatches
{
	class DK143_ALIVE_COMPAT
	{
		author = "Siggyfreed";
		name = "DK143 TIOW ALIVE_COMPAT";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "Renegades_Foot", "ML700_Avengers"};
		requiredVersion = 0.1;
		units[] = { "DK143_O_Ren_BL_Officer", "DK143_O_Ren_BL_Lead", "DK143_O_Ren_BL_Vox", "DK143_O_Ren_BL_Rifleman", "DK143_O_Ren_BL_AT", "DK143_O_Ren_BL_Medic", "DK143_O_Ren_BL_LMG", "DK143_O_Ren_BL_Melta", "DK143_O_Ren_BL_Plasma", "DK143_O_Ren_BL_Engineer", "DK143_O_Ren_BL_Sapper", "DK143_O_Ren_BL_Ammo", "DK143_O_Ren_BL_Crew", "DK143_I_Ren_BL_Officer", "DK143_I_Ren_BL_Lead", "DK143_I_Ren_BL_Vox", "DK143_I_Ren_BL_Rifleman", "DK143_I_Ren_BL_AT", "DK143_I_Ren_BL_Medic", "DK143_I_Ren_BL_LMG", "DK143_I_Ren_BL_Melta", "DK143_I_Ren_BL_Plasma", "DK143_I_Ren_BL_Engineer", "DK143_I_Ren_BL_Sapper", "DK143_I_Ren_BL_Ammo", "DK143_I_Ren_BL_Crew", "DK143_RenegadeSTeG4_Black_OP", "DK143_RenegadeSTeG4_Black_Indep", "DK143_RenegadeSteg4_Cargo_Black_OP", "DK143_RenegadeSteg4_Cargo_Black_Indep"};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
    class DK143_O_RenegadesBlack {
        displayName = "143rd Black Clad Renegades";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 1;
    };
	
	class DK143_I_RenegadesBlack {
        displayName = "143rd Black Clad Renegades";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 1;
    };
};

class CfgGroups{
	
	class Indep {
		class DK143_I_RenegadesBlack  {
		    class Infantry {
                name = "Infantry";
                class DK143_I_Ren_BL_CommandSquad {
                    name = "Renegade Command Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Officer";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                    class Unit4 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                };

                class DK143_I_Ren_BL_RifleSquad {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                };

                class DK143_I_Ren_BL_WeaponsSquad {
                    name = "Weapons Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.4;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                };

                class DK143_I_Ren_BL_Fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                };


            };

            class SpecOps {
                name = "Special Forces";
                class DK143_I_Ren_BL_ATSquad {
                    name = "Anti-Tank Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                };

                class DK143_I_Ren_BL_AntiInfantrySquad {
                    name = "Anti-Infantry";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                };

                class DK143_I_Ren_BL_PlasmaSquad {
                    name = "Plasma Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                };

                class DK143_I_Ren_BL_AssualtSquad {
                    name = "Assault Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Sapper";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Melta";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                };

                class DK143_I_Ren_BL_SapperTeam {
                    name = "Sapper Team";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Engineer";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Sapper";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Engineer";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Sapper";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Engineer";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Sapper";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";
				class DK143_I_Ren_BL_MotorizedTeam {
				    name = "Motorized Team";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
					
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_RenegadeSteg4_Cargo_Black_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
				};
            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";
                class DK143_I_Ren_BL_MechanziedRifleSquad {
                    name = "Mechanized Rifle Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_RenegadeChimAuto_Black_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                    class Unit8 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                };

                class DK143_I_Ren_BL_MechanizedWeaponsSquad {
                    name = "Mechanized Weapons Squad";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_RenegadeChimAuto_Black_Indep";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Plasma";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_LMG";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Medic";
                    };
                    class Unit8 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "DK143_I_Ren_BL_Ammo";
                    };
                };


            };

            class Armored {
                name = "Armor";
                class DK143_I_Ren_BL_TankSquadron {
                    name = "Tank Squadron";
                    side = 2;
                    faction = "DK143_I_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "DK143_Renegade_LR_Battlecannon_Black_Indep";
                    };
                    class Unit1 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "DK143_Renegade_LR_Battlecannon_Black_Indep";
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
	
	class East{
		class DK143_O_RenegadesBlack {
            name = "143rd Black Clad Renegades";
			class Infantry {
                name = "Infantry";
                class DK143_O_Ren_BL_CommandSquad {
                    name = "Renegade Command Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Officer";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                    class Unit4 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                };

                class DK143_O_Ren_BL_RifleSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                };

                class DK143_O_Ren_BL_WeaponsSquad {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                };

                class DK143_O_Ren_BL_Fireteam {
                    name = "Fireteam";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                };


            };

            class SpecOps {
                name = "Special Forces";
                class DK143_O_Ren_BL_ATSquad {
                    name = "Anti-Tank Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                };

                class DK143_O_Ren_BL_AntiInfantrySquad {
                    name = "Anti-Infantry";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                };

                class DK143_O_Ren_BL_PlasmaSquad {
                    name = "Plasma Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                };

                class DK143_O_Ren_BL_AssualtSquad {
                    name = "Assault Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Sapper";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Melta";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                };

                class DK143_O_Ren_BL_SapperTeam {
                    name = "Sapper Team";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Engineer";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Sapper";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Engineer";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Sapper";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Engineer";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Sapper";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";
				class DK143_O_Ren_BL_MotorizedTeam {
				    name = "Motorized Team";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
					
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_RenegadeSteg4_Cargo_Black_OP";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
				};
            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";
                class DK143_O_Ren_BL_MechanziedRifleSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_RenegadeChimAuto_Black_OP";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                    class Unit8 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                };

                class DK143_O_Ren_BL_MechanizedWeaponsSquad {
                    name = "Mechanized Weapons Squad";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_RenegadeChimAuto_Black_OP";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Lead";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Plasma";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_LMG";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Medic";
                    };
                    class Unit8 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_Ren_BL_Ammo";
                    };
                };


            };

            class Armored {
                name = "Armor";
                class DK143_O_Ren_BL_TankSquadron {
                    name = "Tank Squadron";
                    side = 0;
                    faction = "DK143_O_RenegadesBlack";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 0;
                        vehicle = "DK143_Renegade_LR_Battlecannon_Black_OP";
                    };
                    class Unit1 {
                        position[] = {15,-15,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_Renegade_LR_Battlecannon_Black_OP";
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
		}
 
};

class CfgVehicles
{
	class O_Soldier_F;
	class TIOW_O_Ren_B_Base; // Renegades base class from TIOW
	// OPFOR UNITS FROM TIOW
	class TIOW_O_Ren_BL_Officer;
	class TIOW_O_Ren_BL_Lead;
	class TIOW_O_Ren_BL_Vox;
	class TIOW_O_Ren_BL_Rifleman;
	class TIOW_O_Ren_BL_AT;
	class TIOW_O_Ren_BL_Medic;
	class TIOW_O_Ren_BL_LMG;
	class TIOW_O_Ren_BL_Melta;
	class TIOW_O_Ren_BL_Plasma;
	class TIOW_O_Ren_BL_Engineer;
	class TIOW_O_Ren_BL_Sapper;
	class TIOW_O_Ren_BL_Ammo;
	class TIOW_O_Ren_BL_Crew;
	// INDEP UNITS FROM TIOW
	class TIOW_I_Ren_BL_Officer;
	class TIOW_I_Ren_BL_Lead;
	class TIOW_I_Ren_BL_Vox;
	class TIOW_I_Ren_BL_Rifleman;
	class TIOW_I_Ren_BL_AT;
	class TIOW_I_Ren_BL_Medic;
	class TIOW_I_Ren_BL_LMG;
	class TIOW_I_Ren_BL_Melta;
	class TIOW_I_Ren_BL_Plasma;
	class TIOW_I_Ren_BL_Engineer;
	class TIOW_I_Ren_BL_Sapper;
	class TIOW_I_Ren_BL_Ammo;
	class TIOW_I_Ren_BL_Crew;
	
	// Make them 143rd Units
	// OPFOR
	class DK143_O_Ren_BL_Officer : TIOW_O_Ren_BL_Officer { cost = 10; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Lead : TIOW_O_Ren_BL_Lead { cost = 4; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Vox: TIOW_O_Ren_BL_Vox { cost = 4; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Rifleman : TIOW_O_Ren_BL_Rifleman { cost = 1; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_AT : TIOW_O_Ren_BL_AT { cost = 3; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Medic : TIOW_O_Ren_BL_Medic { cost = 8; Faction = "DK143_O_RenegadesBlack"; };
	class DK143_O_Ren_BL_LMG : TIOW_O_Ren_BL_LMG { cost = 3; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Melta : TIOW_O_Ren_BL_Melta { cost = 3; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Plasma : TIOW_O_Ren_BL_Plasma { cost = 3; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Engineer : TIOW_O_Ren_BL_Engineer { cost = 2; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Sapper : TIOW_O_Ren_BL_Sapper { cost = 2; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Ammo : TIOW_O_Ren_BL_Ammo { cost = 1; Faction = "DK143_O_RenegadesBlack";};
	class DK143_O_Ren_BL_Crew : TIOW_O_Ren_BL_Crew { cost = 1; Faction = "DK143_O_RenegadesBlack";};
	
	//INDEP
	class DK143_I_Ren_BL_Officer : TIOW_I_Ren_BL_Officer { cost = 10; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Lead : TIOW_I_Ren_BL_Lead { cost = 4; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Vox: TIOW_I_Ren_BL_Vox { cost = 4; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Rifleman : TIOW_I_Ren_BL_Rifleman { cost = 1; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_AT : TIOW_I_Ren_BL_AT { cost = 3; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Medic : TIOW_I_Ren_BL_Medic { cost = 8; Faction = "DK143_I_RenegadesBlack"; };
	class DK143_I_Ren_BL_LMG : TIOW_I_Ren_BL_LMG { cost = 3; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Melta : TIOW_I_Ren_BL_Melta { cost = 3; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Plasma : TIOW_I_Ren_BL_Plasma { cost = 3; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Engineer : TIOW_I_Ren_BL_Engineer { cost = 2; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Sapper : TIOW_I_Ren_BL_Sapper { cost = 2; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Ammo : TIOW_I_Ren_BL_Ammo { cost = 1; Faction = "DK143_I_RenegadesBlack";};
	class DK143_I_Ren_BL_Crew : TIOW_I_Ren_BL_Crew { cost = 1; Faction = "DK143_I_RenegadesBlack";};
	
	// Cars, APCs, Aircraft, Tanks
	// Cars
	// TIOW classes for inheritance 
	class TIOW_RenegadeSTeG4_Black_OP;
	class TIOW_RenegadeSTeG4_Black_Indep;
	class TIOW_RenegadeSteg4_Cargo_Black_OP;
	class TIOW_RenegadeSteg4_Cargo_Black_Indep;
	// 143rd Versions
	class DK143_RenegadeSTeG4_Black_OP: TIOW_RenegadeSTeG4_Black_OP {
		Faction = "DK143_O_RenegadesBlack";
		crew = "DK143_O_Ren_BL_Crew";
	};
	
	class DK143_RenegadeSTeG4_Black_Indep : TIOW_RenegadeSTeG4_Black_Indep {
		Faction = "DK143_I_RenegadesBlack";
		crew = "DK143_I_Ren_BL_Crew";
	};
	
	class DK143_RenegadeSteg4_Cargo_Black_OP : TIOW_RenegadeSteg4_Cargo_Black_OP {
		Faction = "DK143_O_RenegadesBlack";
		crew = "DK143_O_Ren_BL_Crew";
	};
	
	class DK143_RenegadeSteg4_Cargo_Black_Indep : TIOW_RenegadeSteg4_Cargo_Black_Indep {
		Faction = "DK143_I_RenegadesBlack";
		crew = "DK143_I_Ren_BL_Crew";
		
	};
	
	// APCs
	class _RenegadeChimAuto_Black_OP;
	class _RenegadeChimAuto_Black_Indep;
	// 143rd APCs
	class DK143_RenegadeChimAuto_Black_OP : _RenegadeChimAuto_Black_OP{
		Faction = "DK143_O_RenegadesBlack";
		crew = "DK143_O_Ren_BL_Crew";
	};
	
	class DK143_RenegadeChimAuto_Black_Indep : _RenegadeChimAuto_Black_Indep{
		Faction = "DK143_I_RenegadesBlack";
		crew = "DK143_I_Ren_BL_Crew";
	};
	// Aircraft
	class ML700_Avenger_BLOOD;
	
	class DK143_Avenger_Renegade_OP : ML700_Avenger_BLOOD{
		side = 0;
		Faction = "DK143_O_RenegadesBlack";
		crew = "DK143_O_Ren_BL_Crew";
	};
	
	class DK143_Avenger_Renegade_Indep : ML700_Avenger_BLOOD{
		side = 2;
		Faction = "DK143_I_RenegadesBlack";
		crew = "DK143_I_Ren_BL_Crew";
	};
	// Tanks
	class TIOW_Renegade_LR_Battlecannon_Black_OP;
	class TIOW_Renegade_LR_Battlecannon_Black_Indep;
	
	class DK143_Renegade_LR_Battlecannon_Black_OP : TIOW_Renegade_LR_Battlecannon_Black_OP {
		Faction = "DK143_O_RenegadesBlack";
		crew = "DK143_O_Ren_BL_Crew";
	};
	
	class DK143_Renegade_LR_Battlecannon_Black_Indep : TIOW_Renegade_LR_Battlecannon_Black_Indep {
		Faction = "DK143_I_RenegadesBlack";
		crew = "DK143_I_Ren_BL_Crew";
	};
};
