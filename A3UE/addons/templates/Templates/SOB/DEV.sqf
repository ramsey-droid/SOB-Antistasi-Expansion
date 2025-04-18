private _hasWs = "ws" in A3A_enabledDLC;
private _hasMarksman = "mark" in A3A_enabledDLC;
private _hasLawsOfWar = "orange" in A3A_enabledDLC;
private _hasTanks = "tank" in A3A_enabledDLC;
private _hasApex = "expansion" in A3A_enabledDLC;
private _hasContact = "enoch" in A3A_enabledDLC;

///////////////////////////
//   Rebel Information   //
///////////////////////////

["name", "SOB"] call _fnc_saveToTemplate;

["flag", "Flag_NATO_F"] call _fnc_saveToTemplate;
["flagTexture", "\z\mti\addons\common\data\SOB_Flag_Grey.paa"] call _fnc_saveToTemplate;
["flagMarkerType", "JLTS_flag_Rep"] call _fnc_saveToTemplate;

["vehiclesBasic", ["MTI_Barc"]] call _fnc_saveToTemplate;
["vehiclesLightUnarmed", ["3AS_ISP_Transport"]] call _fnc_saveToTemplate;
["vehiclesLightArmed", ["MTI_MUTT_I", "MTI_MUTT_C", "mti_factions_rebels_Jeep"]] call _fnc_saveToTemplate;
["vehiclesTruck", ["B_Truck_01_covered_F"]] call _fnc_saveToTemplate;
["vehiclesAT", ["3AS_PX10_REB_F", "3AS_PX10_REB_UP", "3AS_PX10_REB_R3", "I_G_Offroad_01_AT_F", "mti_factions_rebels_AAC_Speeder", "mti_factions_rebels_MTI_AAC_Rocket"]] call _fnc_saveToTemplate;
["vehiclesAA", ["OPTRE_M12R_AA"]] call _fnc_saveToTemplate;

["vehiclesBoat", ["optre_catfish_mg_f"]] call _fnc_saveToTemplate;

["vehiclesPlane", ["MTI_Vwing", "mti_factions_rebels_ForestSpeeder", "mti_factions_rebels_AG_ForestSpeeder"]] call _fnc_saveToTemplate;
["vehiclesMedical", ["MTI_Barc_Stretcher"]] call _fnc_saveToTemplate;

["vehiclesCivCar", ["OPTRE_M12_CIV", "OPTRE_M12_CIV2"]] call _fnc_saveToTemplate;
["vehiclesCivTruck", ["C_Van_01_transport_F"]] call _fnc_saveToTemplate;
["vehiclesCivHeli", ["a3a_C_Heli_Light_02_blue_F"]] call _fnc_saveToTemplate;
["vehiclesCivBoat", ["C_Rubberboat"]] call _fnc_saveToTemplate;
["vehiclesCivPlane", ["C_Plane_Civil_01_F"]] call _fnc_saveToTemplate;
["vehiclesCivSupply", ["C_Truck_02_box_F"]] call _fnc_saveToTemplate;

["staticMGs", ["MTI_HeavyRepeater", "mti_factions_rebels_FDTower"]] call _fnc_saveToTemplate;
["staticAT", ["B_static_AT_F"]] call _fnc_saveToTemplate;
["staticAA", ["B_static_AA_F"]] call _fnc_saveToTemplate;
["staticMortars", ["mti_factions_cis_mortar"]] call _fnc_saveToTemplate;
["staticMortarMagHE", ["MTI_Red_HE_Mag"]] call _fnc_saveToTemplate;
["staticMortarMagSmoke", ["3AS_8Rnd_82mm_Mo_Smoke_white"]] call _fnc_saveToTemplate;

["minesAT", ["ATMine"]] call _fnc_saveToTemplate;
["minesAPERS", ["APERSMine_Range_Mag"]] call _fnc_saveToTemplate;

["breachingExplosivesAPC", ["MTI_BreachingCharge_Mag"]] call _fnc_saveToTemplate;
["breachingExplosivesTank", ["MTI_BreachingCharge_Mag"]] call _fnc_saveToTemplate;

