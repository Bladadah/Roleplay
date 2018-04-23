/*
	Author: Ben Harris
	Description: Signs a person is as bank teller
*/

HRP_fnc_bankTellerSignUp = {
	
	player setVariable ["payCheque", HRP_bankTellerPay, true];
	player setVariable ["currentOccupation", "Bank Teller", true];

	player setVariable ["bankTeller", true, true];

	["Success", "You have signed on as a bank teller, you can now help people withdraw money", true] spawn HRP_fnc_Notifications;
	[] spawn {
		while {true} do {
		  if !(player getVariable "bankTeller") exitWith {};
		  if (player distance (getMarkerPos "bankLocation") > 30) exitWith { 
		  	["Error", "You have moved too far from the bank", true] spawn HRP_fnc_Notifications; 
		  	[] call HRP_fnc_bankTellerSignOff;
		  };
		};
		sleep 5;
	};
};
