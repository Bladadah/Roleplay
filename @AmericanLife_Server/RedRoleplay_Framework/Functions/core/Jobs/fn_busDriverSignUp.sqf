/*
	Author: Ben Harris
	Description: Signs you up for a job
*/

HRP_fnc_busDriverSignUp = {
	params["_ct"];

	HRP_currentBus = [_ct] call HRP_fnc_createGovernmentBus;

	player setVariable ["busDriverStart", true, true];

	["Success", "Job Assigned, please get in your assigned bus", true] spawn HRP_fnc_Notifications;

	waitUntil {typeOf (vehicle player) in HRP_buses };

	player setVariable ["busDriverStart", nil, true];

	player setVariable ["payCheque", HRP_busDriverPay, true];
	player setVariable ["currentOccupation", "Bus", true];
	player setVariable ["busDriver", true, true];

	["Success", "Signed in - You are now a bus driver", true] spawn HRP_fnc_Notifications;
};