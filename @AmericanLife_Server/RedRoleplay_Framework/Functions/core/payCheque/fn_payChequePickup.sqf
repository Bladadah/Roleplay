/*
	Author: Ben Harris
	Description: Picks up your payCheque
*/
HRP_fnc_payChequePickup = {
	
	_ammount = player getVariable "outStandingPay";

	[_ammount] call HRP_fnc_addBank;

	player setVariable ["outStandingPay", 0, true];

	["Success", "You have banked your outstanding Paycheques", true] spawn HRP_fnc_Notifications;

	[] call HRP_fnc_syncSilent;
};