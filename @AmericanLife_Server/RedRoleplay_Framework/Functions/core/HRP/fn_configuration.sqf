/*
	Author: Stuctured and written by Ben Harris, Configured by Anthony Penney
	Description: Master Config
*/

HRP_fnc_Configuration = {
	
	player setVariable ["Arrested", false, true];

	message1_active = false;
	message2_active = false;
	message3_active = false;
	message4_active = false;
	message5_active = false;

	smessage1_active = false;

	HRP_Holstered = 0;

	player setVariable ["surrendered", false, true];

	player setVariable ['Shackled',false];

	HRP_interrupted = false;
	ActionLoading = false;
	ActionStopped = false;

	HRP_Time = 520;
	HRP_Revived = false;
	HRP_allowRespawn = true;

	HRP_SpawnPoints =
	[
		["Lakeside City", "HRP_Spawn1"]
	];

	HRP_spawnItems = //Will require phone
	[
		["itemMap"],
		["itemWatch"],
		["RedRoleplay_Phone"],
		["itemCompass"]
	];

	HRP_spawnUniform = "U_C_Poloshirt_burgundy"; // Unsure about this

	HRP_Containers = []; //Containers?
	HRP_Furniture = []; //Is this just classnames?
	HRP_Houses = []; //?

	HRP_dmvLicenses =  // done
	[	
		["Driver License", '["Driver_License", 48]'],
		["Boating License", '["Boating_License", 510]'],
		["Fixed Wing Flying License", '["FixedWing_License", 940]'],
		["Helicopter Flying License", '["Helicopter_License", 1200]'],
		["Truck License", '["Trucking_License", 380]']
	];

	HRP_firearmLicenses = 
	[
		["Firearms License", '["Firearm_License", 185]']
	];

	HRP_houseArray = [

	"Land_i_House_Big_02_V1_F",
	"Land_i_House_Big_02_V2_F",
	"Land_i_House_Big_02_V3_F",
	"xCam_i_House_Big_02_V3_F",
	"xCam_i_House_Big_02_V2_F",
	"xCam_i_House_Big_02_V1_F",
	"Land_i_House_Big_01_V1_F",
	"Land_i_House_Big_01_V2_F",
	"Land_i_House_Big_01_V3_F",
	"xCam_i_House_Big_01_V3_F",
	"xCam_i_House_Big_01_V2_F",
	"xCam_i_House_Big_01_V1_F",

	"Land_i_House_Small_01_V1_F",
	"Land_i_House_Small_01_V2_F",
	"Land_i_House_Small_01_V3_F",
	"Land_i_House_Small_02_V1_F",
	"Land_i_House_Small_02_V2_F",
	"Land_i_House_Small_02_V3_F",
	"Land_i_House_Small_03_V1_F",

	"Land_i_Stone_HouseSmall_V2_F",
	"Land_i_Stone_HouseSmall_V1_F",
	"Land_i_Stone_HouseSmall_V3_F",

	"Land_Slum_House01_F",
	"Land_Slum_House03_F",
	"Land_Slum_House02_F",

	"Land_cargo_house_slum_F",

	"Land_i_Garage_V1_F", 
	"Land_i_Garage_V2_F", 

	"Land_Cargo_House_V1_F", 
	"Land_Cargo_House_V2_F", 
	"Land_Cargo_House_V3_F", 


	"Land_HouseA1", 
	"Land_HouseA1_L", 
	"Land_HouseA", 
	"Land_HouseB", 
	"Land_HouseB1", 
	"Land_HouseB1_L", 
	"Land_HouseC_R", 
	"Land_HouseC1_L", 
	"Land_HouseDoubleAL", 
	"Land_HouseDoubleAL2"

	]; 
   
  HRP_housePriceArray =
    [
    	["Land_i_House_Big_02_V1_F", 214000, 20, "Large House"],
        ["Land_i_House_Big_02_V2_F", 214000, 20, "Large House"],
        ["Land_i_House_Big_02_V3_F", 214000, 20, "Large House"],
        ["xCam_i_House_Big_02_V2_F", 214000, 20, "Large House"],
        ["xCam_i_House_Big_02_V2_F", 214000, 20, "Large House"],
        ["xCam_i_House_Big_02_V1_F", 214000, 20, "Large House"],
        ["Land_i_House_Big_01_V3_F", 214000, 20, "Large House"],


        ["Land_i_House_Small_01_V1_F", 108000, 20, "Small House"],
        ["Land_i_House_Small_01_V2_F", 108000, 20, "Small House"],
        ["Land_i_House_Small_01_V3_F", 108000, 20, "Small House"],
        ["Land_i_House_Small_02_V1_F", 108000, 20, "Small House"],
        ["Land_i_House_Small_02_V2_F", 108000, 20, "Small House"],
        ["Land_i_House_Small_02_V3_F", 108000, 20, "Small House"],
        ["Land_i_House_Small_03_V1_F", 108000, 20, "Small House"],


        ["Land_i_Stone_HouseSmall_V1_F", 145000, 20, "Small Stone House"],
        ["Land_i_Stone_HouseSmall_V2_F", 145000, 20, "Small Stone House"],
        ["Land_i_Stone_HouseSmall_V3_F", 145000, 20, "Small Stone House"],

		
        ["Land_Slum_House01_F", 54000, 20, "Slum House"],
        ["Land_Slum_House02_F", 54000, 20, "Slum House"],
        ["Land_Slum_House03_F", 54000, 20, "Slum House"],
        ["Land_cargo_house_slum_F", 54000, 20, "Slum House"],


        ["Land_i_Garage_V1_F", 75000, 20, "Car Carage"],
        ["Land_i_Garage_V2_F", 75000, 20, "Car Carage"],


        ["Land_Cargo_House_V1_F", 45000, 20, "Cargo House"],
        ["Land_Cargo_House_V2_F", 45000, 20, "Cargo House"],
        ["Land_Cargo_House_V3_F", 45000, 20, "Cargo House"],


        ["Land_HouseA1", 1024000, 20, "Luxury House"],
        ["Land_HouseA1_L", 1024000, 20, "Luxury House"],
        ["Land_HouseA", 1300000, 20, "Luxury House"],
        ["Land_HouseB", 875499, 20, "Luxury House"],
        ["Land_HouseB1", 1240000, 20, "Luxury House"],
        ["Land_HouseB1_L", 1009000, 20, "Luxury House"],
        ["Land_HouseC_R", 1021000, 20, "Luxury House"],
        ["Land_HouseC1_L", 999999, 20, "Luxury House"],
        ["Land_HouseDoubleAL", 2300000, 20, "Luxury House"],
        ["Land_HouseDoubleAL2", 2048000, 20, "Luxury House"]
    ];


	HRP_farmersMarket = ["RR_Wheat","RR_wheatSeeds","RR_woodLog","RR_Logs"];
	HRP_drugDealer = ["RR_Weed","RR_cocaineSeeds","RR_MushroomSeeds","RR_HeroinSeeds","RR_weedSeeds","RR_weedBag","RR_weedGrow2","RR_methBag","RR_cocaine","RR_cocainePlant","RR_CocainePicked","RR_mushrooms","RR_mushroomPlant","RR_mushroomPicked"];
	HRP_mineraltrader = ["RR_coalOre","RR_ironOre","RR_ironIngot","RR_diamondOre","RR_gem_diamond","RR_coal","RR_steelIngot","RR_goldIngot"];
	HRP_sellPrices = 
	[
		["RR_Wheat", 20],
		["RR_wheatSeeds", 5],
		["RR_woodLog", 30],
		["RR_Logs", 50],

		["RR_Weed", 90],
		["RR_cocaineSeeds", 15],
		["RR_MushroomSeeds", 15],
		["RR_HeroinSeeds", 15],
		["RR_weedSeeds", 15],
		["RR_weedBag", 150],
		["RR_weedGrow2", 30],
		["RR_methBag", 30],
		["RR_cocaine", 30],
		["RR_cocainePlant", 32],
		["RR_CocainePicked", 30],
		["RR_mushrooms", 32],
		["RR_mushroomPlant", 30],
		["RR_mushroomPicked", 32],

		["RR_coalOre", 60],
		["RR_ironOre", 75],
		["RR_goldOre", 200],
		["RR_diamondOre", 100],

		["RR_ironIngot", 150],
		["RR_gem_diamond", 250],
		["RR_coal", 105],
		["RR_goldIngot", 360],
		["RR_steelIngot", 320]
	];

	HRP_blackListedUsers = ["76561198063219567", "76561198083977040", "76561198166868892","76561197995364867"];

	HRP_cellNumbers = [1,2,3,4,5,6,7,8,9,10,11,12];

	HRP_payCheque = 39; //This good?
	HRP_bankTellerPay = 170; //Good?
	HRP_towTruckDriverPay = 250; //Good?
	HRP_policePay = 300; //Good?
	HRP_emsPay = 250; //Good?
	HRP_securityPay = 300; //Good?
	HRP_busDriverPay = 150; //Good?
	HRP_truckDriverPay = 150; //Good?

	player setVariable ["payCheque", HRP_payCheque, true];

	HRP_Messages = [];
	HRP_callNumber = [];


	HRP_mineObjects = ["A3L_Bits_Rock_L_Coal","A3L_Bits_Rock_L_Diamond","A3L_Bits_Rock_L_Iron","A3L_Bits_Rock_L_Gold"]; //This just the model class name of each rock?

	HRP_oreMined = 0;

	HRP_action = false;

	HRP_oreTypes =
	[
		["A3L_Bits_Rock_L_Coal","RR_coalOre"],
		["A3L_Bits_Rock_L_Diamond","RR_diamondOre"],
		["A3L_Bits_Rock_L_Gold","RR_goldOre"],
		["A3L_Bits_Rock_L_Iron","RR_ironOre"]
	];

	HRP_mineArea = 
	[
		["Coal_1_MineArea","Coal","A3L_Bits_Rock_L_Coal"],
		["Iron_1_MineArea","Iron","A3L_Bits_Rock_L_Iron"],
		["Gold_1_MineArea","Gold","A3L_Bits_Rock_L_Gold"]	
	]; // ["Diamond_1_MineArea","Diamond","A3L_Bits_Rock_L_Diamond"]

	
	HRP_Trees = 
	[
		["t_pinuss2s_f", "RR_woodLog"] // Is this all the trees on the map??
	];

	HRP_Axes = ["cg_hatchet","A3L_ChainSaw"]; //Good to me

	HRP_treeCount = 0;
	HRP_treeChopped = 0;

	HRP_Jobs = 
	[
		["Taxi Driver", 100, "Drive a Taxi for citizens around the country of lakeside", "HRP_Taxi_Approved"],
		["Bus Driver", 80, "Manage the bus service in Lakeside Isles and help people get around", "HRP_Bus_Approved"],
		["Bank Teller", 120, "Work at the bank helping people to access their accounts", "HRP_Bank_Approved"],
		["Truck Driver", 120, "Drive a truck, helping people to get their goods shipped from A to B", "HRP_Truck_Approved"],
		["Security Worker", 175, "Work as a security guard, protecting areas of the nation from threats", "HRP_Security_Approved"]
	];

	missionNamespace setVariable ["Jobs", HRP_Jobs];

	HRP_phoneAppTime = 600; //?

	player setVariable ["taxiDriver", false, true];

	player setVariable ["approvedJobs", [], true];

	HRP_inCurrentCall = false;
	HRP_receivingCall = false;
	HRP_Calling = false;

	HRP_hadRadio = false; //?

	HRP_Eyes = ["Blue","Brown", "Green", "Hazel"];

 // ["DisplayName", "Item Name", "Blueprint",[["NeededIngredientID1",Ammount Needed, "Display Name"], "Section Name (e.g. Weapon, Magazine, etc), Time taken to craft (mins)"]

	HRP_craftAbleItems =   
	[
		["AK-74 Assault Rifle","hlc_rifle_ak74_dirty", "", [["RR_steelIngot",15, "Steel Ingot"],["RR_woodLog",8, "Wood"]], "Rifles", 1.5, false],
		["30rnd 5.45x39 Subsonic Magazine","hlc_30Rnd_545x39_S_AK", "", [["RR_steelIngot",2, "Steel Ingot"]], "Rifles", 0.2, true],

		["AK-47 Assault Rifle","hlc_rifle_ak47", "bp_ak", [["RR_steelIngot",11, "Steel Ingot"],["RR_woodLog",3, "Wood"]], "Rifles", 1.7, false], 
		["30rnd 7.62x39 Subsonic Magazine","hlc_30rnd_762x39_s_ak", "", [["RR_steelIngot",2, "Steel Ingot"]], "Rifles", 0.2, true],

		["RPK Machine Gun","hlc_rifle_rpk", "bp_rpk", [["RR_steelIngot",18, "Steel Ingot"],["RR_woodLog",4, "Wood"]], "Rifles", 2.5, false], 
		["45rnd 7.62x39 Magazine","hlc_45Rnd_762x39_m_rpk", "bp_rpk", [["RR_steelIngot",4, "Steel Ingot"]], "Rifles", 0.2, true], 

		["M21 Marksman Rifle","hlc_rifle_M21", "bp_m21", [["RR_steelIngot",19, "Steel Ingot"],["RR_woodLog",2, "Wood"]], "Rifles", 2.7, false], 
		["20rnd 7.62x51 Ball Magazine - M21","hlc_20Rnd_762x51_B_M14", "bp_m21", [["RR_steelIngot",3, "Steel Ingot"]], "Rifles", 0.2, true], 

		["FN FAL Rifle","hlc_rifle_LAR", "bp_fal", [["RR_steelIngot",20, "Steel Ingot"],["RR_woodLog",3, "Wood"]], "Rifles", 2.6, false], 
		["20rnd 7.62x51 Ball Magazine - FN FAL","hlc_20Rnd_762x51_B_fal", "bp_fal", [["RR_steelIngot",3, "Steel Ingot"]], "Rifles", 0.2, true], 

		["RPG-7","launch_RPG7_F", "bp_rpg7", [["RR_steelIngot",30, "Steel Ingot"],["RR_woodLog",10, "Wood"]], "Rifles", 3.5, false],
		["RPG-7 HEAT Grenade","RPG7_F", "bp_rpg7", [["RR_steelIngot",15, "Steel Ingot"]], "Rifles", 1, true],

		["Beretta M9","RH_m9", "", [["RR_steelIngot",4, "Steel Ingot"]], "Pistols", 0.3, false],
		["15Rnd 9x19 M9","RH_15Rnd_9x19_M9", "", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["Colt Python","RH_python", "bp_pyth", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.4, false], 
		["6Rnd .357 Mag","RH_6Rnd_357_Mag", "bp_pyth", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.1, true], 

		["Colt M1911","sab_1911_handgun", "", [["RR_steelIngot",5, "Steel Ingot"]], "Pistols", 0.4, false],
		["9Rnd .45ACP Mag","9Rnd_45ACP_Mag", "", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.1, true],

		["CZ 75","RH_cz75", "", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.4, false],
		["16Rnd 9x19 CZ","RH_16Rnd_9x19_CZ", "", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.1, true],

		["Magnum Desert Eagle","RH_deagle", "bp_deag", [["RR_steelIngot",7, "Steel Ingot"]], "Pistols", 0.6, false], 
		["Magnum Desert Eagle - Modern","RH_deaglem", "bp_deag", [["RR_steelIngot",7, "Steel Ingot"]], "Pistols", 0.6, false], 
		["Magnum Desert Eagle - Silver","RH_deagles", "bp_deag", [["RR_steelIngot",7, "Steel Ingot"]], "Pistols", 0.6, false], 
		["7Rnd .50 AE","RH_7Rnd_50_AE", "bp_deag", [["RR_steelIngot",3, "Steel Ingot"]], "Pistols", 0.1, true],
		
		["FN Five-Seven","RH_fn57", "bp_57", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.5, false], 
		["20Rnd 57x28 FN","RH_20Rnd_57x28_FN", "bp_57", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["FN FNP-45","RH_fnp45", "", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.4, false],
		["FN FNP-45 - Tan","RH_fnp45t", "", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.4, false],
		["15Rnd 45cal FNP","RH_15Rnd_45cal_fnp", "", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["Glock 17","RH_g17", "", [["RR_steelIngot",5, "Steel Ingot"]], "Pistols", 0.3, false],
		["Glock 19","RH_g19", "", [["RR_steelIngot",5, "Steel Ingot"]], "Pistols", 0.3, false],
		["7Rnd 9x19 Glock ammo","RH_17Rnd_9x19_g17", "", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["GSH-18","RH_gsh18", "", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.4, false],
		["18Rnd 9x19 GSH","RH_18Rnd_9x19_gsh", "", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["Heckler & Koch MP5K","hlc_smg_mp5k", "bp_mp5k", [["RR_steelIngot",9, "Steel Ingot"]], "Pistols", 0.9, false], 
		["30Rnd 9x19 Ball MP5","hlc_30Rnd_9x19_B_MP5", "bp_mp5k", [["RR_steelIngot",3, "Steel Ingot"]], "Pistols", 0.1, true],

		["Intratec Tec-9","RH_tec9", "", [["RR_steelIngot",8, "Steel Ingot"]], "Pistols", 0.7, false],
		["32Rnd 9x19 TEC","RH_32Rnd_9x19_tec", "", [["RR_steelIngot",3, "Steel Ingot"]], "Pistols", 0.1, true],

		["Kimber Night Warrior","RH_kimber_nw", "", [["RR_steelIngot",6, "Steel Ingot"]], "Pistols", 0.5, false],
		["7Rnd 45cal M1911","RH_7Rnd_45cal_m1911", "", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["Micro UZI","RH_muzi", "bp_uzi", [["RR_steelIngot",8, "Steel Ingot"]], "Pistols", 0.6, false], 
		["30Rnd 9x19 UZI","RH_30Rnd_9x19_UZI", "bp_uzi", [["RR_steelIngot",3, "Steel Ingot"]], "Pistols", 0.1, true],

		["VZ 61 Scorpion","RH_vz61", "bp_vz61", [["RR_steelIngot",6, "Steel Ingot"],["RR_woodLog",1, "Wood"]], "Pistols", 0.5, false], 
		["20Rnd 32cal vz61","RH_20Rnd_32cal_vz61", "bp_vz61", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["Ruger MK2 - Silenced","RH_mk2", "bp_mk2", [["RR_steelIngot",7, "Steel Ingot"]], "Pistols", 0.4, false], 
		["10Rnd 22LR MK2","RH_10Rnd_22LR_mk2", "bp_mk2", [["RR_steelIngot",2, "Steel Ingot"]], "Pistols", 0.1, true],

		["Heckler & Koch USP Match","RH_uspm", "", [["RR_steelIngot",7, "Steel Ingot"]], "Pistols", 0.4, false],
		["16Rnd 40cal USP","RH_16Rnd_40cal_usp", "", [["RR_steelIngot",3, "Steel Ingot"]], "Pistols", 0.1, true],


		["C4 Explosive","RR_c4", "", [["RR_RDX",4, "RDX Compound"],["RR_steelIngot",6, "Steel Ingot"]], "Items", 2, false],
		["Lockpicks","RR_lockpicks", "", [["RR_IronIngot",4, "Iron Ingot"]], "Items", 0.5, false]

	];

	HRP_craftTypes = ["Rifles", "Pistols", "Items"]; //??

	HRP_bluePrints = [
		["bp_uzi", "Uzi"], 
		["bp_ak", "Kalashnikov Rifle"], 
		["bp_vz61", "Scorpian Pistol"], 
		["bp_rpk", "RPK"], 
		["bp_mk2", "MK2"], 
		["bp_m21", "M21 Rifle"], 
		["bp_rpg7", "Rocket-Propelled-Grenade"], 
		["bp_fal", "FN FAL"], 
		["bp_pyth", "Python"],
		["bp_deag", "Desert Eagle"], 
		["bp_57", ".57"], 
		["bp_mp5k", "MPK5"]
	];

	HRP_craftSchedule = [];

	player setVariable ["anonymousCalling", false, true];

	player setVariable ["carryingObject", nil];

	player setVariable ["anonymousCalling", false];
	player setVariable ["blockedCall", false];

	HRP_furnitureTypes = 
	[
		"A3L_WorkBench", 
		"rmair_LoungeTableModernBig",
		"Land_PCSet_01_screen_F",
		"A3L_Boiler",
		"A3L_ManuMachine",
		"A3L_Smelter",
		"Land_Sun_Chair_F",
		"PLP_bo_SunChairWhite",
		"PLP_bo_SunChairRed",
		"PLP_bo_SunChairBlueLight",
		"Land_ChairPlastic_F",
		"Land_ChairWood_F",
		"Land_sfp_chair1",
		"Land_rmair_CouchModern",
		"Land_sfp_sofa1",
		"Land_MG_BlackModernSofa",
		"PLP_bo_SideTable",
		"Land_TablePlastic_01_F",
		"Land_WoodenTable_large_F",
		"Land_WoodenTable_small_F",
		"OfficeTable_01_new_F",
		"Land_sfp_dining_table1",
		"Land_sfp_table1",
		"Land_sfp_table_lack_glass1",
		"Land_sfp_lack1",
		"Land_sfp_lack2",
		"Land_sfp_bird_table_1",
		"rmair_BenchModernTable",
		"rmair_loungetablemodernbig",
		"rmair_loungetablemodernsmall",
		"land_bench_F",
		"Land_MapBoard_F",
		"Land_sfp_kitchen_cabinet",
		"Land_sfp_sink",
		"Land_sfp_stove",
		"Land_sfp_closet_white",
		"Land_sfp_desk1",
		"Land_sfp_grill1",
		"Land_sfp_refrigerator",
		"Fridge_01_Closed_F",
		"Land_ShelvesWooden_F",
		"TOB_LawnLightPlasticOn",
		"PLP_bo_ChainOfLightsMono",
		"PLP_bo_ChainOfLightsMonoShort",
		"PLP_bo_ChainOfLightsColored",
		"PLP_bo_ChainOfLightsColoredShort",
		"Land_Fan",
		"Land_Threelights",
		"Land_Spotlight",
		"Land_OverheadSpotlight",
		"Land_Fluor_Lamp",
		"Land_Camping_Light_F",
		"PLP_bo_chainoflanterns",
		"PLP_bo_Sunlounger",
		"PLP_bo_SunloungerSeatCover",
		"PLP_bo_barstool",
		"Land_Sunshade_02_F",
		"Land_Sunshade_01_F",
		"Land_Sunshade_04_F",
		"Land_TableDesk_F",
		"Land_sfp_mil_bunkbed_single",
		"Land_sfp_mil_bunkbed",
		"TOB_ClothesDryerRotaryColoredB",
		"Land_FlatTV_01_F","Land_SamsungTV",
		"bis_pc",
		"land_PCSET_01_screen_F",
		"land_trophy_01_bronze_F",
		"land_trophy_01_silver_F",
		"land_trophy_01_gold_F",
		"Land_Microwave_01_F",
		"Land_WaterCooler_01_new_F",
		"red_desk_1_0",
		"red_desk_1_0",
		"red_desk_1_1",
		"red_desk_1_2",
		"red_desk_1_3",
		"red_whiteboard_1_0",
		"red_trashcan",
		"red_filecabinet",
		"red_interrogationtable",
		"red_projectscreen",
		"red_locker",
		"red_conferencetable",
		"red_conferencetable2",
		"red_shelf",
		"red_shelf2",
		"red_chair_1_1",
		"red_chair_1_2",
		"red_chair_1_3",
		"red_chair_1_4",
		"red_chair_1_5",
		"red_chair_1_6",
		"red_chair_1_7",
		"red_chair_1_8",
		"red_chair_1_9",
		"red_chair_1_10",
		"red_chair_1_11",
		"red_chair_1_12",
		"red_chair_1_13",
		"red_chair_1_14",
		"red_chair_1_15",
		"red_chair_1_16",
		"JDDesk",
		"JDShelf",
		"JDLockers",
		"JDTable",
		"JDWashingMachine"
	];

	HRP_inProcessing = false;

	HRP_processingUnitsInit = ["A3L_Boiler", "A3L_ManuMachine", "A3L_Smelter"];

	HRP_objectsToProcess = //Items
	[
		["RR_ironOre", "RR_ironIngot", "Iron", 600],
		["RR_goldOre", "RR_goldIngot", "Gold", 600],
		["RR_diamondOre", "RR_diamonduncut", "Uncut Diamond", 600],
		["RR_coalOre", "RR_coal", "Coal", 600]
	];

	HRP_ProcessItems =
	[
		["Iron Ingot","RR_ironIngot", 1, [1,2],[["RR_ironOre",1]]],
		["Gold Ingot","RR_goldIngot", 1, [1,2],[["RR_goldOre",1]]],
		["Coal","RR_coal", 1, [2],[["RR_CoalOre",1]]],
		["Steel Ingot","RR_steelIngot", 1, [3],[["RR_ironOre",1],["RR_coalOre",1]]],
		["Uncut Diamond","RR_gem_diamond", 1, [2],[["RR_DiamondOre",1]]]
	];
	HRP_ProcessingUnits = 
	[	
		["A3L_Smelter", 1, "Smeltery"],
		["A3L_Boiler", 2, "Macerator"],
		["A3L_ManuMachine", 3, "Alloy Smeltery"]	
	];

	HRP_processingLimits = [1,2,3,4,5];

	HRP_carryingPot = false;
	HRP_growTime = 5; // Minutes.

	HRP_bankRobberyTime = 15; // Minutes

	HRP_recentRobberyTime = 30; // Minutes

	HRP_maxBankCash = 10000;

	HRP_lockBoxArray = 
	[
		["RR_ironIngot", 4, "Item"]
	]; 

	

	HRP_lockBoxesRobbed = 0; 

	HRP_ringTones = 
	[
		["Classic iPhone", "iphone_ringtone", 3],
		["Chimba", "chimba_ringtone", 3],
		["House of Cards", "hoc_ringtone", 3],
		["Marimba", "marimba2_ringtone", 3]
	];

		
	HRP_trainingTypes =
	[	
		["Rebel Training", '["HRP_Civ_Rebel", 50]'],
		["Diving Training", '["HRP_Civ_Diving", 50]']
	];

	player setVariable ["unconscious", false, true];
	player setVariable ["stabilized", false, true];

	HRP_startingCars = ["RDS_GAZ24_Civ_01","RDS_Lada_Civ_01","RDS_Golf4_Civ_01", "RDS_S1203_Civ_01"];


	HRP_garageMarkers = ["HRP_garage1","HRP_garage2","HRP_garage3","HRP_pGarage_1","HRP_pGarage_2","HRP_pGarage_3", "HRP_emsGarage_1", "HRP_emsGarage_2"];

	HRP_openANPR = false;

	HRP_healPrice = 40;

	HRP_Food = 
	[
		["Water", 2,40,"drinkbev", "CG_Water_Item_i"], // Display Name, Food or Drink (1/2), Ammount to full, sound to play
		["Tactical Bacon", 1,43,"eatfood", "CG_TacBac_Item_i"],
		["Can of Coke", 2,35,"drinkcanbev", "CG_WaterCustom01_Item_i"],
		["Dr Pepper", 2,35,"drinkcanbev", "CG_WaterCustom02_Item_i"],
		["Monster Energy Drink!", 2,45,"drinkcanbev", "CG_WaterCustom04_Item_i"],
		["Dicks Sausage", 1,32,"eatfood", "CG_TacBacCustom01_Item_i"],
		["Dog Food", 1,15,"eatfood", "CG_TacBacCustom02_Item_i"],
		["Chicken Soup", 1,24,"eatfood", "CG_TacBacCustom03_Item_i"],
		["Pea Soup", 1,26,"eatfood", "CG_TacBacCustom05_Item_i"],
		["Pumpkin Soup", 1,22,"eatfood", "CG_TacBacCustom06_Item_i"],
		["Beef Soup", 1,26,"eatfood", "CG_TacBacCustom07_Item_i"],
		["Lettuce Soup", 1,26,"eatfood", "CG_TacBacCustom08_Item_i"],
		["Bread", 1,29,"eatfood", "Bread"],
		["HamCheeseSanga", 1,36,"eatfood", "HamCheeseSanga"],
		["Lamington", 1,31,"eatfood", "Lamington"],
		["MaggiiNoodle", 1,25,"eatfood", "MaggiiNoodle"],
		["MeatPie", 1,42,"eatfood", "MeatPie"],
		["PartyPack", 1,45,"eatfood", "PartyPack"],
		["Sausages", 1,41,"eatfood", "Sausages"],
		["Shapes", 1,38,"eatfood", "Shapes"],
		["SmithsChips", 1,43,"eatfood", "SmithsChips"],
		["Steak", 1,52,"eatfood", "Steak"],
		["Timtams", 1,39,"eatfood", "Timtams"],
		["VegemiteSandwhich", 1,40,"eatfood", "VegemiteSandwhich"],
		["WeetBix", 1,35,"eatfood", "WeetBix"]
	];

	HRP_alcohol = 
	[
	    ["Guinness", "CG_WaterCustom03_Item_i", 0.6, "drinkbev"], // ammount to increase toxicity level by
	    ["XXXX Gold Stubbie", "beer4xGold", 0.4, "drinkbev"],
	    ["Carlton Draught Stubbie", "CarltonDraught", 0.3, "drinkcanbev"],
	    ["Corona Stubbie", "Corona", 0.3, "drinkcanbev"],
	    ["Coopers Stubbie", "Coopers", 0.4, "drinkcanbev"],
	    ["Jim Bean Can", "Jimbeam", 0.5, "drinkcanbev"],
	    ["VB Can", "VBCan", 0.4, "drinkcanbev"]
	];

	player setVariable ["currentOccupation", "Unemployed", true];

	player setVariable ["bloodToxicity", 0, true];

	HRP_Hunger = 0;
	HRP_Thirst = 0;

	HRP_atmRobTime = 200;
	HRP_atmRobCash = 700;

	HRP_LoadingCreate = false;

	HRP_fnc_vehiclePreviewLocations = 
	[
		["main",[8577.27,6515.7,1], [8583.47,6523.31,3]],
		["furniture", [8732.53,6758.18,11.1255], [8734.5,6762.53,13]],
		["machines", [10672,14728.5,0], [10675.7,14725.3,2]]
	];

	player setVariable ['knockedOut', false, true];

	HRP_patDownCoolDown = false;

	HRP_earPlugs = true;

	HRP_Wrecks = 
	[
		["Land_UWreck_FishingBoat_F", "Drug", 5],
		["Land_Wreck_Traw_F", "All", 5],
		["Land_Boat_05_wreck_F", "Supply", 5],
		["Land_Wreck_Traw2_F", "All", 5]
	];

	HRP_wreckLoot = 
	[
		["Drug", [	
		[["RR_weedSeeds", "RR_weedSeeds"], "Item"], 
		[["RR_weedBag", "RR_weedBag"], "Item"], 
		[["RR_mushrooms", "RR_cocaine"], "Item"], 
		[["RR_cocaine", "RR_weedSeeds"], "Item"],
		[["RR_mushrooms", "RR_mushrooms"], "Item"],
		[["RR_mushroomPlant", "RR_mushroomPicked"], "Item"],
		[["RR_heroin", "RR_heroin"], "Item"],
		[["RR_heroinPlant", "RR_cocaine"], "Item"]
		]
		],


		["Supply",[	
		[["RR_bluePrintNotes", "RR_cuffkeys"], "Item"], 
		[["RR_handcuff", "RR_cuffkeys"], "Item"],
		[["RR_legshackles", "RR_cuffkeys"], "Item"],
		[["RR_RDX", "RR_Pot"], "Item"],
		[["RR_c4", "RR_Zipties"], "Item"],
		[["RR_Rope", "RR_Rope"], "Item"],
		[["RR_coalOre", "RR_coalOre"], "Item"],
		[["RR_ironOre", "RR_ironOre"], "Item"],
		[["RR_coalOre", "RR_diamondOre"], "Item"],
		[["RR_goldOre", "RR_ironOre"], "Item"],
		[["RR_coal", "RR_steelIngot"], "Item"],
		[["RR_woodLog", "RR_woodLog"], "Item"],
		[["RR_gem_sapphire", "RR_gem_emerald"], "Item"],
		[["RR_gem_diamond", "RR_gem_diamond"], "Item"],
		[["beer4xGold", "CarltonDraught"], "Item"],
		[["CG_TacBacCustom08_Item_i", "CG_TacBacCustom07_Item_i"], "Item"],
		[["CG_TacBacCustom03_Item_i", "CG_TacBacCustom05_Item_i"], "Item"],
		[["VBCan", "Bread"], "Item"],
		[["Lamington", "MeatPie"], "Item"],
		[["Sausages", "SmithsChips"], "Item"],
		[["Timtams", "WeetBix"], "Item"],
		[["RR_Zipties", "RR_lockpicks"], "Item"]
		]	
		],


		["All",[	
		[["RR_bluePrintNotes", "ItemGPS"], "Item"], 
		[["ItemGPS", "ItemGPS"], "Item"],
		[["beer4xGold", "CarltonDraught"], "Item"],
		[["CG_TacBacCustom08_Item_i", "CG_TacBacCustom07_Item_i"], "Item"],
		[["CG_TacBacCustom03_Item_i", "CG_TacBacCustom05_Item_i"], "Item"],
		[["VBCan", "Bread"], "Item"],
		[["Lamington", "MeatPie"], "Item"],
		[["Sausages", "SmithsChips"], "Item"],
		[["Timtams", "WeetBix"], "Item"],
		[["RR_Zipties", "RR_lockpicks"], "Item"],
		[["RR_handcuff", "RR_cuffkeys"], "Item"],
		[["RR_legshackles", "RR_cuffkeys"], "Item"]
		]	
		]
	];

	HRP_wreckMarkers = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27];

	HRP_InteractionButtons = [1600,1601,69028,1603,1604,1605,1606,1607];

	HRP_noDamageWeapons= ["A3L_JackHammer", "A3L_ChainSaw"];

	HRP_busPayAmmount = 100;
	HRP_deliveryPayAmmount = 500;
	HRP_companyDeliveryPayAmmount = 350;

	HRP_Buses = [""];
	HRP_busStops = 
	[
		[1, "Lakeside Gas Station"],
		[2, "Main Street"],
		[3, "Court"],
		[4, "Lakeside National"],
		[5, "Lakeside General"],
		[6, "Confederation Bridge"],
		[7, "Mapleton Garage"],
		[8, "Mapleton Market"],
		[9, "Penneyville"],
		[10, "Georgetown"],
		[11, "Lakeside International"],
		[12, "Penneyville"],
		[13, "Confederation Bridge"],
		[14, "Bus Depot"]
	];

	HRP_truckMarkersPickup =
	[
		[1,"Knoxville Industrial"],
		[2,"Los Diablos International"],
		[4,"Lakeside Industrial"],
		[5,"Lakeside National Airfield"],
		[6,"Lakeside Industrial"],
		[7,"Lakeside Industrial"],
		[8,"Lakeside Industrial"],
		[9,"Lakeside Industrial"],
		[10,"San Cristobal Trucking Facility"],
		[11,"San Cristobal Trucking Facility"],
		[12,"San Cristobal Trucking Facility"],
		[13,"San Cristobal Trucking Facility"],
		[14,"San Cristobal Trucking Facility"],
		[15,"San Cristobal Trucking Facility"],
		[16,"Gold Mine"],
		[17,"Knoxville Gas"]
	];
	HRP_truckMarkersDeliver =
	[
		[1,"Lakeside Processing Firm"],
		[2,"Lakeside Emergency Hospital"],
		[3,"Hoover Ranch"],
		[4,"Fleming Farm"],
		[5,"Springfield Bar"],
		[6,"Coal Mine"],
		[7,"Supreme Court of Jackson County"],
		[8,"Morrison Market"],
		[9,"Lakeside Industria"],
		[10,"Lakeside Industrial"],
		[11,"Lakeside Docks"],
		[12,"Lakeside Truck Shop"],
		[13,"Lakeside Circuit"],
		[14,"Lakeside National Airfield"],
		[15,"Lakeside Police Department"],
		[16,"2nd Ammendment Armory - Lakeside"],
		[17,"Knoxville Industrial"],
		[18,"Santa Maria Market"],
		[19,"Iron Mine"],
		[20,"Southern Airfield Construction Site"],
		[21,"Jefferson Hills"],
		[22,"Lock'n Load Firearms Specialists"],
		[23,"Los Diablos International Airport"],
		[24,"Los Diablos Fuel Station"],
		[25,"Los Diablos Specialist Treatment Facility"],
		[26,"Los Diablos Commercial"]
	];

	HRP_Trucks = ["Jonzie_Western"];

	HRP_companyTruck = "Jonzie_Western";

	HRP_activeTrailers = [];


	HRP_busRoutes = ["HRP_lsBusRoute"];
	HRP_lsBusRoute = 
	[
		[1, "Bus Depot"],
		[2, "8th Street"],
		[3, "Lakeside Garage"],
		[4, "Lakeside Race Track"],
		[5, "Lakeside Nortern Docks"],
		[6, "Northern Lakeside Docks"],
		[7, "Lakeside District Court"],
		[8, "DON JON Plaza"],
		[9, "2nd Ammendment Armory"],
		[10, "Morrison Town"],
		[11, "Los Diablos"],
		[12, "Bus Depot"]
	];

	HRP_gvtBus = "A3L_Bus";

	HRP_buses = ["A3L_Bus"];

	HRP_cannotSell = false;

	HRP_vehDelay = false;

	HRP_atmDelay = false;

	HRP_fireLevel = 0;
	HRP_fireToExtinguish = 0;
	HRP_activeFireEffects = nil;

	HRP_hasFlamed = false;

	HRP_noSound = false;

	HRP_copGuns = 
	[
		"RH_M4_ris_m",
		"hlc_rifle_M4",
		"RH_m1911",
		"RH_ta01nsn",
		"RH_M4A6",
		"RH_fn57",
		"RH_kimber_nw",
		"RH_m9",
		"SMG_01_F",
		"RH_M4A6",
		"RH_M16A6",
		"RH_M16A4_m",
		"hlc_rifle_CQBR",
		"hlc_rifle_bcmjack",
		"hlc_rifle_bcmblackjack",
		"hlc_rifle_vendimus",
		"arifle_SPAR_03_blk_F",
		"hlc_smg_mp510",
		"RH_fnp45",
		"RH_m9"
	];

	
	HRP_Taxis =
	[
		"red_cvpi_06_taxi",
		"red_cvpi_06_taxi2",
		"red_cvpi_06_taxi3",
		"red_gs350_13_taxi",
		"red_s65_12_taxi",
		"red_taurus_10_taxi",
		"red_taurus_10_taxi2"
	];

	HRP_activeLocalCars = [];

	

	HRP_towTrucks = 
	[
		"red_towtruck_08_black",
		"red_towtruck_08_aqua",
		"red_towtruck_08_darkblue",
		"red_towtruck_08_green",
		"red_towtruck_08_red",
		"red_towtruck_08_pink",
		"red_towtruck_08_yellow",
		"red_towtruck_08_orange",
		"red_towtruck_08_white",
		"red_towtruck_08_purple",
		"red_towtruck_08_darkgreen",
		"red_towtruck_08_darkred",
		"red_towtruck_08_blue",
		"red_towtruck_08_tow1",
		"red_towtruck_08_tow2",
		"red_towtruck_08_custom",
		"red_towtruck_08_custom2",
		"red_towtruck_08_custom3"
	];
};