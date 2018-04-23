/*
	Author: Ben Harris
	Description: Assigns a person a company truck
*/

HRP_fnc_createCompanyTruck = {
	params["_ct"];

	if (isNil "_ct") exitWith {};
	if !(isNil {player getVariable "hasCompanyTruck"}) exitWith {
		["Error", "You already have a company vehicle", true] spawn HRP_fnc_Notifications;
	};

	HRP_Position = _ct getVariable "truckSpawnPosition";

	_objects = nearestObjects [getMarkerPos HRP_Position, ["LandVehicle", "Air", "Sea"], 5];
	if (count _objects > 0) exitWith {
		["Error", "There is a vehicle on the spawnpoint", true] spawn HRP_fnc_Notifications;
	};

	_truck = HRP_companyTruck createVehicle [0,0,0];
	_truck setPos (getMarkerPos HRP_Position);
	_truck setDir (markerDir HRP_Position);

	_truck setVariable ["companyTruck", true, true];
	player setVariable ["hasCompanyTruck", true, true];
	_truck lock 2;
	HRP_Cars pushBack _truck;
	["Success", "Company Truck Provided", true] spawn HRP_fnc_Notifications;

	waitUntil {((player getVariable "currentOccuption") == "Truck Driver")};
	waitUntil {((player getVariable "currentOccuption") != "Truck Driver")};

	deleteVehicle _truck;
	["Truck Impounded", "You left your job and therefore your truck has been impounded", true] spawn HRP_fnc_Notifications;
	player setVariable ["hasCompanyTruck", nil, true];
};