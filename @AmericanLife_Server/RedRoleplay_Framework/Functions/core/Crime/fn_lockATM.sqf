/*
	Author: Ben Harris
	Description: Allows Police to 'Lock' an ATM after or in robbery
*/

HRP_fnc_lockATM = {
	params["_ct"];

	_ct setVariable ["beingRobbed", nil, true];
	_ct setVariable ["cashToPickup", nil, true];

	["Success", "The ATM has been secured", true] spawn HRP_fnc_Notifications;	
};