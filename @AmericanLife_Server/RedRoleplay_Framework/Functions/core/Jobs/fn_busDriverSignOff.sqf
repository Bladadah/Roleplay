/*
	Author: Ben Harris
	Description: Signs you off as a truck driver
*/

HRP_fnc_busDriverSignOff = {

	player setVariable ["payCheque", HRP_payCheque, true];
	player setVariable ["currentOccupation", "Unemployed", true];

	player setVariable ["busDriver", nil, true];

	HRP_busWayPoint = nil;
	HRP_busMarker = nil;
	if (!isNil "HRP_busWayPoint") then {
		deleteWaypoint HRP_busWayPoint;
	};
	if (!isNil "HRP_busMarker") then {
		deleteMarkerLocal HRP_busMarker;
	};

	if (!isNil "HRP_currentBus") then {
		deleteVehicle HRP_currentBus;
	};

	player setVariable ["activeMission", nil, true];

	["Signed Out", "You have left your job as a bus driver ", true] spawn HRP_fnc_Notifications;
};	