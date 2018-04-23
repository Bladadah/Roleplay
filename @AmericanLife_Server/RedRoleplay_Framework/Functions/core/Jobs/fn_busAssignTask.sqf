/*
	Author: Ben Harris
	Description: Assigns a bus driver a task
*/

HRP_fnc_busAssignTask = {
	params["_taskID"];

	_route = call compile (HRP_busRoutes select _taskID);
	player setVariable ["activeMission", true, true];

	["Success", (format ["Mission Assigned, first destination: %1", (_route select 0) select 1]), true] spawn HRP_fnc_Notifications;

	HRP_currentRouteCount = 0;

	for "_i" from 0 to count _route -1 do {
		if (isNil {player getVariable "activeMission"}) exitWith {};

		if (!isNil "HRP_busWayPoint") then {
			deleteWaypoint HRP_busWayPoint;
		};
		if (!isNil "HRP_busMarker") then {
			deleteMarkerLocal HRP_busMarker;
		};

		_destination = getMarkerPos (format ["busMarker_%1", (_route select _i) select 0]);
		_distance = round (player distance _destination);

		HRP_currentBus setVariable ["nextDestination", [(_route select _i) select 1, (format ["busMarker_%1", (_route select _i) select 0])]];

		HRP_busWayPoint = (group player) addWaypoint [_destination, 0 ];
		HRP_busWayPoint setWaypointType "MOVE";
	    HRP_busWayPoint setWaypointBehaviour "AWARE";
	    HRP_busWayPoint setWaypointSpeed "FULL";
	    HRP_busWayPoint setWaypointCombatMode "RED";

	    HRP_busMarker = createMarkerLocal ["HRP_busMarker", _destination]; 
		HRP_busMarker setMarkerShapeLocal "ICON"; 
		HRP_busMarker setMarkerTypeLocal "HRP_icon_goKart"; 
		HRP_busMarker setMarkerSizeLocal [1,1]; 
		HRP_busMarker setMarkerTextLocal "Delivery Location";

		["Success", "Your next destination has been assigned.", true] spawn HRP_fnc_Notifications;

		waitUntil {((vehicle player) distance (getMarkerPos HRP_busMarker)) < 10};
		if (isNil {player getVariable "activeMission"}) exitWith {};

		["Success", "You have reached your destination, you have been paid for your work.", true] spawn HRP_fnc_Notifications;

		_outstanding = player getVariable "outStandingPay";

		_outstanding = _outstanding + (round (_distance / 4));
		systemChat format ["You have been issued an additional bonus of $" + "%1, remember to pick it up from centrelink", _outstanding];
		["Please Wait", "Give any passengers time to board.", true] spawn HRP_fnc_Notifications;
		sleep 5;
	};

	["Success", "You have completed a bus route, feel free to do continue further", true] spawn HRP_fnc_Notifications;
};