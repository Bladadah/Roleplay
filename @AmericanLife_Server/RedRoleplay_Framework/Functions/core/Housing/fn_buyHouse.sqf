/*
	Author: Ben Harris
	Description: Purchases your House
*/

HRP_fnc_buyHouse = {
	_text = ctrlText 1400;

	if (count _text < 5) exitWith {	["Error", "Please sign your name on the document of purchase", true] spawn HRP_fnc_Notifications; };

	_Price = HRP_Price;
	_Check = [1, _Price] call HRP_fnc_checkMoney;
	if (_Check) then {
		[_Price] call HRP_fnc_removeCash;
		HRP_Houses pushBack HRP_ct;
		[cursorObject] call HRP_fnc_insertHouse;
		["Purchase Successful", "House Purchased, Congratulations on your purchase", true] spawn HRP_fnc_Notifications;

		_uid = getPlayerUID player;
		_name = player getVariable "playerName";
		
		HRP_ct setVariable ["Purchased", true, true];
		HRP_ct setVariable ["OwnerUID", _uid, true];
		HRP_ct setVariable ["Owner", _name, true];

		_position = position HRP_ct;
		_id = str HRP_ct;

		_markerstr = createMarkerLocal [_id, _position]; 
		_markerstr setMarkerShapeLocal "ICON"; 
		_markerstr setMarkerTypeLocal "HRP_icon_builder"; 
		_markerstr setMarkerSizeLocal [1,1]; 
		_markerstr setMarkerTextLocal "Your House";
	} else {
		["Error", "Insufficent Funds to make this Purchase", true] spawn HRP_fnc_Notifications;
	}
};