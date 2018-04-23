/*
	Author: Ben Harris
	Description: Tow Driver Sign in
*/

HRP_fnc_towDriverSignIn = {
	
	["Success", "Signed in as a tow truck driver", true] spawn HRP_fnc_Notifications;

	player setVariable ["towTruckDriver", true, true];
	player setVariable ["payCheque", HRP_towTruckDriverPay, true];
	player setVariable ["currentOccupation", "Tow Truck Driver", true];

	["Success", "You are now a tow truck driver!", true] spawn HRP_fnc_Notifications;
};

