/*	
	Author: Ben Harris
	Description: Seizes items
*/

HRP_fnc_seizeItems = {
	_items = nearestObjects [player ,["groundWeaponHolder"], 5];

	{
		deleteVehicle _x;
	} forEach _items;

	["Seized", "Items have been seized", true] spawn HRP_fnc_notifications;
};