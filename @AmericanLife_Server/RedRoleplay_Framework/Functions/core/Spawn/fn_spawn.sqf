/*
	Author: Ben Harris
	Description: Spawns the Player
*/

HRP_fnc_Spawn = {
	_data = lbData [ 2131, ( lbCurSel 2131 ) ];
	HRP_Data = _data;	
	_spawnPos = getmarkerPos ((call compile _data) select 1);
	if (_data isEqualTo "") exitWith {};
	closeDialog 0;
	cutText ["", "BLACK IN"];
	player switchMove "";
	player setPos _spawnPos;
	_msg = format ["Spawned at Position: %1", HRP_SpawnName];	
	["Spawn Success", _msg, true] spawn HRP_fnc_Notifications;

	if (missionNameSpace getVariable "firstLoad") then {
		[] call HRP_fnc_loadDivingLoot;
		missionNamespace setVariable ["firstLoad", false, true];
	};
};