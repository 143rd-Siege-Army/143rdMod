#define _ARMA_

class CfgPatches
{
	class 143_ACE_Config
	{
		author = "Konigstiger";
		name = "DK143 TIOW/Grimdark Reskins";
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
		flag = "\reskins\data\faction.paa";
		icon = "\reskins\data\faction.paa";
		priority = 1;
		side = 1;
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
        hiddenSelectionsTextures[] = {"reskins\data\land_vehicles\gd_chimera\medical_green\driveassembly_co.paa","reskins\data\land_vehicles\gd_chimera\medical_green\hull_co.paa","reskins\data\land_vehicles\gd_chimera\medical_green\hullheavybolter_co.paa","reskins\data\land_vehicles\gd_chimera\medical_green\hullmisc_ca.paa","reskins\data\land_vehicles\gd_chimera\medical_green\interior_co.paa","reskins\data\land_vehicles\gd_chimera\medical_green\lasarray_co.paa","reskins\data\land_vehicles\gd_chimera\medical_green\reardoor_co.paa","reskins\data\land_vehicles\gd_chimera\medical_green\turretexterior_co.paa","reskins\data\land_vehicles\gd_chimera\medical_green\turretweapons_co.paa"};
    };
};