//////////////////////////////////////
//       Antistasi Plus Stuff       //
//////////////////////////////////////

["lootCrate", "mti_supplies_crate_empty"] call _fnc_saveToTemplate;
["rallyPoint", "SFA_GonkFatherMeme"] call _fnc_saveToTemplate;

//animation sources - camo nets, slat cages, decals etc, digit is probability of appearance
["animations", [
    ["vehClass", ["animsource_example_1", 0.25, "animsource_example_2", 0.3]]
]] call _fnc_saveToTemplate;

//vehicle skins
["variants", [
    ["vehClass", ["paint", 1]]
]] call _fnc_saveToTemplate;

//Enter #include "Modset_Reb_Vehicle_Attributes.sqf" here

///////////////////////////
//  Rebel Starting Gear  //
///////////////////////////

private _initialRebelEquipment = ["WBK_craftedAxe"];

if (A3A_hasTFAR) then {_initialRebelEquipment append []};
if (A3A_hasTFAR && startWithLongRangeRadio) then {_initialRebelEquipment append []};
if (A3A_hasTFARBeta) then {_initialRebelEquipment append []};
if (A3A_hasTFARBeta && startWithLongRangeRadio) then {_initialRebelEquipment append []};
_initialRebelEquipment append [];
["initialRebelEquipment", _initialRebelEquipment] call _fnc_saveToTemplate;

private _rebUniforms = ["mti_armoury_trooper_uniform_CR", 
"mti_armoury_trooper_uniform_CT",
"mti_armoury_trooper_uniform_CT_EOD",
"mti_armoury_trooper_uniform_CT_Medic", 
"mti_armoury_trooper_uniform_SCT",
"mti_armoury_trooper_uniform_SCT_EOD",
"mti_armoury_trooper_uniform_SCT_Medic",
"mti_armoury_trooper_uniform_VCT",
"mti_armoury_trooper_uniform_VCT_EOD",
"mti_armoury_trooper_uniform_VCT_Medic",
"mti_armoury_trooper_uniform_CSP", 
"mti_armoury_trooper_uniform_CSP_EOD",
"mti_armoury_trooper_uniform_CSP_Medic",
"mti_armoury_trooper_uniform_CLC",
"mti_armoury_trooper_uniform_CLC_EOD",
"mti_armoury_trooper_uniform_CLC_Medic",
"mti_armoury_trooper_uniform_CS",
"mti_armoury_trooper_uniform_CSM",
"mti_armoury_trooper_uniform_CL",
"mti_armoury_trooper_uniform_Mokka",
"mti_armoury_trooper_uniform_mc_Rat",
"mti_armoury_trooper_uniform_Scorch",
"mti_armoury_trooper_uniform_Pyro",
"mti_armoury_trooper_uniform_Shiro",
"mti_armoury_trooper_uniform_Ark",
"mti_armoury_trooper_uniform_STUKA",
"mti_armoury_trooper_uniform_Akeno",
"mti_armoury_trooper_uniform_Zyys",
"mti_armoury_trooper_uniform_Arcanist",
"mti_armoury_trooper_uniform_War",
"mti_armoury_trooper_uniform_Leer",
"mti_armoury_trooper_uniform_Kix",
"mti_armoury_trooper_uniform_Gonk",
"mti_armoury_trooper_uniform_Glide",
"mti_armoury_trooper_uniform_Pariah",
"mti_armoury_trooper_uniform_Saber",
"mti_armoury_trooper_uniform_Lucks",
"mti_armoury_trooper_uniform_Spyro",
"mti_armoury_trooper_uniform_Storyz",
"mti_armoury_trooper_uniform_Maroon",
"mti_armoury_trooper_uniform_Dust",
"mti_armoury_trooper_uniform_Otter",
"mti_armoury_trooper_uniform_Anchor",
"mti_armoury_trooper_uniform_Dox",
"mti_armoury_trooper_uniform_Spectre",
"mti_armoury_trooper_uniform_Sparrow",
"mti_armoury_trooper_uniform_Beviin",
"mti_armoury_trooper_uniform_Anubis",
"mti_armoury_trooper_uniform_Loken",
"mti_armoury_trooper_uniform_Karrazim",
"mti_armoury_trooper_uniform_Fenrir",
"mti_armoury_trooper_uniform_Xarl",
"mti_armoury_trooper_uniform_Yoshi",
"mti_armoury_trooper_uniform_Kyle",
"mti_armoury_trooper_uniform_Loki",
"mti_armoury_trooper_uniform_Slothem",
"mti_armoury_trooper_uniform_Sin",
"mti_armoury_trooper_uniform_Noir",
"mti_armoury_trooper_uniform_Lich",
"mti_armoury_trooper_uniform_Blurr",
"mti_armoury_trooper_uniform_Hex",
"mti_armoury_trooper_uniform_Mist"];          //Uniforms given to Normal Rebels

