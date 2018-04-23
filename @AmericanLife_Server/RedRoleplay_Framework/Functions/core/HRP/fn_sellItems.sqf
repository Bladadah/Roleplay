/*
	Author: Ben Harris
	Description: Sells Items through the Shop
*/

HRP_fnc_sellItems = {

	if (HRP_cannotSell) exitWith { ["Error", "Please slow down", true] spawn HRP_fnc_Notifications; };
	_data = lbData [ 1500, ( lbCurSel 1500 ) ];	

	if (isNil "_data") exitWith { ["Error", "Please select an item", true] spawn HRP_fnc_Notifications; };

	{
		if (_data isEqualTo ( _x select 0)) then {
			sellPrice = _x select 1;
		};
	} foreach HRP_sellPrices;

	player removeItem _data;
	_msg = format ["$%1 has been added to your wallet", sellPrice];
	["Success", _msg, true] spawn HRP_fnc_Notifications;
	[sellPrice] call HRP_fnc_addCash;
	lbDelete [ 1500, ( lbCurSel 1500 ) ];

	HRP_cannotSell = true;
	sleep 0.2;
	HRP_cannotSell = false;
};
