/*
	Author: Ben Harris
	Description: Ropes car to vehicle
*/

HRP_fnc_ropeCar = {
	params["_car"];

	if (locked _car == 2 && isNil {_car getVariable 'iconID'}) exitWith { ["Error", "This vehicle cannot be towed", true] spawn HRP_fnc_Notifications; systemChat "Locked Vehicles must be authorised by SO before towing"; };

	_towtruck = "A";
	{
		if (typeOf _x in HRP_towTrucks) then {
			_towTruck = _x;
		};
	} forEach nearestObjects [player, ["Car"], 10];

	_towTruck setVariable ["ropedTo", _car, true];	
	_car setVariable ["roped", true, true];
};