private _dlcUniforms = [];          //Uniforms given if DLCs are enabled, only given to the Arsenal not Rebels

if (_hasContact) then {_dlcUniforms append []};
if (_hasApex) then {_dlcUniforms append []};

["uniforms", _rebUniforms + _dlcUniforms] call _fnc_saveToTemplate;         //These Items get added to the Arsenal

["headgear", ["mti_armoury_trooper_helmet_CR", 
"mti_armoury_trooper_helmet_CT", 
"mti_armoury_trooper_helmet_CT_EOD",
"mti_armoury_trooper_helmet_CT_Medic", 
"mti_armoury_trooper_helmet_SCT", 
"mti_armoury_trooper_helmet_Mokka", 
"mti_armoury_trooper_helmet_mc_Rat", 
"mti_armoury_trooper_helmet_Pariah", 
"mti_armoury_trooper_helmet_Templar", 
"mti_armoury_trooper_helmet_Duck", 
"mti_armoury_trooper_helmet_Ghost", 
"mti_armoury_trooper_helmet_Glide", 
"mti_armoury_trooper_helmet_Saber", 
"mti_armoury_trooper_helmet_Lucks", 
"mti_armoury_trooper_helmet_Xetor", 
"mti_armoury_trooper_helmet_Scorch",
"mti_armoury_trooper_helmet_bsj", 
"mti_armoury_trooper_helmet_Dad", 
"mti_armoury_trooper_helmet_Arcanist", 
"mti_armoury_trooper_helmet_Leer", 
"mti_armoury_trooper_helmet_Shoto", 
"mti_armoury_trooper_helmet_Gonk", 
"mti_armoury_trooper_helmet_Mist", 
"mti_armoury_trooper_helmet_Noir", 
"mti_armoury_trooper_helmet_Falcon", 
"mti_armoury_trooper_helmet_Ark", 
"mti_armoury_trooper_helmet_STUKA", 
"mti_armoury_trooper_helmet_Akeno", 
"mti_armoury_trooper_helmet_Zyys", 
"mti_armoury_trooper_helmet_Pyro", 
"mti_armoury_trooper_helmet_Shiro", 
"mti_armoury_trooper_helmet_War", 
"mti_armoury_trooper_helmet_Kix", 
"mti_armoury_trooper_helmet_Sin", 
"mti_armoury_trooper_helmet_Vill", 
"mti_armoury_trooper_helmet_Spring",
"mti_armoury_trooper_helmet_Kyle", 
"mti_armoury_trooper_helmet_Beems", 
"mti_armoury_trooper_helmet_Xarl", 
"mti_armoury_trooper_helmet_Yoshi", 
"mti_armoury_trooper_helmet_Noble", 
"mti_armoury_trooper_helmet_Bezzy", 
"mti_armoury_trooper_helmet_Hex", 
"mti_armoury_trooper_helmet_Blurr", 
"mti_armoury_trooper_helmet_Anchor", 
"mti_armoury_trooper_helmet_mags", 
"mti_armoury_trooper_helmet_Rented", 
"mti_armoury_trooper_helmet_Miller", 
"mti_armoury_trooper_helmet_Dust", 
"mti_armoury_trooper_helmet_Schmootz", 
"mti_armoury_trooper_helmet_Lich", 
"mti_armoury_trooper_helmet_Slothem", 
"mti_armoury_trooper_helmet_Sicko", 
"mti_armoury_trooper_helmet_Storyz", 
"mti_armoury_trooper_helmet_Loki", 
"mti_armoury_trooper_helmet_Kyle", 
"mti_armoury_trooper_helmet_Fenrir", 
"mti_armoury_trooper_helmet_Dox", 
"mti_armoury_trooper_helmet_Maroon", 
"mti_armoury_trooper_helmet_Sig", 
"mti_armoury_trooper_helmet_Cruiser", 
"mti_armoury_trooper_helmet_Monarch", 
"mti_armoury_trooper_helmet_Karrazim", 
"mti_armoury_trooper_helmet_Spyro", 
"mti_armoury_trooper_helmet_Spider", 
"mti_armoury_trooper_helmet_Dxon", 
"mti_armoury_trooper_helmet_Loken", 
"mti_armoury_trooper_helmet_Anubis", 
"mti_armoury_trooper_helmet_Siege", 
"mti_armoury_trooper_helmet_Sparrow", 
"mti_armoury_trooper_helmet_Spectre", 
"mti_armoury_trooper_helmet_Short", 
"mti_armoury_trooper_helmet_Asriel", 
"mti_armoury_trooper_helmet_Cuddler", 
"mti_armoury_trooper_helmet_Jitters", 
"mti_armoury_trooper_helmet_Otter", 
"mti_armoury_trooper_helmet_Prussia", 
"mti_armoury_trooper_helmet_Tec", 
"mti_armoury_trooper_helmet_Jeff", 
"mti_armoury_trooper_helmet_Mads"
]] call _fnc_saveToTemplate;          //Headgear used by Rebel AI until you have Armored Headgear.

