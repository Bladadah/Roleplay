/*
	Author: Ben Harris
	Description: Heals you at a Hospital
*/

HRP_fnc_healHospital = {
	_EMT = 0;	

	{
		if (_x getVariable "ems" > 0) then{
			_EMT = _EMT + 1;
		};
	} forEach allPlayers;

	if (_EMT >= 4) exitWith { ["Error", "Our services are currently busy, seek another EMT", true] spawn HRP_fnc_Notifications; };

	_check = [1, HRP_healPrice] call HRP_fnc_checkMoney;

	if !(_check) exitWith { ["Error", "Sorry, you cannot afford our services", true] spawn HRP_fnc_Notifications; };

	[HRP_healPrice] call HRP_fnc_removeCash;

	player setDamage 0;
};