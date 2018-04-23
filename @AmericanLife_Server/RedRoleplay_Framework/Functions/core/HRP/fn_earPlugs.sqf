/*
	Author: Ben Harris
	Description: Earplugs
*/

HRP_fnc_earPlugs = {
	if (HRP_earPlugs) then {
		1 fadeSound 0.1; 
		HRP_earPlugs = false;
		["Success", "Ear plugs put in", true] spawn HRP_fnc_Notifications;
	} else {
		1 fadeSound 1;
		HRP_earPlugs = true;
		["Success", "Ear plugs taken out", true] spawn HRP_fnc_Notifications;
	};
};