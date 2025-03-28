class mod_unlimited_base : forbidden_unlimited_base 
{
    addons[] = {"SFA_Weapons_R", "SFA_Weapons_N", "SFA_Weapons_S", "ls_weapon", "A3_Weapons_F", "ace_ballistics"};
};

class mod_limited_base : forbidden_limited_base 
{
    addons[] = {"LF_Weapon_Unit_Melee", "WBK_Lightsabers", "WBK_DifferentRobotics_1", "LAGO_Biken", "OPTRE_FC_Weapons_PulseCarbine"};
};

// Can be weapon, magazine, vest, etc. Basically anything that can either go in the arsenal or a crate

class Equipment_Classname : mod_unlimited_base {
    addons[] = {
        "SFA_KOTOR_Arkanian_C", //SFA
        "SFA_KOTOR_Arkanian_rifle",
        "SFA_Arkanian_mag",
        "SFA_B3K2_rifle",
        "SFA_B3K2_mag",
        "SFA_B3K2_Sniper",
        "SFA_B3K2_Sniper_mag",
        "SFA_Boltblaster_Carbine2",
        "SFA_Boltblaster_mag",
        "SFA_Boltblaster_rifle",
        "SFA_Boltblaster_Sniper",
        "SFA_Boltblaster_Sniper_mag",
        "SFA_Causality",
        "SFA_Causality_mag",
        "SFA_Cinnagar_Carbine",
        "SFA_Cinnagar_mag",
        "SFA_DLA13_C",
        "SFA_DLA13_mag",
        "SFA_DLA13_C2",
        "SFA_DLA13_ugl",
        "SFA_DLA13",
        "SFA_E403",
        "SFA_light_proton_E403_mag",
        "SFA_light_proton_mag",
        "SFA_Heavy_proton_E403_mag",
        "SFA_Heavy_proton_mag",
        "SFA_E15",
        "SFA_Heavy_mag",
        "SFA_EL34",
        "SFA_EL34_mag",
        "SFA_T20_rifle",
        "SFA_T20_mag",
        "SFA_X300_Sniper",
        "SFA_X300_Sniper_mag",
        "SFA_KA74_Sniper",
        "SFA_KA74_Sniper_mag",
        "SFA_Westar19_rifle",
        "SFA_Westar19Rifle_mag",
        "SFA_HP_Rifle",
        "SFA_HP_mag",
        "SFA_HP_Sniper",
        "SFA_HP_Sniper_mag",
        "ls_weapon_dc15a_wooden", //LS
        "arifle_MX_F", //Base arma weapons
        "arifle_MX_Black_F",
        "arifle_MX_GL_F",
        "arifle_MX_GL_Black_F",
        "arifle_MX_SW_F",
        "arifle_MX_SW_Black_F",
        "arifle_MXC_F",
        "arifle_MXC_Black_F",
        "arifle_MXM_F",
        "arifle_MXM_Black_F",
        "LMG_Zafir_F",
        "arifle_TRG21_F",
        "SMG_01_F",
        "srifle_DMR_01_F",
        "LMG_Mk200_F",
        "SMG_02_F",
        "arifle_TRG20_F",
        "arifle_Mk20_plain_F",
        "arifle_Mk20_F",
        "arifle_Mk20_GL_plain_F",
        "arifle_Mk20_GL_F",
        "arifle_Mk20C_plain_F",
        "arifle_Mk20C_F",
        "arifle_TRG21_GL_F",
        "arifle_Katiba_F",
        "arifle_Katiba_GL_F",
        "arifle_Katiba_C_F",
        "srifle_EBR_F",
        "hgun_PDW2000_F",
        "SMG_03C_black",
        "SMG_03C_camo",
        "SMG_03C_hex",
        "SMG_03C_khaki",
        "SMG_03_black",
        "SMG_03_camo",
        "SMG_03_hex",
        "SMG_03_khaki",
        "SMG_03C_TR_black",
        "SMG_03C_TR_camo",
        "SMG_03C_TR_hex",
        "SMG_03C_TR_khaki",
        "SMG_03_TR_black",
        "SMG_03_TR_camo",
        "SMG_03_TR_hex",
        "SMG_03_TR_khaki",
        "arifle_SDAR_F",
        "16Rnd_9x21_green_Mag", // Base arma mags
        "16Rnd_9x21_red_Mag",
        "16Rnd_9x21_yellow_Mag",
        "16Rnd_9x21_Mag",
        "30Rnd_9x21_Mag",
        "30Rnd_9x21_Green_Mag",
        "30Rnd_9x21_Red_Mag",
        "30Rnd_9x21_Yellow_Mag",
        "30Rnd_9x21_Mag_SMG_02",
        "30Rnd_9x21_Mag_SMG_02_Tracer_Green",
        "30Rnd_9x21_Mag_SMG_02_Tracer_Red",
        "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
        "30Rnd_556x45_Stanag_green",
        "30Rnd_556x45_Stanag_Sand_green",
        "30Rnd_556x45_Stanag_red",
        "30Rnd_556x45_Stanag_Sand_red",
        "30Rnd_556x45_Stanag",
        "30Rnd_556x45_Stanag_Sand",
        "30Rnd_556x45_Stanag_Tracer_Green",
        "30Rnd_556x45_Stanag_Sand_Tracer_Green",
        "30Rnd_556x45_Stanag_Tracer_Red",
        "30Rnd_556x45_Stanag_Sand_Tracer_Red",
        "30Rnd_556x45_Stanag_Tracer_Yellow",
        "30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
        "30Rnd_65x39_caseless_green",
        "30Rnd_65x39_caseless_green_mag_Tracer",
        "20Rnd_762x51_Mag",
        "100Rnd_65x39_caseless_black_mag",
        "100Rnd_65x39_caseless_khaki_mag",
        "100Rnd_65x39_caseless_mag",
        "100Rnd_65x39_caseless_black_mag_tracer",
        "100Rnd_65x39_caseless_khaki_mag_tracer",
        "100Rnd_65x39_caseless_mag_tracer",
        "30Rnd_65x39_caseless_black_mag",
        "30Rnd_65x39_caseless_khaki_mag",
        "30Rnd_65x39_caseless_mag",
        "30Rnd_65x39_caseless_black_mag_tracer",
        "30Rnd_65x39_caseless_khaki_mag_tracer",
        "30Rnd_65x39_caseless_mag_tracer",
        "150Rnd_762x54_Box",
        "150Rnd_762x54_Box_Tracer",
        "50Rnd_570x28_SMG_03",
        "20Rnd_556x45_UW_mag",
        "200Rnd_65x39_cased_Box",
        "200Rnd_65x39_cased_Box_Tracer",
        "200Rnd_65x39_cased_Box_Red",
        "200Rnd_65x39_cased_Box_Tracer_Red",
        "10Rnd_762x54_Mag",
        "30Rnd_45ACP_Mag_SMG_01",
        "30Rnd_45ACP_Mag_SMG_01_Tracer_Green",
        "30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
        "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
        "ACE_30Rnd_556x45_Stanag_M995_AP_mag",
        "ACE_30Rnd_556x45_Stanag_Mk262_mag",
        "ACE_30Rnd_556x45_Stanag_Mk318_mag",
        "ACE_30Rnd_556x45_Stanag_Tracer_Dim",
        "ACE_5Rnd_127x99_Mag",
        "ACE_5Rnd_127x99_AMAX_Mag",
        "ACE_5Rnd_127x99_API_Mag",
        "ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim",
        "ACE_7Rnd_408_305gr_Mag",
        "ACE_10Rnd_762x51_Mag_Tracer_Dim",
        "ACE_10Rnd_762x51_M118LR_Mag",
        "ACE_10Rnd_762x51_M993_AP_Mag",
        "ACE_10Rnd_762x51_Mk316_Mod_0_Mag",
        "ACE_10Rnd_762x51_Mk319_Mod_0_Mag",
        "ACE_10Rnd_762x51_Mag_SD",
        "ACE_10Rnd_762x51_Mag_Tracer",
        "ACE_20Rnd_762x51_Mag_Tracer_Dim",
        "ACE_20Rnd_762x51_M118LR_Mag",
        "ACE_20Rnd_762x51_M993_AP_Mag",
        "ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
        "ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
        "ACE_20Rnd_762x51_Mag_SD",
        "ACE_20Rnd_762x51_Mag_Tracer",
        "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
        "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
        "ACE_30Rnd_65_Creedmor_black_mag",
        "ACE_30Rnd_65_Creedmor_khaki_mag",
        "ACE_30Rnd_65_Creedmor_mag",
        "ACE_30Rnd_65x47_Scenar_black_mag",
        "ACE_30Rnd_65x47_Scenar_khaki_mag",
        "ACE_30Rnd_65x47_Scenar_mag",
        "ACE_200Rnd_65x39_cased_Box_Tracer_Dim",
        "ACE_10Rnd_762x54_Tracer_mag",
    };
}; // Will not appear in crates, but can be unlimited in the arsenal

