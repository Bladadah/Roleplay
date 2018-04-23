/*

	Author: Ben Harris
	Description: To execute once you are revived.
*/


HRP_fnc_Revived = {

	player setVariable ["tf_unable_to_use_radio", false];
	player setVariable ["tf_voiceVolume", 1, true];

	HRP_Revived = true;
	HRP_allowRespawn = false;
	player allowDamage true;
	HRP_revivePayment = 50;
	_msg = format ["You have been revived, $%1 was removed from your account", HRP_revivePayment];
	["Revived", _msg, true] spawn HRP_fnc_Notifications;

	closeDialog 0;
	death_cam cameraEffect ['TERMINATE','BACK'];  
	camDestroy death_cam;
	player setVariable ["unconscious", false, true];
	player playMoveNow "AinjPpneMstpSnonWrflDnon_rolltofront";
	sleep 2;
	player switchMove "AidlPpneMstpSnonWnonDnon_AI";
	_uid = str (getPlayerUID player);
	_positionPlayer = getPos player;

	player setVariable ["cuffed", false, true];
	player setVariable ["Shackled", false, true];


	_medics = []call HRP_fnc_getMedics;
	{
		[1, _uid, _positionPlayer] remoteExecCall ["HRP_fnc_basicMedicalMarker", _x];
	}forEach _medics;

	ppEffectDestroy ppEffect1;
	HRP_Dead = false;

	sleep 5;

	if (animationState player == "unconscious") then {
		for "_i" from 0 to 10 do {
			player switchMove "amovppnemstpsraswrfldnon";
		};
	};

	HRP_Dead = false;
};

// to Add Money Transfer, it will not work in testing if alone.