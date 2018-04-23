HRP_fnc_destroyCrate = {
	params ["_ct"];

	deleteVehicle _ct;	
	["Success", "Crate Destroyed", true] spawn HRP_fnc_Notifications;
};