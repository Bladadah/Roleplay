/*
	Author: Ben Harris
	Description: Checks if the bus has been moved or not
*/

HRP_fnc_busCheck = {
	params["_cpos", "_pos"];
	
	[] spawn {
		sleep 300;

		if (_cpos == _pos) then {
			deleteVehicle _vehicle;
			HRP_currentBus = nil;
		};
	};

	["Deleted", "Due to inactivity, your bus was impounded", true] spawn HRP_fnc_Notifications;
};