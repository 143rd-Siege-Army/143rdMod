
class CfgPatches
{
	class DK143_ALIVE_COMPAT_Custom_Factions
	{
		author = "Venture";
		name = "DK143 TIOW ALIVE_COMPAT Custom Factions";
		requiredAddons[] = 
        {"ace_common", "DkoKFoot","CadFoot","OrkBoyz","TIOWSpaceMarines", "AM_weapons"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
	class DK143_O_NurgleCultists {
		displayName = "Nurgle Cultists";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
    	};
	
	class DK143_O_Farsight_Dominate {
		displayname = "Farsight Dominate";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
	};
	
	class DK143_O_Admech {
		displayname = "Adeptus Mechanicus";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
	};
	
	class DK143_O_AgaWil {
		displayname = "Agamemnon's Will";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
	};
	
	class DK143_B_ArgosIV {
		displayname = "Argos IV PDF";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0;
	};
	
	class DK143_B_EmpAlleyFighters {
		displayname = "Emperor's Alley Fighters";
		side = 0;
		flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
		priority = 0
	};
};

class CfgGroups {
	class EAST {
		class DK143_Custom_Factions{
			name = "143rd Custom Factions";
			class DK143_O_NurgleCultists {
				name = "Nurgle Cultists";
				class DK143_O_NurgleCultists_fireteam {
					name = "Fireteam";
					side = 0;
					faction = "DK143_O_NurgleCultists";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_SquadLeader";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Plasmagun";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					 };
				};
				
				class DK143_O_NurgleCultists_Squad {
					name = "Squad";
					side = 0;
					faction = "DK143_O_NurgleCultists";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_SquadLeader";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Plasmagun";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_ML";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
				};
				
				class DK143_O_NurgleCultists_Squad_CQB {
					name = "Squad CQB";
					side = 0;
					faction = "DK143_O_NurgleCultists";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_SquadLeader";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Plasmagun";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Melta";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Nurgle_Cultist_Rifleman";
					};
				};
			};
		
			class DK143_O_Farsight_Dominate {
				name = "Farsight Dominate";
				class DK143_O_Farsight_Dominate_fireteam {
					name = "Fireteam";
					side = 0;
					faction = "DK143_O_Farsight_Dominate";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Marksmen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_IonRifle";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					 };
					 class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					 };
				};
				
				class DK143_O_Farsight_Dominate_Squad {
					name = "Squad";
					side = 0;
					faction = "DK143_O_Farsight_Dominate";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Marksmen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_IonRifle";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_RailRifle";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
				};
				
				class DK143_O_Farsight_Dominate_Squad_CQB {
					name = "Squad CQB";
					side = 0;
					faction = "DK143_O_Farsight_Dominate";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;
					
					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Marksmen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_IonRifle";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_IonRifle";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "DK143_O_Farsight_Dominate_Rifleman";
					};
				};
			};
		
			class DK143_O_Admech {
				name = "Adeptus Mechanicus";

                class DK143_O_Admechfireteam {
                    name = "Skitarii Ranger Fireteam";
                    side = 0;
                    faction = "DK143_O_Admech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger_Alpha";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                };

                class DK143_O_Admechfireteam_ATRilfe {
                    name = "AT Rifle Fireteam";
                    side = 0;
                    faction = "DK143_O_Admech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger_Alpha";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger_AT_Rifle";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                };

                class DK143_O_Admechfireteam_CQB {
                    name = "Skitarii Vanguard Fireteam";
                    side = 0;
                    faction = "DK143_O_Admech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard_Alpha";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                };


                class DK143_O_Admechfireteam_plasma {
                    name = "Skitarii Vanguard Fireteam Plasma";
                    side = 0;
                    faction = "DK143_O_Admech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard_Alpha2";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard_Plasma";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                };

                class DK143_O_Admechsquad {
                    name = "Skitarii Ranger Squad";
                    side = 0;
                    faction = "DK143_O_Admech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger_Alpha";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger_AT_Rifle";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Ranger_AT_Rifle";
                    };
                };

				class DK143_O_Admechsquad_Vanguard {
                    name = "Skitarii Vanguard Squad";
                    side = 0;
                    faction = "DK143_O_Admech";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard_Alpha";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard_Alpha2";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard_Plasma";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "DK143_O_AdmechSkitarii_Vanguard_Plasma";
                    };
                };
			};
		};
	};
	class WEST{};
	class INDEP{};
};

class CfgVehicles
{
	// Define Macros
	/// Magazines macros definition ///
	#define mag_2(a) a, a
	#define mag_3(a) a, a, a
	#define mag_4(a) a, a, a, a
	#define mag_5(a) a, a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	// ARMA 3 Base Soldier Classes
	class O_Soldier_base_F;
	
