/*
	Author: Ben Harris
	Description: Signs the package off
*/

HRP_fnc_signPackage = {

	["Delivery Completed", "A bonus has been added to your account, pick it up with your payCheque", true] spawn HRP_fnc_Notifications;

	deleteWaypoint HRP_truckWayPoint;
	deleteMarkerLocal HRP_truckMarker;

	for "_i" from 0 to ((count HRP_activeTrailers) - 1) do {
		if (HRP_activeTrailers select _i == HRP_missionVehicle) then {
			HRP_activeTrailers deleteAt _i;
		};
	};

	deleteVehicle HRP_missionVehicle;
	

	_outstanding = player getVariable "outStandingPay";


	if (isNil {(vehicle player) getVariable "companyTruck"}) then {
		_value = (round (HRP_missionDistance / 5));
		_outstanding = _outstanding + _value;
		systemChat format ["You have been issued an additional bonus of $" + "%1, remember to pick it up from centrelink", _value];
	} else {
		_value = (round (HRP_missionDistance / 8));
		_outstanding = _outstanding + _value; 
		systemChat format ["You have been issued an additional bonus of $" + "%1, remember to pick it up from centrelink", _value];
	};

	HRP_missionDistance = nil;

	player setVariable ["outStandingPay", _outstanding, true];

	if !(isNil "HRP_truckWayPoint") then {
		deleteWaypoint HRP_truckWayPoint;
	};
	if !(isNil "HRP_truckMarker") then {
		deleteMarkerLocal HRP_truckMarker;
	};

	player setVariable ["activeMission", nil, true];
};