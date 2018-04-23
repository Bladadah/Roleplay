/*
	Author: Ben Harris
	Description: Signs a person off as a truck driver	
*/

HRP_fnc_truckDriverSignOff = {

	if !(isNil "HRP_truckWayPoint") then {
		deleteWaypoint HRP_truckWayPoint;
	};
	if !(isNil "HRP_truckMarker") then {
		deleteMarkerLocal HRP_truckMarker;
	};
	HRP_truckTaskLocation = nil;
	HRP_truckTaskPosition = nil;

	player setVariable ["payCheque", HRP_payCheque, true];
	player setVariable ["currentOccupation", "Unemployed", true];

	player setVariable ["truckDriver", nil, true];
	
	["Signed Out", "You have left your job as a truck driver", true] spawn HRP_fnc_Notifications;
};	