	// Created Base Classes, used for inheritance only
	// Nurgle
	class DK143_Base_Nurgle_Cultist : O_Soldier_base_F {
		scope = 0; // 0 = inheritance use only, not available by macro or editor, 0 = inheritance only, 1 = Macro, 2 = Editor
		cost = 1; // AI target weight - 1 = Grunt, 4 =Squad Leader, 8 = Medic, 10 = Officer
		faction = "DK143_O_NurgleCultists"; // Sets Faction for the unit
		side = 0; // sets units side, 0 = OPFOR, 1 = BLUFOR, 2 = INDEP
		// Identity (head, language)	
        	identityTypes[] = {"Head_Chaos","LanguageENGB"};
		// Uniform
		uniformClass = "OP_Ren_Uniform_01_Brown";
		//Base/small items
		linkedItems[] = {"TIOW_Cultist_Gear","TIOW_Cultist_Hood_brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"TIOW_Cultist_Gear","TIOW_Cultist_Hood_brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		backpack = "Ren_Backpack_02_black";
	};
	// Farsight Dominate
	class DK143_Base_Farsight_Dominate : O_Soldier_base_F {
		scope = 0;
		scopeCurator = 0;
		displayName = "Farsight Dominate Human";
		side = 0;
		faction = "DK143_O_Farsight_Dominate";

		identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

		uniformClass = "ML700_ML_Cadian_Uniform2";

		linkedItems[] = {"ML700_ML_Cadian_Armor0","ML700_ML_Cadian_Helmet1","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","ML700_Photo_NVG"};
		respawnlinkedItems[] = {"ML700_ML_Cadian_Armor0","ML700_ML_Cadian_Helmet1","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","ML700_Photo_NVG"};

		backpack = "TIOW_Tau_Bck_Strike_FE";
	};
	// Adeptus Mechanicus
	class DK143_O_AdmechSkitarii_BaseRanger : O_Soldier_base_F {
		scope = 0;
		scopeCurator = 0;
			cost = 1;
		displayName = "Skitarii Ranger";
		side = 0;
		faction = "DK143_O_Admech";
		identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};
		uniformClass = "AM_robesUNI";
			hiddenSelections[] = {"camo"};
		linkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"AM_armor","AM_hood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		backpack = "BP";
	};

