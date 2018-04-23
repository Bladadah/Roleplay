/*
	Author: Ben Harris
	Desscription: Restraint System
*/
HRP_fnc_cuff = {
	params ["_ct"];

	_ct setVariable ["surrendered", false, true];
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	[player, "handcuffs"] remoteExecCall ["HRP_fnc_playSound", 0];
	sleep 0.833;

	[] remoteExec ["HRP_fnc_cuffTarget", _ct];
};

