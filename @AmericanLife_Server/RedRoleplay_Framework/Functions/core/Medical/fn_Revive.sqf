/*
	Author: Ben Harris
	Description: Revive Action
*/

HRP_fnc_Revive = {
	params ["_ct"];

	player playAction "Medic";
	sleep 2;
	[] remoteExec ["HRP_fnc_Revived", _ct];
};