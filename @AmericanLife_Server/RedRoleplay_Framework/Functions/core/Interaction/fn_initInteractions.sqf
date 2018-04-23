HRP_fnc_initInteractions = {
	HRP_InteractionMenuConfig = [
		[
			["!(cursorObject isKindOf 'Car')", "!(cursorObject isKindOf 'Man')"],
			["Player Info", "[player] call HRP_fnc_openInfo"]
		],
		[
			["count (nearestObjects [player ,['groundWeaponHolder'], 5]) > 0", "player getVariable 'cop' > 0"],
			["Seize", "[] call HRP_fnc_seizeItems"]
		],
		[
			["isPlayer cursorObject"],
			["Give Key", "[cursorObject] call HRP_fnc_openGiveKeys"]
		],
		[
			["isPlayer cursorObject"],
			["Set Name", "[cursorObject] call HRP_fnc_openSetName"]
		],
		[
			["(cursorObject in HRP_Cars || (cursorObject getVariable ['ownerUID', false] isEqualTo getPlayerUID player))", "(player distance cursorObject) <= 8"],
			["Use Car Key", "[cursorObject] call HRP_fnc_useKey"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "(player distance cursorObject) <= 8", "(damage cursorObject) < 0.99", "'RR_Toolbox' in (items player)"],
			["Repair Vehicle", "[cursorObject] spawn HRP_fnc_repairVehicle"]
		],
		[
			["cursorObject isKindOf 'Man'", "isPlayer cursorObject", "player getVariable 'cop' >= 6"],
			["Whitelist", "[cursorObject] spawn HRP_fnc_openWhitelistMenu"]
		],
		[
			["cursorObject isKindOf 'Car'", "player getVariable ['cop', 0] > 0", "(player distance cursorObject) <= 8"],
			["Registration", "[cursorObject] call HRP_fnc_getOwner"]
		],
		[
			["typeOf cursorObject == 'A3L_Workbench'", "(player distance cursorObject) <= 8"],
			["Use Workbench", "[] call HRP_fnc_openCraftingMenu"]
		],
		[
			["typeOf cursorObject isEqualTo 'A3L_MoneyPile'", "(player distance cursorObject) <= 8", "(!(cursorObject getVariable 'recentlyRobbed') || isNil {cursorObject getVariable 'recentlyRobbed'})"],
			["Rob Cash", "[cursorObject] spawn HRP_fnc_takeCash"]
		],
		[
			["typeOf cursorObject isEqualTo 'A3L_MoneyPile'", "(player distance cursorObject) <= 8", "HRP_lockboxesrobbed < 5"],
			["Rob Deposit Box", "[] spawn HRP_fnc_robLockBox"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "((player getVariable ['cop', 0] > 0) || (player getVariable ['ems', 0] > 0))", "(player distance cursorObject) <= 8", "(damage cursorObject) < 0.99"],
			["Impound", "[cursorObject, 1] spawn HRP_fnc_impoundVehicle"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "player getVariable ['cop', 0] > 0", "(player distance cursorObject) <= 8" , "(damage cursorObject) < 0.99"],
			["Destroy", "[cursorObject, 2] spawn HRP_fnc_impoundVehicle"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "player getVariable ['ems', 0] > 0", "(player distance cursorObject) <= 8"],
			["Destroy", "[cursorObject, 2] spawn HRP_fnc_impoundVehicle"]
		],
		[
			["typeOf cursorObject in HRP_processingUnitsInit", "isNil {cursorObject getVariable 'processedItems'}", "(player distance cursorObject) <= 8", "(isNil{cursorObject getVariable 'unitInProcessing'})"],
			["Smelting Menu", "[cursorObject] spawn HRP_fnc_openSmeltingMenu"]
		],
		[
			["!(isNil {cursorObject getVariable 'weedReady'})", "(player distance cursorObject) <= 8"],
			["Gather", "[cursorObject] spawn HRP_fnc_gatherWeed"]
		],
		[
			["typeOf cursorObject isEqualTo 'JDPot'", "(player distance cursorObject) <= 8"],
			["Move", "[cursorObject] spawn HRP_fnc_pickUpPot"]
		],
		[
			["typeOf cursorObject isEqualTo 'JDPot'", "(player distance cursorObject) <= 8", "'RR_weedSeeds' in (items player)", "(isNil {cursorObject getVariable 'growingPlant'})"],
			["Plant", "[cursorObject] spawn HRP_fnc_plantWeed"]
		],
		[
			["!(isNil {player getVariable 'carryingPot'})"],
			["Drop", "[cursorObject] spawn HRP_fnc_dropPot"]
		],
		[
			["typeOf cursorObject isEqualTo 'JDPot'", "(player distance cursorObject) <= 8"],
			["Pickup", "[cursorObject] spawn HRP_fnc_removePot"]
		],
		[
			["typeOf cursorObject in HRP_processingUnitsInit", "!(isNil {cursorObject getVariable 'processedItems'})", "(player distance cursorObject) <= 8"],
			["Retrieve Items", "[cursorObject] spawn HRP_fnc_retrieveProcessedItems"]
		],
		[
			["(typeOf cursorObject) in HRP_houseArray", "(player distance cursorObject) <= (cursorObject getVariable 'houseRadius')", "isNil {cursorObject getVariable 'Purchased'}"],
			["Purchase", "[cursorObject] spawn HRP_fnc_openBuyHouse"]
		],
		[
			["cursorObject in HRP_Houses", "(player distance cursorObject) <= (cursorObject getVariable 'houseRadius')", "!(isNil {cursorObject getVariable 'Purchased'})", "!(cursorObject getVariable 'Locked')"],
			["Lock", "[cursorObject] spawn HRP_fnc_lockHouse"]
		],
		[
			["cursorObject in HRP_Houses", "(player distance cursorObject) <= (cursorObject getVariable 'houseRadius')", "!(isNil {cursorObject getVariable 'Purchased'})", "(cursorObject getVariable 'Locked')"],
			["Unlock", "[cursorObject] spawn HRP_fnc_unlockHouse"]
		],
		[
			["cursorObject in HRP_Houses", "(player distance cursorObject) <= (cursorObject getVariable 'houseRadius')", "!(isNil {cursorObject getVariable 'Purchased'})"],
			["Sell", "[cursorObject] spawn HRP_fnc_openSellHouse"]
		],
		[
			["(typeOf cursorObject) in HRP_furnitureTypes", "(player distance cursorObject) <= 8", "isNil {player getVariable 'carryingObject'}", "(isNil {cursorObject getVariable 'publicFurniture'})"],
			["Pickup", "[cursorObject] spawn HRP_fnc_pickUpFurniture"]
		],
		[
			["!(isNil {player getVariable 'carryingObject'})"],
			["Drop", "[cursorObject] spawn HRP_fnc_dropFurniture"]
		],
		[
			["isPlayer cursorObject", "(player distance cursorObject) <= 8"],
			["Give Cash", "[cursorObject] call HRP_fnc_giveCash"]
		],
		[
			["typeOf cursorObject == 'plp_bo_CrateLaRosa' "],
			["Open Crate", "[cursorObject] call HRP_fnc_gatherWreckItems"]
		],
		[
			["HRP_Holstered == 1", "alive player", "curWep_Holster != ''", "!(weapons player isEqualTo [])"],
			["Unholster", "[] call HRP_fnc_Holster"]
		],
		[
			["HRP_Holstered == 0", "currentWeapon player != ''", "alive player"],
			["Holster", "[] call HRP_fnc_Holster"]
		],
		[
			["('RR_handcuff' in (items player)) || ('RR_handcuff' in (magazines player))", "cursorObject isKindOf 'Man'", "(player distance cursorObject) <= 8", "isPlayer cursorObject", "!(cursorObject getVariable 'unconscious')", "!(player getVariable 'cuffed')"],
			["Cuff", "[cursorObject] spawn HRP_fnc_cuff"]
		],
		[
			["('RR_cuffkeys' in (items player)) || ('RR_cuffkeys' in (magazines player))", "cursorObject isKindOf 'Man'", "cursorObject getVariable ['cuffed',false]", "(player distance cursorObject) <= 8", "isPlayer cursorObject", "!(cursorObject getVariable 'unconscious')"],
			["Open Cuffs", "[cursorObject] call HRP_fnc_unCuff"]
		],
		[
			["cursorObject isKindOf 'Man'", "(cursorObject getVariable ['cuffed',false] || player getVariable ['Cop', 0] > 0)", "(player distance cursorObject) <= 8", "isPlayer cursorObject"],
			["Citizen Info", "[cursorObject] call HRP_fnc_openInfo"]
		],
		[
			["player getVariable ['cop', 0] > 0", "((position player) distance (getMarkerPos 'HRP_Prison')) <= 75", "cursorObject isKindOf 'Man'", "(player distance cursorObject) <= 5"],
			["Arrest Player", "[cursorObject] call HRP_fnc_openArrestMenu"]
		],
		[
			["('RR_legshackles' in (items player)) || ('RR_legshackles' in (magazines player))", "cursorObject isKindOf 'Man'", "(player distance cursorObject) <= 8", "cursorObject getVariable ['Shackled',true]", "!(cursorObject getVariable 'unconscious')"],
			["Shackle", "[cursorObject, 1] spawn HRP_fnc_LegCuff"]
		],
		[
			["('RR_cuffkeys' in (items player)) || ('RR_cuffkeys' in (magazines player))", "cursorObject isKindOf 'Man'", "cursorObject getVariable ['Shackled',false]", "(player distance cursorObject) <= 8", "isPlayer cursorObject", "!(cursorObject getVariable 'unconscious')"],
			["Open Shackles", "[cursorObject, 2] call HRP_fnc_LegCuff"]
		],
		[
			["(count (attachedObjects player)) <= 0", "cursorObject isKindOf 'Man'", "cursorObject getVariable ['cuffed',false]", "(player distance cursorObject) <= 8"],
			["Escort", "[cursorObject] call HRP_fnc_escort"]
		],
		[
			["(count (attachedObjects player)) > 0", "((attachedObjects player) select 0) isKindOf 'Man'"],
			["Let Go", "[] call HRP_fnc_escortStop"]
		],
		[
			["(count (attachedObjects player)) > 0", "((attachedObjects player) select 0) isKindOf 'Man'", "cursorObject isKindOf 'Car'", "(player distance cursorObject) <= 8"],
			["Force In Car", "[cursorObject] call HRP_fnc_putInCar"]
		],
		[
			["player getVariable ['cop', 0] > 0", "cursorObject isKindOf 'Car'", "(player distance cursorObject) <= 8"],
			["Pull out", "[cursorObject] call HRP_fnc_pullOut"]
		],
		[
			["!(isNil {cursorObject getVariable 'centrelink'})", "(player distance cursorObject) <= 8", "player getVariable ['outStandingPay', 0] > 0"],
			["PayCheque", "[] call HRP_fnc_payChequePickup"]
		],
		[
			["cursorObject isKindOf 'plp_ctm_PlasticBoxGrey'", "player getVariable ['cop', 0] > 0", "(player distance cursorObject) <= 8"],
			["Pickup", "[cursorObject] call HRP_fnc_destroyCrate"]
		],
		[
			["isPlayer cursorObject", "player getVariable ['cop', 0] > 0", "(player distance cursorObject) <= 8", "!(HRP_patDownCoolDown)"],
			["Pat Down", "[cursorObject, 1] spawn HRP_fnc_patDown"]
		],
		[
			["isPlayer cursorObject", "player getVariable ['cop', 0] > 0", "cursorObject getVariable ['cuffed',false]", "!(HRP_patDownCoolDown)", "(player distance cursorObject) <= 8"],
			["Strip Down", "[cursorObject, 2] spawn HRP_fnc_patDown"]
		],
		[
			["cursorObject isKindOf 'Car'", "cursorObject in HRP_Cars", "[20]call HRP_fnc_nearGarageMarker", "(player distance cursorObject) <= 8"],
			["Store", "[cursorObject] call HRP_fnc_storeCar"]
		],
		[
			["!(isNil {cursorObject getVariable 'garage'})", "(player distance cursorObject) <= 8"],
			["Garage", "[cursorObject] call HRP_fnc_openGarage"]
		],
		[
			["(cursorObject isKindOf 'Car') || (cursorObject isKindOf 'Air') || (cursorObject isKindOf 'Ship')", "(player distance cursorObject) <= 8", "(locked cursorObject) == 0 || (locked cursorObject) == 1"],
			["Trunk", "[cursorObject] call HRP_fnc_openTrunk"]
		],
		[
			["(cursorObject isKindOf 'Car') || (cursorObject isKindOf 'Air') || (cursorObject isKindOf 'Ship')", "(player distance cursorObject) <= 8", "(locked cursorObject) == 0 || (locked cursorObject) == 1", "!(isNil{player getVariable 'carryingObject'})"],
			["Store", "[cursorObject] call HRP_fnc_storeInTrunk"]
		],
		[
			["!(isNil {cursorObject getVariable 'money'})", "(player distance cursorObject) <= 8"],
			["Take money", "[cursorObject] call HRP_fnc_takeMoney"]
		],
		[
			["!(isNil {cursorObject getVariable 'plantType'})", "(player distance cursorObject) <= 8"],
			["Harvest", "[cursorObject] call HRP_fnc_Harvest"]
		],
		[
			["!(isNil {cursorObject getVariable 'lockerType'})", "(player distance cursorObject) <= 8"],
			["Open Locker", "[cursorObject, true] call HRP_fnc_openLocker"]
		],
		[
			["'HRP_wheatSeeds' in (items player)", "(player inArea 'Wheat_Field' || player inArea 'Wheat_Field_1' || player inArea 'Wheat_Field_2')"],
			["Plant Wheat", "[] spawn HRP_fnc_startWheatFarm"]
		],
		[
			["!(isNil {cursorObject getVariable 'medicalCentre'})", "(player distance cursorObject) <= 8"],
			["Medical Attention", "[] spawn HRP_fnc_healHospital"]
		],
		[
			["(!(cursorObject getVariable 'unconscious'))", "isPlayer cursorObject", "(damage cursorObject) > 0", "(player distance cursorObject) <= 8", "player getVariable ['ems', -1] > 0"],
			["Heal Patient", "[cursorObject] spawn HRP_fnc_treatPatient"]
		],
		[
			["!(isNil {cursorObject getVariable 'dmv'})", "(player distance cursorObject) <= 8"],
			["Open DMV", "[HRP_dmvLicenses] call HRP_fnc_openLicenseMenu"]
		],
		[
			["!(isNil {cursorObject getVariable 'policestation'})", "(player distance cursorObject) <= 8"],
			["Firearm Registry", "[HRP_firearmLicenses] call HRP_fnc_openLicenseMenu"]
		],
		[
			["(isNil {cursorObject getVariable 'robbing'})", "(player distance cursorObject) <= 8", "!(HRP_Robbing)", "!(isNil {cursorObject getVariable 'HRP_Shop'} || isNil {cursorObject getVariable 'HRP_Clothing_Shop'} || isNil {cursorObject getVariable 'HRP_Vehicle_Shop'})", "!(currentWeapon player isEqualTo '')"],
			["Rob Shop", "[cursorObject] spawn HRP_fnc_robShop"]
		],
		[
			["cursorObject isKindOf 'Man'", "(cursorObject getVariable ['Shackled',false] || cursorObject getVariable ['knockedOut', false])", "(player distance cursorObject) <= 8", "!(currentWeapon player isEqualTo '')"],
			["Rob Person", "[cursorObject] spawn HRP_fnc_robPerson"]
		],
		[
			["cursorObject isKindOf 'Man'", "(cursorObject getVariable 'unconscious')", "isPlayer cursorObject"],
			["Grab Cash", "[cursorObject] spawn HRP_fnc_grabDeadCash"]
		],
		[
			["player getVariable ['ems', 0] > 0", "cursorObject isKindOf 'Man'", "cursorObject getVariable 'unconscious'", "(player distance cursorObject) <= 8", "isPlayer cursorObject"],
			["Revive", "[cursorObject] spawn HRP_fnc_revive"]
		],
		[
			["player getVariable ['ems', 0] > 0", "(count (attachedObjects player)) <= 0", "cursorObject isKindOf 'Man'" , "cursorObject getVariable 'unconscious'", "isPlayer cursorObject"],
			["Carry", "[cursorObject] call HRP_fnc_escort"]
		],
		[
			["(count (attachedObjects player)) > 0", "((attachedObjects player) select 0) isKindOf 'Man'", "cursorObject isKindOf 'Car'"],
			["Put In Car", "[cursorObject] call HRP_fnc_putInCar"]
		],
		[
			["player getVariable ['ems', 0] > 0", "cursorObject isKindOf 'Car'", "(count (crew cursorObject)) > 0"],
			["Pull out", "[cursorObject] call HRP_fnc_pullOut"]
		],
		[
			["!(isNil {cursorObject getVariable 'HRP_Shop'})"],
			["Open Shop", "[cursorObject] call HRP_fnc_openShop"]
		],
		[
			["!(isNil {cursorObject getVariable 'HRP_Clothing_Shop'})"],
			["Clothing Shop", "[cursorObject] call HRP_fnc_openClothingShop"]
		],
		[
			["!(isNil {cursorObject getVariable 'HRP_sellShop'})"],
			["Farmers Market", "[HRP_farmersMarket] call HRP_fnc_openSellItems"]
		],
		[
			["!(isNil {cursorObject getVariable 'HRP_drugDealer'})"],
			["Drug Dealer", "[HRP_drugDealer] call HRP_fnc_openSellItems"]
		],
		[
			["!(isNil {cursorObject getVariable 'HRP_mineralTrader'})"],
			["Mineral Trader", "[HRP_mineralTrader] call HRP_fnc_openSellItems"]
		],
		[
			["!(isNil {cursorObject getVariable 'HRP_Vehicle_Shop'})"],
			["Vehicle Shop", "[cursorObject] call HRP_fnc_openVehicleShop"]
		],
		[
			["!(isNil {cursorObject getVariable 'atm'})", "(player distance cursorObject) <= 8"],
			["Open ATM", "[cursorObject] call HRP_fnc_openATM"]
		],
		[
			["!(isNil {cursorObject getVariable 'bankTeller'})", "(player distance cursorObject) <= 8"],
			["Bank Teller", "[cursorObject] call HRP_fnc_openATM"]
		],
		[
			["(isNil {player getVariable 'bankTeller'})", "(player distance cursorObject) <= 8", "'HRP_Bank_Approved' in (player getVariable 'approvedJobs')", "(player getVariable 'currentOccupation') == 'Unemployed'", "!(isNil {cursorObject getVariable 'bankTellerSignUp'})"],
			["On Duty", "[] call HRP_fnc_bankTellerSignUp"]
		],
		[
			["!(isNil {player getVariable 'bankTeller'})", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'bankTellerSignUp'})"],
			["Off Duty", "[] call HRP_fnc_bankTellerSignOff"]
		],
		[
			["(isNil {player getVariable 'securityGuard'})", "(player distance cursorObject) <= 8", "'HRP_Security_Approved' in (player getVariable 'approvedJobs')", "(player getVariable 'currentOccupation') == 'Unemployed'", "!(isNil {cursorObject getVariable 'bankTellerSignUp'})"],
			["On Duty", "[] call HRP_fnc_securityGuardSignIn"]
		],
		[
			["!(isNil {player getVariable 'securityGuard'})", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'bankTellerSignUp'})"],
			["Off Duty", "[] call HRP_fnc_securityGuardSignOff"]
		],
		[
			["(isNil {player getVariable 'truckDriver'})", "(player distance cursorObject) <= 8", "(player getVariable 'currentOccupation') == 'Unemployed'", "!(isNil {cursorObject getVariable 'truckSpawnPosition'})", "!(player getVariable 'truckDriverStart')"],
			["On Duty", "[] spawn HRP_fnc_truckDriverSignIn"]
		],
		[
			["!(isNil {player getVariable 'truckDriver'})", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'truckSpawnPosition'})"],
			["Off Duty", "[] call HRP_fnc_truckDriverSignOff"]
		],
		[
			["(isNil {player getVariable 'towTruckDriver'})", "(player distance cursorObject) <= 8", "(player getVariable 'currentOccupation') == 'Unemployed'", "!(isNil {cursorObject getVariable 'towDriverStart'})"],
			["On Duty", "[] spawn HRP_fnc_towDriverSignIn"]
		],
		[
			["!(isNil {player getVariable 'towTruckDriver'})", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'towDriverStart'})"],
			["Off Duty", "[] call HRP_fnc_towDriverSignOff"]
		],
		[
			["(isNil {player getVariable 'busDriver'})", "(player distance cursorObject) <= 8", "'HRP_Bus_Approved' in (player getVariable 'approvedJobs')", "(player getVariable 'currentOccupation') == 'Unemployed'", "!(isNil {cursorObject getVariable 'busDepot'})"],
			["On Duty", "[] spawn HRP_fnc_busDriverSignIn"]
		],
		[
			["!(isNil {player getVariable 'busDriver'})", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'busDepot'})"],
			["Off Duty", "[] call HRP_fnc_busDriverSignOff"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "(player distance cursorObject) <= 8", "(isNil {cursorObject getVariable 'roped'})", "(isNil {cursorObject getVariable 'attached'})", "!(isNil {player getVariable 'towTruckDriver'})", "!(typeOf cursorObject in HRP_towTrucks)"],
			["Attach Rope", "[cursorObject] call HRP_fnc_ropeCar"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'roped'})", "(isNil {cursorObject getVariable 'attached'})", "!(isNil {player getVariable 'towTruckDriver'})"],
			["Detach Rope", "[cursorObject] call HRP_fnc_unRopeCar"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'ropedTo'})", "(isNil {cursorObject getVariable 'attachedTo'})", "!(isNil {player getVariable 'towTruckDriver'})"],
			["Attach", "[cursorObject] spawn HRP_fnc_attachCar"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Sea')", "(player distance cursorObject) <= 8", "!(isNil {cursorObject getVariable 'attachedTo'})", "!(isNil {player getVariable 'towTruckDriver'})"],
			["Detach", "[cursorObject] call HRP_fnc_detachVehicle"]
		],
		[
			["(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air')", "(player distance cursorObject) <= 8", "!(isNil {player getVariable 'towTruckDriver'})", "!(isNil {cursorObject getVariable 'iconID'})", "player distance (getMarkerPos 'HRP_impoundLot') <= 50"],
			["Impound", "[cursorObject] spawn HRP_fnc_impoundVehicleTow"]
		],
		[
			["alive player"],
			["Sync Data", "[] call HRP_fnc_syncData"]
		],
		[
			["!(isNil {cursorObject getVariable 'truckSpawnPosition'})", "!(isNil {player getVariable 'truckDriverStart'})"],
			["Spawn Company Vehicle", "[cursorObject] spawn HRP_fnc_createCompanyTruck"]
		],
		[
			["!(isNil {player getVariable 'truckDriver'})", "alive player", "isNil {player getVariable 'activeMission'}"],
			["Trucking Mission", "[] spawn HRP_fnc_truckDriverAssignTask"]
		],
		[
			["!(isNil {cursorObject getVariable 'signOff'})"],
			["Sign Package", "[] call HRP_fnc_signPackage"]
		],
		[
			["(currentWeapon player) isEqualTo 'A3L_JackHammer'", "isNil {cursorObject getVariable 'beingRobbed'}", "isNil {cursorObject getVariable 'recentlyRobbed'}"],
			["Rob ATM", "[cursorObject] call HRP_fnc_robATM"]
		],
		[
			["player getVariable ['cop', 0] > 0", "!(isNil {cursorObject getVariable 'inRobbery'}) || !(isNil {cursorObject getVariable 'cashToPickup'})"],
			["Lock ATM", "[cursorObject] call HRP_fnc_lockATM"]
		],
		[
			["cursorObject isKindOf 'Car' || cursorObject isKindOf 'Ship'", "(locked cursorObject) == 0 || (locked cursorObject) == 1"],
			["Push Vehicle", "[cursorObject] call HRP_fnc_pushVehicle"]
		],
		[
			["cursorObject isKindOf 'Car' || cursorObject isKindOf 'Ship' || cursorObject isKindOf 'Air'", "(locked cursorObject) == 0 || (locked cursorObject) == 1"],
			["Unflip Vehicle", "[cursorObject] call HRP_fnc_unFlipCar"]
		],
		[
			["cursorObject isKindOf 'Man'", "isPlayer cursorObject", "player getVariable ['cop', 0] > 0", "(player distance cursorObject) <= 8"],
			["Citation", "[cursorObject] call HRP_fnc_openGiveTicket"]
		],
		[
			["(cursorObject getVariable 'locked')", "(player distance cursorObject) <= 8", "'HRP_lockPicks' in items player"],
			["Use Lockpick", "[cursorObject] call HRP_fnc_lockPickVehicle"]
		],
		[
			["player getVariable ['cop', 0] > 0", "vehicle player isKindOf 'Car'"],
			["Police Database", "[] call HRP_fnc_openPoliceDatabase"]
		],
		[
			["player getVariable ['copoffduty', 0] > 0", "!(isNil {cursorObject getVariable 'policeStation'})", "(player distance cursorObject) <= 8"],
			["Go on duty", "[1, 0] call HRP_fnc_switchDutyStatus"]
		],
		[
			["player getVariable ['emsoffduty', 0] > 0", "!(isNil {cursorObject getVariable 'medicStation'})", "(player distance cursorObject) <= 8"],
			["Go on duty", "[1, 1] call HRP_fnc_switchDutyStatus"]
		],
		[
			["player getVariable ['cop', 0] > 0", "!(isNil {cursorObject getVariable 'policeStation'})", "(player distance cursorObject) <= 8"],
			["Go off duty", "[0, 0] call HRP_fnc_switchDutyStatus"]
		],
		[
			["player getVariable ['ems', 0] > 0", "!(isNil {cursorObject getVariable 'medicStation'})", "(player distance cursorObject) <= 8"],
			["Go off duty", "[0, 1] call HRP_fnc_switchDutyStatus"]
		]
	];
};