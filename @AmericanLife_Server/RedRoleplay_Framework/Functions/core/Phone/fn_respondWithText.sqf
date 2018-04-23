/*
	Author: Ben Harris
	Description: Declines Call and responds with a text message
*/

HRP_fnc_respondWithText = {
	if (HRP_CallerID isEqualTo "Anonymous Caller ID") then {
		["Error", "This call is Anonymous", true] spawn HRP_fnc_Notifications;
	} else {
		[] call HRP_fnc_declineCall;

		HRP_numberToCall = HRP_CallerID;
		[] call HRP_fnc_openSendSMS;
	};
};