class Equipment_Classname_2 : mod_limited_base {
    addons[] = {
        "LFP_Lightsaber_Ault_b", 
        "LFP_Lightsaber_Ault_c", 
        "LFP_Lightsaber_Ault_g",
        "LFP_Lightsaber_Ault_i", 
        "LFP_Lightsaber_Ault_o", 
        "LFP_Lightsaber_Ault_p", 
        "LFP_Lightsaber_Ault_r", 
        "LFP_Lightsaber_Ault_w", 
        "LFP_Lightsaber_Ault_y",
        "Buba_saber",
        "LFP_Candy_Blue_LightSaber",
        "LFP_Candy_Green_LightSaber",
        "LFP_Candy_Pink_LightSaber",
        "LFP_Candy_Purple_LightSaber",
        "LFP_Candy_Red_LightSaber",
        "LFP_Candy_White_LightSaber",
        "LFP_Candy_Orange_LightSaber",
        "LFP_Lightsaber_Crossguard_b",
        "LFP_Lightsaber_Crossguard_g",
        "LFP_Lightsaber_Crossguard_i",
        "LFP_Lightsaber_Crossguard_o",
        "LFP_Lightsaber_Crossguard_p",
        "LFP_Lightsaber_Crossguard_r",
        "LFP_Lightsaber_Crossguard_w",
        "LFP_Lightsaber_Crossguard_y",
        "LFP_DarkSaber",
        "LFP_lightsaber",
        "LFP_Lightsaber_Glowe_b",
        "LFP_Lightsaber_Glowe_g",
        "LFP_Lightsaber_Glowe_i",
        "LFP_Lightsaber_Glowe_o",
        "LFP_Lightsaber_Glowe_p",
        "LFP_Lightsaber_Glowe_r",
        "LFP_Lightsaber_Glowe_w",
        "LFP_Lightsaber_Glowe_y",
        "LFP_Lightsaber_Demi",
        "LWT_Lightsaber_Issan",
        "LWT_Lightsaber_Issan_Second",
        "LST_Lightsaber_Thagoron",
        "LFP_Lightsaber_K_b",
        "LFP_Lightsaber_K_g",
        "LFP_Lightsaber_K_i",
        "LFP_Lightsaber_K_o",
        "LFP_Lightsaber_K_p",
        "LFP_Lightsaber_K_r",
        "LFP_Lightsaber_K_w",
        "LFP_Lightsaber_K_y",
        "LFP_Lightsaber_Jedikatansvord_4",
        "LFP_Lightsaber_Jedikatansvord_8",
        "LFP_Lightsaber_Jedikatansvord_3",
        "LFP_Lightsaber_Jedikatansvord_7",
        "LFP_Lightsaber_Jedikatansvord_9",
        "LFP_Lightsaber_Jedikatansvord_1",
        "LFP_Lightsaber_Jedikatansvord_2",
        "LFP_Lightsaber_Jedikatansvord_5",
        "LFP_Lightsaber_Jedikatansvord_6",
        "LFP_kella",
        "WBK_lightsaber_jedi_TwoSided_Green",
        "WBK_lightsaber_jedi_TwoSided_Blue",
        "WBK_lightsaber_jedi_TwoSided_Purple",
        "WBK_lightsaber_jedi_TwoSided_Yellow",
        "WBK_lightsaber_jedi_TwoSided_Pink",
        "WBK_lightsaber_jedi_TwoSided_White",
        "LST_Lightsaber_Thagoron_Dual",
        "LFP_Lightsaber_Acklay_IB",
        "LFP_Lightsaber_kela_saber",
        "LFP_Lightsaber_Lin_b",
        "LFP_Lightsaber_Lin_g",
        "LFP_Lightsaber_Lin_i",
        "LFP_Lightsaber_Lin_o",
        "LFP_Lightsaber_Lin_p",
        "LFP_Lightsaber_Lin_r",
        "LFP_Lightsaber_Lin_w",
        "LFP_Lightsaber_Lin_y",
        "LFP_Lightsaber_Lin_Lincord",
        "LFP_linkor",
        "LFP_Lightsaber_sword_dv_3",
        "LFP_Lightsaber_sword_dv_7",
        "LFP_Lightsaber_sword_dv_4",
        "LFP_Lightsaber_sword_dv_8",
        "LFP_Lightsaber_sword_dv_9",
        "LFP_Lightsaber_sword_dv",
        "LFP_Lightsaber_sword_dv_2",
        "LFP_Lightsaber_sword_dv_5",
        "LFP_Lightsaber_sword_dv_6",
        "LFP_Lightsaber_Maragoshi_b",
        "LFP_Lightsaber_Maragoshi_g",
        "LFP_Lightsaber_Maragoshi_i",
        "LFP_Lightsaber_Maragoshi_o",
        "LFP_Lightsaber_Maragoshi_p",
        "LFP_Lightsaber_Maragoshi_r",
        "LFP_Lightsaber_Maragoshi_w",
        "LFP_Lightsaber_Maragoshi_y",
        "LFP_Lightsaber_Revenger_b",
        "LFP_Lightsaber_Revenger_g",
        "LFP_Lightsaber_Revenger_i",
        "LFP_Lightsaber_Revenger_o",
        "LFP_Lightsaber_Revenger_p",
        "LFP_Lightsaber_Revenger_r",
        "LFP_Lightsaber_Revenger_w",
        "LFP_Lightsaber_Revenger_y",
        "LFP_Lightsaber_Rezor_b",
        "LFP_Lightsaber_Rezor_g",
        "LFP_Lightsaber_Rezor_i",
        "LFP_Lightsaber_Rezor_o",
        "LFP_Lightsaber_Rezor_p",
        "LFP_Lightsaber_Rezor_r",
        "LFP_Lightsaber_Rezor_w",
        "LFP_Lightsaber_Rezor_y",
        "LFP_Lightsaber_Skywalker_b",
        "LFP_Lightsaber_Skywalker_g",
        "LFP_Lightsaber_Skywalker_i",
        "LFP_Lightsaber_Skywalker_o",
        "LFP_Lightsaber_Skywalker_p",
        "LFP_Lightsaber_Skywalker_r",
        "LFP_Lightsaber_Skywalker_w",
        "LFP_Lightsaber_Skywalker_y",
        "LFP_Lightsaber_Tarn_b",
        "LFP_Lightsaber_Tarn_g",
        "LFP_Lightsaber_Tarn_i",
        "LFP_Lightsaber_Tarn_o",
        "LFP_Lightsaber_Tarn_p",
        "LFP_Lightsaber_Tarn_r",
        "LFP_Lightsaber_Tarn_w",
        "LFP_Lightsaber_Tarn_y",
        "LFP_sword_zan",
        "LFP_zandual",
        "WBK_lightsaber4_jedi",
        "WBK_lightsaber4_green",
        "WBK_lightsaber4_sith",
        "WBK_lightsaber4_yellow",
        "WBK_lightsaber_jedi_TwoSided",
        "WBK_lightsaber_sith_TwoSided",
        "WBK_lightsaber3_jedi",
        "WBK_lightsaber3_sith",
        "WBK_lightsaber3_green",
        "WBK_lightsaber3_yellow",
        "WBK_lightsaber3_pink",
        "WBK_lightsaber3_white",
        "WBK_lightsaber3_purple",
        "WBK_lightsaber2_jedi",
        "WBK_lightsaber2_sith",
        "WBK_lightsaber2_green",
        "WBK_lightsaber2_yellow",
        "WBK_lightsaber2_pink",
        "WBK_lightsaber2_white",
        "WBK_lightsaber2_purple",
        "WBK_lightsaber1_jedi",
        "WBK_lightsaber1_sith",
        "WBK_lightsaber1_green",
        "WBK_lightsaber1_yellow",
        "WBK_lightsaber1_pink",
        "WBK_lightsaber1_white",
        "WBK_lightsaber1_purple",
        "WBK_lightsaber_jedi",
        "WBK_lightsaber_sith",
        "WBK_lightsaber_green",
        "WBK_lightsaber_yellow",
        "WBK_lightsaber_pink",
        "WBK_lightsaber_white",
        "WBK_lightsaber_purple",
        "WBK_lightsaberOldRep_kyloStyle",
        "WBK_lightsaberOldRep_jedi",
        "WBK_B2_GrenadeMod",
        "WBK_B2_NormalMod",
        "WBK_B2_ShotgunMod",
        "LAGO_Biken",
        "AP_MAG",
        "HE_MAG",
        "OPTRE_FC_T60_PulseCarbine",
        "OPTRE_FC_T60_Pulse_Carbine_Battery",
        "WBK_lightsaber_Dookoo_Second_Blue",
        "WBK_lightsaber_Dookoo_Second_Green",
        "WBK_lightsaber_Dookoo_Second_Pink",
        "WBK_lightsaber_Dookoo_Second_Purple",
        "WBK_lightsaber_Dookoo_Second_Red",
        "WBK_lightsaber_Dookoo_Second_White",
        "WBK_lightsaber_Dookoo_Second_Yellow",
        "WBK_lightsaber_IC_Second_Blue",
        "WBK_lightsaber_IC_Second_Green",
        "WBK_lightsaber_IC_Second_Pink",
        "WBK_lightsaber_IC_Second_Purple",
        "WBK_lightsaber_IC_Second_Red",
        "WBK_lightsaber_IC_Second_White",
        "WBK_lightsaber_IC_Second_Yellow",
        "WBK_lightsaber_Kaatarn_Second_Blue",
        "WBK_lightsaber_Kaatarn_Second_Green",
        "WBK_lightsaber_Kaatarn_Second_Pink",
        "WBK_lightsaber_Kaatarn_Second_Purple",
        "WBK_lightsaber_Kaatarn_Second_Red",
        "WBK_lightsaber_Kaatarn_Second_White",
        "WBK_lightsaber_Kaatarn_Second_Yellow",
        "WBK_lightsaber_Kenshi_Second_Blue",
        "WBK_lightsaber_Kenshi_Second_Green",
        "WBK_lightsaber_Kenshi_Second_Pink",
        "WBK_lightsaber_Kenshi_Second_Purple",
        "WBK_lightsaber_Kenshi_Second_Red",
        "WBK_lightsaber_Kenshi_Second_White",
        "WBK_lightsaber_Kenshi_Second_Yellow",
        "WBK_lightsaber_Siitaa_Second_Blue",
        "WBK_lightsaber_Siitaa_Second_Green",
        "WBK_lightsaber_Siitaa_Second_Pink",
        "WBK_lightsaber_Siitaa_Second_Purple",
        "WBK_lightsaber_Siitaa_Second_Red",
        "WBK_lightsaber_Siitaa_Second_White",
        "WBK_lightsaber_Siitaa_Second_Yellow",
        "LST_Lightsaber_Thagoron_Second",
        "LFP_Lightsaber_Demi_Sec",
        "LFP_Lightsaber_Jedikatansvord_Second",
        "LFP_lightsaber_Second"
    };
}; // Will not appear in crates, and can't be unlimited in the arsenal // Will not appear in crates, and can't be unlimited in the arsenal


//@Last Force Project
//@Lightsabers and Force
//@WebKnight Droids

