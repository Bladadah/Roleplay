/*

	Author: Ben Harris
	Description: Impounds a vehicle near the marker
*/

HRP_fnc_impoundTowTruck = {
	_objects = nearestObjects [getMarkerPos "HRP_impoundLot", "Car", 15];

	if (_objects isEqualTo []) exitWith {};
	_count = 0;
	_receivedCash = 0;
	{
		if !(_x isEqualTo "A3L_Towtruck") then {

			deleteVehicle _x;
			[HRP_impoundCashAmmount] call HRP_fnc_addBank;
			_receivedCash = _receivedCash + HRP_impoundCashAmmount;
			_count = _count + 1;
		};
	} forEach _objects;

	_msg = format ["You impounded %1 vehicles and received $%2", _count, _receivedCash];

	["Sucess", _msg, true] spawn HRP_fnc_Notifications;
};