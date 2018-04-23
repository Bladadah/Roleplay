/*
	Author: Ben Harris
	Description: Request Medic Script
*/

HRP_fnc_RequestMedic = {

	_uid = str (getPlayerUID player);
	_positionPlayer = getPos player;
	_medics = [] call HRP_fnc_getMedics;
	
	{
		[0, _uid, _positionPlayer] remoteExecCall ["HRP_fnc_basicMedicalMarker", _x];
		["Assistance Required", "A civilian requires medical assistance", true] remoteExec ["HRP_fnc_Notifications", _x];
		
	} forEach _medics;

	["Resistance Requested", "You have requested medical assistance", true] spawn HRP_fnc_Notifications;
};