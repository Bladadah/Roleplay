/*
	Author: Ben Harris
	Description: Truck Driver Sign Up
*/

HRP_fnc_truckDriverSignIn = {
	
	["Success", "Please get in your truck", true] spawn HRP_fnc_Notifications;

	["Note","Using company trucks will yield you less pay", true] spawn HRP_fnc_Notifications;

	player setVariable ["truckDriverStart", true, true];

	waitUntil {(typeOf (vehicle player)) in HRP_Trucks};

	player setVariable ["truckDriverStart", nil, true];
	player setVariable ["truckDriver", true, true];
	player setVariable ["payCheque", HRP_truckDriverPay, true];
	player setVariable ["currentOccupation", "Truck Driver", true];

	["Success", "You are now a truck driver!", true] spawn HRP_fnc_Notifications;
};