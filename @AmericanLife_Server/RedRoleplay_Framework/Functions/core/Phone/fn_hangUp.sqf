/*
	Author: Ben Harris
	Description: Hangs up a Call
*/

HRP_fnc_hangUp = {

	if ("tf_anprc152" in (items player) && HRP_hadRadio) then {
		player unassignItem "HRP_CellPhone";
		player assignItem "tf_anprc152";
		HRP_hadRadio = false;
	};

	[] remoteExecCall ["HRP_fnc_hungUp", HRP_Caller];
	
	[(call TFAR_fnc_activeSwRadio), 1, HRP_oldFrequency] call TFAR_fnc_SetChannelFrequency;
	HRP_inCurrentCall = false;
	HRP_Calling = false;
};

