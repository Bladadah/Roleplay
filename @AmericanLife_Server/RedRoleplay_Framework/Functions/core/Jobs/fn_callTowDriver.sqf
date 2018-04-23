/*
	Author: Ben Harris
	Description: Creates Tow Marker
*/
HRP_fnc_callTowDriver = {
	params["_car", "_id"];

	_itemMarker = createMarkerLocal [_id, position _car];	
	_itemMarker setMarkerShapeLocal "ICON";
	_itemMarker setMarkerTypeLocal "HRP_icon_truck";
	_itemMarker setMarkerTextLocal "!!Towing Requested!!";
	_itemMarker setMarkerColorLocal "ColorRed";

	["Mission", "Towing Assistance Requested", true] spawn HRP_fnc_Notifications;

	waitUntil {!isNil {_car getVariable 'roped'}};

	deleteMarker _itemMarker;

	["Mission Over", "A truck driver has responded to a mission", true ] spawn HRP_fnc_Notifications;
};