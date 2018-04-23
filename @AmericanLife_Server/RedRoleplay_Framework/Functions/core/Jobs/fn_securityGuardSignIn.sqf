/*
	Author: Ben Harris
	Description: Sign in for security guards
*/	

HRP_fnc_securityGuardSignIn = {
	
	if (missionNamespace getVariable "inRobbery") exitWith {
		["Error", "The bank has been robbed recently, please wait", true] spawn HRP_fnc_Notifications;
	};
	
	player setVariable ["payCheque", HRP_securityPay, true];
	player setVariable ["currentOccupation", "Security Guard", true];

	player setVariable ["securityGuard", true, true];


	[] spawn {
		while {true} do {
			if !(player getVariable "securityGuard") exitWith {};
			if (player distance (getMarkerPos "bankLocation") > 100) exitWith { 
			  	["Error", "You have moved too far from the bank", true] spawn HRP_fnc_Notifications; 
			  	[] call HRP_fnc_securityGuardSignOff;
			};
			if (missionNamespace getVariable "inRobbery") exitWith {
				["Failure", "You failed to defend the bank and have been fired", true] spawn HRP_fnc_Notifications;
				[] call HRP_fnc_securityGuardSignOff;
			};
			sleep 5;
		 };
	};

	  ["Success", "Signed in - You now have access to the security guard shop", true] spawn HRP_fnc_Notifications;
};
