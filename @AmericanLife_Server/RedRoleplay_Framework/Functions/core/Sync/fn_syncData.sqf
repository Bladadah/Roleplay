/*
	Author: Ben Harris
	Description: Syncs Player Data
*/
HRP_fnc_syncData = {
	[player, "", getPlayerUID player, player getVariable "playerName", false] remoteExecCall ["Server_fnc_statSave", 2];
	["Data Synced", "Your data has been Synced with the Database", true] spawn HRP_fnc_quickNotifications;
};