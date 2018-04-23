/*
	Author: Ben Harris
	Description: Treats a Patient.
*/

HRP_fnc_treatPatient = {
	params["_ct"];

	player playAction "Medic";
	
	_ct setDamage 0;

	sleep 2;
	
	["Success", "You have treated this patient", true] spawn HRP_fnc_Notifications;

	["Treated", "Your wounds have been treated", true] remoteExec ["HRP_fnc_Notifications", _ct];
};