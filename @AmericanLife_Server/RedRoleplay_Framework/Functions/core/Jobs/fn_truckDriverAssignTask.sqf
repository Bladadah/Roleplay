/*
	Author: Ben Harris
	Description: Assigns a task to a truck driver
*/

HRP_fnc_truckDriverAssignTask = {
	
	player setVariable ["activeMission", true, true];
	HRP_missionDistance = 0;

	_pickupLocation = selectRandom HRP_truckMarkersPickup;
	HRP_truckTaskPosition = (getMarkerPos (format ["truckMarkerPickup_%1", _pickupLocation select 0]));
	HRP_truckTaskLocation = _pickupLocation select 1;

	HRP_missionVehicle = "Jonzie_Curtain" createVehicle [0,0,0];
	HRP_missionVehicle setVariable ["Commercial", true, true];
	HRP_missionVehicle setPos HRP_truckTaskPosition;
	HRP_missionVehicle setDir (markerDir (format ["truckMarkerPickup_%1", _pickupLocation select 0]));
	HRP_activeTrailers pushBack HRP_missionVehicle;

	HRP_truckWayPoint = (group player) addWaypoint [HRP_truckTaskPosition, 0 ];
	HRP_truckWayPoint setWaypointType "MOVE";
    HRP_truckWayPoint setWaypointBehaviour "AWARE";
    HRP_truckWayPoint setWaypointSpeed "FULL";
    HRP_truckWayPoint setWaypointCombatMode "RED";

    HRP_truckMarker = createMarkerLocal ["HRP_truckMarker", HRP_truckTaskPosition]; 
	HRP_truckMarker setMarkerShapeLocal "ICON"; 
	HRP_truckMarker setMarkerTypeLocal "HRP_icon_Truck"; 
	HRP_truckMarker setMarkerSizeLocal [1,1]; 
	HRP_truckMarker setMarkerTextLocal "Pickup Location";

	HRP_truckWayPoint = (group player) addWaypoint [HRP_truckTaskPosition, 0 ];
	HRP_truckWayPoint setWaypointType "MOVE";
    HRP_truckWayPoint setWaypointBehaviour "AWARE";
    HRP_truckWayPoint setWaypointSpeed "FULL";
    HRP_truckWayPoint setWaypointCombatMode "RED";
    
	["Task Assigned", "Proceed to the pickup location", true] spawn HRP_fnc_Notifications;	

	HRP_missionDistance = (round (player distance (getMarkerPos HRP_truckMarker)));

	waitUntil {((vehicle player) distance (getMarkerPos HRP_truckMarker)) < 15};
	if (isNil {player getVariable "truckDriver"}) exitWith {};
	if (isNull HRP_missionVehicle) exitWith {
		["Mission Failed", "Trailer was destroyed", true] spawn HRP_fnc_Notifications;
		if !(isNil "HRP_truckWayPoint") then {
		deleteWaypoint HRP_truckWayPoint;
		};
		if !(isNil "HRP_truckMarker") then {
			deleteMarkerLocal HRP_truckMarker;
		};
	};

	deleteWaypoint HRP_truckWayPoint;
	deleteMarkerLocal HRP_truckMarker;

	["Area Reached", "Attach the trailer and proceed to the pickup location", true] spawn HRP_fnc_Notifications;

	_dropOffLocation = selectRandom HRP_truckMarkersDeliver;
	HRP_truckTaskPosition = (getMarkerPos (format ["truckMarkerDeliver_%1", _dropOffLocation select 0]));
	HRP_truckTaskLocation = _dropOffLocation select 1;

	HRP_truckWayPoint = (group player) addWaypoint [HRP_truckTaskPosition, 0 ];
	HRP_truckWayPoint setWaypointType "MOVE";
    HRP_truckWayPoint setWaypointBehaviour "AWARE";
    HRP_truckWayPoint setWaypointSpeed "FULL";
    HRP_truckWayPoint setWaypointCombatMode "RED";

    HRP_truckMarker = createMarkerLocal ["HRP_truckMarker", HRP_truckTaskPosition]; 
	HRP_truckMarker setMarkerShapeLocal "ICON"; 
	HRP_truckMarker setMarkerTypeLocal "HRP_icon_Truck"; 
	HRP_truckMarker setMarkerSizeLocal [1,1]; 
	HRP_truckMarker setMarkerTextLocal "Delivery Location";

	HRP_missionDistance = _distance + (round (player distance (getMarkerPos HRP_truckMarker)));

	waitUntil {(HRP_missionVehicle distance (getMarkerPos HRP_truckMarker)) < 15};
	if (isNil {player getVariable "truckDriver"}) exitWith {};
		
	HRP_missionVehicle setVariable ["signOff", true, true];

	["Delivery Successful", "Please sign the cargo off and leave it to be picked up", true] spawn HRP_fnc_Notifications;
};