/*
	Author: Ben Harris
	Description: Paycheque Function
*/

HRP_fnc_payChequeLoop = {

	while {true} do {
		systemChat "You will receive your paycheque in 10 Minutes";
		uiSleep 600;	

		_payChequeMissed = false;
		if ((player getVariable "currentOccupation") == "Bus Driver" && !((typeOf (vehicle player)) in HRP_Buses)) then {
			["Error", "You were not in a bus and therefore did not receive a paycheque"] spawn HRP_fnc_Notifications;
			_payChequeMissed = true;
		};

		if ((player getVariable "currentOccupation") == "Truck Driver" && !(typeOf (vehicle player) in HRP_Trucks)) then {
			["Error", "You were not in your vehicle and therefore did not receive a paycheque"] spawn HRP_fnc_Notifications;
			_payChequeMissed = true;
		};

		if !(_payChequeMissed) then {
			_ammount = player getVariable "payCheque";

			systemChat format ["You have been issued a Paycheque of $" + "%1, Remember to pick it up from centrelink", _ammount];

			_outstanding = player getVariable "outStandingPay";
			_outstanding = _outstanding + _ammount;

			player setVariable ["outStandingPay", _outstanding, true];
		};
	};
};