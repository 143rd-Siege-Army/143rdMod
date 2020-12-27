#define _ARMA_

class CfgPatches
{
	class DK143_ACE_Config
	{
		author = "Konigstiger";
		name = "DK143 TIOW/Grimdark ";
		requiredAddons[] = {"ace_common"};
		requiredVersion = 0.1;
		units[] = {"143rd_Chimera_Green_Medical"};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses
{
	class B_143rd_DKoK
	{
		displayName = "143rd DKoK";
		flag = "\143rdMod\build\reskins\data\faction.paa";
		icon = "\143rdMod\build\reskins\data\faction.paa";
		priority = 1;
		side = 1;
	};
};

class cfgWeapons
{
    class ItemCore;
    class DKoK_GM_Helm: ItemCore {};

    class DK143_GM_Helm_Medicae: DKoK_GM_Helm
    {
        scope = 2;
        displayName = "[DK143] Death Korps Medicae Helmet";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\143rdMod\build\reskins\data\Helmets\HelmetMedicae_co.paa"};
    };
};

class cfgVehicles {

    class ML700_Chimera_Autocannon;
    class 143rd_Chimera_Green_Medical: ML700_Chimera_Autocannon
    {
        _generalMacro = "ML700_Chimera_Autocannon";
        scope = 2;
        side = 1;
        faction = "B_143rd_DKoK";
        displayName = "143rd Medical Chimera (Green)";
        crew = "ML700_Cadian_Rifleman";
        typicalCargo[] = {"ML700_Cadian_Rifleman"};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9"};
        hiddenSelectionsTextures[] = {
            "\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\driveassembly_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\hull_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\hullheavybolter_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\hullmisc_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\interior_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\lasarray_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\reardoor_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\turretexterior_co.paa","\143rdMod\build\reskins\data\land_vehicles\gd_chimera\medical_green\turretweapons_co.paa"};
    };
    /*      PULLED DUE TO TIOW UPDATE: FIX WHEN ICP ADDS THEIR STUPID SHIT IN!
	class TIOW_Taurox_HS_667;
    class 143rd_Taurox_Grey_Base_HS: TIOW_Taurox_HS_667
    {
        _generalMacro = "TIOW_Taurox_HS_667";
        scope = 2;
        side = 1;
        faction = "B_143rd_DKoK";
        displayName = "143rd Taurox (Heavy Stubber)";
        crew = "TIOW_Cad_Tnk667th";
        typicalCargo[] = {"TIOW_Cad_Tnk667th"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\143rdMod\build\reskins\data\land_vehicles\tiow_taurox\143rd_AC_Grey.paa"};
    };
	class TIOW_Taurox_AC_667;
	class 143rd_Taurox_Grey_Base_AC: TIOW_Taurox_AC_667
    {
        _generalMacro = "TIOW_Taurox_HS_667";
        scope = 2;
        side = 1;
        faction = "B_143rd_DKoK";
        displayName = "143rd Taurox (Autocannon)";
        crew = "TIOW_Cad_Tnk667th";
        typicalCargo[] = {"TIOW_Cad_Tnk667th"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\143rdMod\build\reskins\data\land_vehicles\tiow_taurox\143rd_AC_Grey.paa"};
    };
    */
};