/*
	Author: Ben Harris
	Description: Starts the robbery of the Bank Vault
*/

HRP_fnc_robBank = {
	params["_bank"];

	_count = 0;
	{
		if (_x getVariable "cop" > 0) then {
			_count = _count + 1;
		};
	} forEach allPlayers;

	if (_count < 5) exitWith { ["Error", "There are not enough on-duty law enforcement to commit this crime", true] spawn HRP_fnc_Notifications; };
	if !("RR_c4" in (items player)) exitWith { ["Error", "You need a blasting charge!", true] spawn HRP_fnc_Notifications; };
	if (_bank getVariable "recentlyRobbed") exitWith { ["Error", "A bank robbery has occured recently", true] spawn HRP_fnc_Notifications; };
		
	_bank setVariable ["inRobbery", true];
	_pos = getPosAtl player;
	
	for "_i" from 0 to 5 do {
		["!!BANK ROBBERY IN PROGRESS!!"] remoteExecCall ["HRP_fnc_serverMsg", 0];
	};


	missionNamespace setVariable ["inRobbery", true, true];
	[_bank] spawn HRP_fnc_checkBank;
	sleep (HRP_bankRobberyTime * 60);

	if !(_bank getVariable "inRobbery") exitWith {};

	_bank allowDamage false;
	"R_60mm_HE" createvehicle _pos; 

	["Success", "You have breached the Vault", true] spawn HRP_fnc_Notifications;
	_bank setVariable ["inRobbery", false];
	_bank setVariable ["vaultUnlocked", true];

};