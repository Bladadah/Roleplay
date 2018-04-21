/*
	Author: Ben Harris
	Description: Initialises the Server
*/

enableSaving [false, false];

if (isServer) then {
	_handle = [] execVM "\RedRoleplay_Framework\InitFunctions.sqf";
	waitUntil {isNull _handle};
	[] spawn HRP_fnc_serverInit;
	
} else {
	[] spawn HRP_fnc_clientInit;
	(findDisplay 46) displayAddEventHandler ["KeyDown","_this call HRP_fnc_keyHandler"];
	HRP_Holstered = 0;
};