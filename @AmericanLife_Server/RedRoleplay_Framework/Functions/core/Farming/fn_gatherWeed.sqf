/*
	Author: Ben Harris
	Description: Gathers the Weed
*/

HRP_fnc_gatherWeed = {
	params["_ct"];

	if (isNil {_ct getVariable "growingPlant"}) exitWith {};
	_ammount = round (random 3);

	for "_i" from 1 to _ammount do {
		player addItem "RR_weedBag";
	};

	deleteVehicle (_ct getVariable "growingPlant");
	["Success", "You have gathered the dank weed", true] spawn HRP_fnc_Notifications;	

	_ct setVariable ["growingPlant", nil, false];
	_ct setVariable ["weedReady",nil,true];
};