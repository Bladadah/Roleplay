/*
	Author: Ben Harris
	Description: Pays / Doesn't pay the ticket 
*/

HRP_fnc_payTicket = {

	_check = [1, HRP_priceToPay] call HRP_fnc_checkMoney;	

	if !(_check) exitWith { 
		closeDialog 0;
		["Error", "You cannot afford this ticket", true] spawn HRP_fnc_Notifications;
		["Error", "This person cannot afford the ticket", true] remoteExec ["HRP_fnc_Notifications", HRP_ticketSender];
	};

	[HRP_priceToPay] call HRP_fnc_removeCash;

	_name = format ["%1 has paid the ticket", player getVariable "playerName"];

	["Success", _name, true] remoteExec ["HRP_fnc_Notifications", HRP_ticketSender];

	closeDialog 0;
};