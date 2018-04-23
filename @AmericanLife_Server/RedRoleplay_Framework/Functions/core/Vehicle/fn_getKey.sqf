/*
	Author: Ben Harris
	Description: Receives Key
*/

HRP_fnc_getKey = {
	params["_car"];

	HRP_Keys pushBack _car;

	["Key Added", "A key has been added to your keychain", true] spawn HRP_fnc_Notifications;
};
