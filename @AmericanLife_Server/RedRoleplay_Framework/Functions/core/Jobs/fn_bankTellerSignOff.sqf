/*
	Author: Ben Harris
	Description: Signs you out of bank teller
*/

HRP_fnc_bankTellerSignOff = {

	player setVariable ["payCheque", HRP_payCheque, true];
	player setVariable ["currentOccupation", "Unemployed", true];

	player setVariable ["bankTeller", nil, true];

	["Signed Out", "You have been signed out of your job", true] spawn HRP_fnc_Notifications;
};