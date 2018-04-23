/*
	Author: Ben Harris
	Description: Creates a bus under government pay
*/
HRP_fnc_createGovernmentBus = {
	params["_ct"];

	mkr = _ct getVariable "busDepot";

	_objects = nearestObjects [getMarkerPos mkr, ["LandVehicle", "Air", "Sea"], 5];
	if (count _objects > 0) exitWith {
		["Error", "There is a vehicle on the spawnpoint", true] spawn HRP_fnc_Notifications;
	};

	_pos = getMarkerPos mkr;
	_dir = markerDir mkr;

	_vehicle = HRP_gvtBus createVehicle [0,0,0];

	_vehicle setDir _dir;
	_vehicle setPos _pos;
	_vehicle setDir _dir;
	_vehicle setVariable ["isBus", true, true];

	_cpos = getPos _vehicle;

	[_cpos, _pos] call HRP_fnc_busCheck;

	_vehicle;
};