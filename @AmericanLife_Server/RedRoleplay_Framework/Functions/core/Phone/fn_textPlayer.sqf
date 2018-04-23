/*
	Author: Ben Harris
	Description: Texts a Player using remoteExec
*/

HRP_fnc_textPlayer = {
	params["_type"];

	if (_type) then {
		HRP_numberToCall = parseNumber (ctrlText 8345);
	};
	
	_numberToText = HRP_numberToCall;
	_message = ctrlText 1400;
	if (count _message > 200) exitWith { ["Error", "You cannot send Messages that are longer than 200 Characters", true] spawn HRP_fnc_Notifications; };
	_callerID = player getVariable "yourNumber";
	_messageToSend = [_message, _callerID];
	HRP_playerToCall = false;

	{
		_cell = _x getVariable "yourNumber";
		if (_cell isEqualTo HRP_numberToCall) then {
			HRP_playerToCall = _x;
		};
	} forEach allPlayers;

	if (HRP_playerToCall isEqualTo false) exitWith  { playSound "notinservice_tone"; ["Invalid CallerID", "This Cell Phone Number is Invalid", true] spawn HRP_fnc_Notifications; };
	[_messageToSend, _callerID] remoteExecCall ["HRP_fnc_receiveText", HRP_playerToCall];
};