/////////////////////
///  Identities   ///
/////////////////////

//Faces and Voices given to Rebel AI
["faces", ["lsd_gar_cloneA_head"]] call _fnc_saveToTemplate;
["voices", ["JLTS_voice_clone"]] call _fnc_saveToTemplate;

//////////////////////////
//       Loadouts       //
//////////////////////////
private _loadoutData = call _fnc_createLoadoutData;
_loadoutData set ["maps", []];
_loadoutData set ["watches", []];
_loadoutData set ["compasses", []];
_loadoutData set ["binoculars", []];

_loadoutData set ["uniforms", _rebUniforms];

_loadoutData set ["facewear", []];

_loadoutData set ["items_medical_basic", ["BASIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_standard", ["STANDARD"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_medic", ["MEDIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_miscEssentials", [] call A3A_fnc_itemset_miscEssentials];

////////////////////////
//  Rebel Unit Types  //
////////////////////////

private _squadLeaderTemplate = {
    ["uniforms"] call _fnc_setUniform;
    ["facewear"] call _fnc_setFacewear;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
    ["binoculars"] call _fnc_addBinoculars;
};

private _riflemanTemplate = {
    ["uniforms"] call _fnc_setUniform;
    ["facewear"] call _fnc_setFacewear;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};

private _prefix = "militia";
private _unitTypes = [
    ["Petros", _squadLeaderTemplate],
    ["SquadLeader", _squadLeaderTemplate],
    ["Rifleman", _riflemanTemplate],
    ["staticCrew", _riflemanTemplate],
    ["Medic", _riflemanTemplate, [["medic", true]]],
    ["Engineer", _riflemanTemplate, [["engineer", true]]],
    ["ExplosivesExpert", _riflemanTemplate, [["explosiveSpecialist", true]]],
    ["Grenadier", _riflemanTemplate],
    ["LAT", _riflemanTemplate],
    ["AT", _riflemanTemplate],
    ["AA", _riflemanTemplate],
    ["MachineGunner", _riflemanTemplate],
    ["Marksman", _riflemanTemplate],
    ["Sniper", _riflemanTemplate],
    ["Unarmed", _riflemanTemplate]
];

[_prefix, _unitTypes, _loadoutData] call _fnc_generateAndSaveUnitsToTemplate;