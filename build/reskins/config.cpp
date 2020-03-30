#define _ARMA_

class CfgPatches
{
	class 143_ACE_Config
	{
		author = "Konigstiger";
		name = "DK143 TIOW/Grimdark Reskins";
		requiredAddons[] = 
        {"ace_common","CadFoot"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

//TODO
//Replace chimera_base with actual GD chimera baseclass
//Replace faction with 143rd Custom Faction
//Add custom crew
//Point to textures

class cfgVehicles {

    class chimera_base;
    class 143rd_Chimera_Green_Medical: chimera_base
    {
        _generalMacro = "chimera_base";
        scope = 2;
        side = 1;
        faction = "REPLACE ME";
        displayName = "143rd Medical Chimera (Green)"
        crew = "crewclassname, crewclassname"
    };

};