	class DK143_O_AdmechSkitarii_BaseVanguard : O_Soldier_base_F {
		scope = 0;
		scopeCurator = 0;
		cost = 1;
		displayName = "Skitarii Vanguard";
		side = 0;
		faction = "DK143_O_Admech";
		identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};
		uniformClass = "AM_alpha_robesUNI";
		hiddenSelections[] = {"camo"};
		linkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"AM_armor","AM_VH1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		backpack = "BP";
	};
	
	// Agamemnon's Will
	class DK143_O_AgaWill_Base : O_Soldier_base_F {
		scope = 0;
		scopeCurator = 0;
		displayName = "Agamemnon's Will Soldier";
		side = 0;
		faction = "DK143_O_AgaWill";

		identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

		uniformClass = "U_O_VSoldier_Viper_hex_F";

		linkedItems[] = {"ML700_BP_Armor0","H_HelmetO_ocamo","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","TIOW_IG_NVG"};
		respawnlinkedItems[] = {"ML700_BP_Armor0","H_HelmetO_ocamo","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr","TIOW_IG_NVG"};

		backpack = "Ren_Backpack_02_black";
	};
	
	// Argos IV PDF
	class DK143_B_ArgosIV_Base : B_Soldier_base_F {
		scope = 0;
		scopeCurator = 0;
		displayName = "Argos IV PDF";
		side = 0;
		faction = "DK143_B_ArgosIV";

		identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

		uniformClass = "SGA_SG1_Uniform_wood";

		linkedItems[] = {"V_PlateCarrier2_rgr","IC_cad_helmet_green","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr"};
		respawnlinkedItems[] = {"V_PlateCarrier2_rgr","IC_cad_helmet_green","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr"};

	};
	
	// Emperor's Alley Fighters
	class DK143_B_EmpAlleyFighters_Base : B_Soldier_base_F {
		scope = 0;
		scopeCurator = 0;
		displayName = "Emperor's Alley Fighters Soldier";
		side = 0;
		faction = "DK143_B_EmpAlleyFighters";

		identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};

		uniformClass = "YSA_Uniform_Urban_MARPAT_Patchless";

		linkedItems[] = {"IC_CAD_FlakArmor_Bandolier_Grey","IC_cad_helmet_gray", "G_AirPurifyingRespirator_01","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr", "NVGoogles_blk_F"};
		respawnlinkedItems[] = {"IC_CAD_FlakArmor_Bandolier_Grey","IC_cad_helmet_gray", "G_AirPurifyingRespirator_01","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","TFAR_microdagr", "NVGoogles_blk_F"}
		
		backpack = "IC_CAD_assaultpack_grey_03";
	};
	// Fleshed out Units
	// Nurgle Cultists
	// OPFOR
	class DK143_O_Nurgle_Cultist_Rifleman : DK143_Base_Nurgle_Cultist {
		displayName = "Rifleman Cultist";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		// Give AI gun
		weapons[] = {"AgripinaaAutoChaos3"};
        	respawnWeapons[] = {"AgripinaaAutoChaos3"};
		// Give AI boolets
       	 	magazines[] = {mag_5(30Rnd_Agrip_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
        	respawnMagazines[] = {mag_5(30Rnd_Agrip_mag_Tracer), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
	};
	
	class DK143_O_Nurgle_Cultist_Melta : DK143_Base_Nurgle_Cultist {
		displayName = "Melta Gunner Cultist";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 3;
		// Give AI gun
		weapons[] = {"TIOW_MeltaGun_01","LuciusLaspistolGreen"};
        	respawnWeapons[] = {"TIOW_MeltaGun_01","LuciusLaspistolGreen"};
		// Give AI boolets
        	magazines[] = {mag_5(TIOW_Meltagun_Mag), mag_2(LuciusLaspistol_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
        	respawnMagazines[] = {mag_5(TIOW_Meltagun_Mag), mag_2(LuciusLaspistol_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};

	};
	
	class DK143_O_Nurgle_Cultist_Plasmagun : DK143_Base_Nurgle_Cultist {
		displayName = "Plasma Gunner Cultist";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 3;
		// Give AI gun
		weapons[] = {"Chaos_PlasmaGun","ML700_LasPistol_F"};
        	respawnWeapons[] = {"Chaos_PlasmaGun","ML700_LasPistol_F"};
		// Give AI Boolets
        	magazines[] = {mag_5(DK_PlasmaGun_Flask), mag_2(ML700_Laspistol_Battery), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(DK_PlasmaGun_Flask), mag_2(ML700_Laspistol_Battery), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};

	};
	
	class DK143_O_Nurgle_Cultist_ML : DK143_Base_Nurgle_Cultist {
		displayName = "Missle Launcher Cultist";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 3;
		// Give AI Gun
		weapons[] = {"AgripinaaAutoChaos3","ML700_Launcher_Weapon_LockeLauncher_Blood"};
        	respawnWeapons[] = {"AgripinaaAutoChaos3","ML700_Launcher_Weapon_LockeLauncher_Blood"};
		// Give AI Boolets
        	magazines[] = {mag_5(30Rnd_Agrip_mag_Tracer), mag_2(ML700_84mm_HE_Locke_Mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
        	respawnMagazines[] = {mag_5(30Rnd_Agrip_mag_Tracer), mag_2(ML700_84mm_HE_Locke_Mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
	};
	
	class DK143_O_Nurgle_Cultist_SquadLeader : DK143_Base_Nurgle_Cultist {
		displayName = "Firebrand";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 4;
		// Give AI gun
		weapons[] = {"AgripinaaAutoChaos3"};
        	respawnWeapons[] = {"AgripinaaAutoChaos3"};
		// Give AI boolets
       	 	magazines[] = {mag_5(30Rnd_Agrip_mag_Tracer),mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), mag_2(TIOW_ig_smoke_grenade_mag)};
        	respawnMagazines[] = {mag_5(30Rnd_Agrip_mag_Tracer),mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), mag_2(TIOW_ig_smoke_grenade_mag)};
	};
	
	// Farsight Dominate
	
	class DK143_O_Farsight_Dominate_Rifleman : DK143_Base_Farsight_Dominate {
		displayName = "Farsight Dominate Rifleman";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 1;
		weapons[] = {"TIOW_pulse_carbine_FE","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"TIOW_pulse_carbine_FE","Laserdesignator_01_khk_F"};

		magazines[] = {mag_5(TIOW_pulse_mag),"Laserbatteries", "Laserbatteries", mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), mag_2(TIOW_ig_smoke_grenade_mag)};
		respawnMagazines[] = {mag_5(TIOW_pulse_mag),"Laserbatteries", "Laserbatteries", mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine), mag_2(TIOW_ig_smoke_grenade_mag)};
	};
	
	class DK143_O_Farsight_Dominate_Marksmen : DK143_Base_Farsight_Dominate {
		displayName = "Farsight Dominate Marksmen";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 2;
		
		weapons[] = {"TIOW_pulse_rifle_FE","Laserdesignator_01_khk_F"};
        	respawnWeapons[] = {"TIOW_pulse_rifle_FE","Laserdesignator_01_khk_F"};

        	magazines[] = {mag_5(TIOW_pulse_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine),"Laserbatteries","Laserbatteries"};
        	respawnMagazines[] = {mag_5(TIOW_pulse_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine),"Laserbatteries","Laserbatteries"};
	};
	
	class DK143_O_Farsight_Dominate_IonRifle : DK143_Base_Farsight_Dominate {
		displayName = "Farsight Dominate Ion Riflemen";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 2;
		
		weapons[] = {"TIOW_ion_rifle_FE","Laserdesignator_01_khk_F"};
        	respawnWeapons[] = {"TIOW_ion_rifle_FE","Laserdesignator_01_khk_F"};

        	magazines[] = {mag_5(TIOW_ionrifle_shot_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine),"Laserbatteries","Laserbatteries"};
        	respawnMagazines[] = {mag_5(TIOW_ionrifle_shot_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine),"Laserbatteries","Laserbatteries"};
	};
	
	class DK143_O_Farsight_Dominate_RailRifle : DK143_Base_Farsight_Dominate {
		displayName = "Farsight Dominate Rail Riflemen";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		cost = 2;
		
		weapons[] = {"TIOW_rail_rifle_FE","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"TIOW_rail_rifle_FE","Laserdesignator_01_khk_F"};

        	magazines[] = {mag_5(TIOW_railrifle_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine),"Laserbatteries","Laserbatteries"};
        	respawnMagazines[] = {mag_5(TIOW_railrifle_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine),"Laserbatteries","Laserbatteries"};
	};

	// Adeptus Mechanicus
	class DK143_O_AdmechSkitarii_Ranger : DK143_O_AdmechSkitarii_BaseRanger {
		scope = 2;
        	scopeCurator = 2;
	    	weapons[] = {"galvanic_rifle"};
		respawnWeapons[] = {"galvanic_rifle"};

		magazines[] = {mag_5(galvanic_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(galvanic_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};	
	};
	
	class DK143_O_AdmechSkitarii_Vanguard : DK143_O_AdmechSkitarii_BaseVanguard {
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"radium_carbine"};
        	respawnWeapons[] = {"radium_carbine"};

		magazines[] = {mag_5(radium_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(radium_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
	};
	
	class DK143_O_AdmechSkitarii_Ranger_AT_Rifle : DK143_O_AdmechSkitarii_BaseRanger {
		scope = 2;
        	scopeCurator = 2;
		cost = 3;
		weapons[] = {"transuranic_arquebus"};
		respawnWeapons[] = {"transuranic_arquebus"};
		displayName = "Skitarii Transuranic Rifleman";
		magazines[] = {mag_5(transuranic_AP_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(transuranic_AP_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		
	};
	
	class DK143_O_AdmechSkitarii_Ranger_Alpha : DK143_O_AdmechSkitarii_BaseRanger	{
		scope = 2;
        	scopeCurator = 2;
		linkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        	respawnlinkedItems[] = {"AM_armor","AM_alphahood","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"galvanic_rifle"};
        	respawnWeapons[] = {"galvanic_rifle"};
		displayName = "Skitarii Ranger Alpha";
		magazines[] = {mag_5(galvanic_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(galvanic_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
	};
	
	class DK143_O_AdmechSkitarii_Vanguard_Plasma : DK143_O_AdmechSkitarii_BaseVanguard {
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"plasma_caliver"};
		respawnWeapons[] = {"plasma_caliver"};
		displayName = "Skitarii Vanguard Plasma";
		magazines[] = {mag_5(plasma_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(plasma_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		
	};

	class DK143_O_AdmechSkitarii_Vanguard_Alpha : DK143_O_AdmechSkitarii_BaseVanguard {
		scope = 2;
		scopeCurator = 2;
		uniformClass = "AM_alpha_robesUNI";
		displayName = "Skitarii Vanguard Alpha";
		linkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"AM_armor","AM_VH2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"radium_carbine"};
       	 	respawnWeapons[] = {"radium_carbine"};

		magazines[] = {mag_5(radium_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(radium_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
	};
	
	class DK143_O_AdmechSkitarii_Vanguard_Alpha2 : DK143_O_AdmechSkitarii_BaseVanguard {
		scope = 2;
        	scopeCurator = 2;
		uniformClass = "AM_alpha_robesUNI";
		displayName = "Skitarii Vanguard Alpha-2";
		linkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"AM_armor","AM_VH3","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"radium_carbine"};
        	respawnWeapons[] = {"radium_carbine"};

		magazines[] = {mag_5(radium_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
		respawnMagazines[] = {mag_5(radium_mag), mag_2(TIOW_ig_frag_grenade_mag), mag_2(ML700_krak_grenade_magazine)};
	};
};
