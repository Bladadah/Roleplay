/*
	Author: Ben Harris
	Description: Initalises Vehicle Repair
*/

HRP_fnc_repairVehicle = {
	params ["_ct"];
	ActionLoading = true;
	handle = [10, cursorObject] spawn HRP_fnc_doAction;
	player playMove "Acts_carFixingWheel";
	waitUntil { isNull handle; };

	_ct setDamage 0;
	if (!HRP_interrupted) then {
		["Repair Success", "You have successfully repaired this vehicle", true] spawn HRP_fnc_Notifications;
	} else {
		["Action Cancelled", "You cancelled your repair of the vehicle", true] spawn HRP_fnc_Notifications;
		player switchMove "";
		HRP_interrupted = false;
	};
};