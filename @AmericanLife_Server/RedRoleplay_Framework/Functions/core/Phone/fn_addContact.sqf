/*
	Author: Ben Harris
	Description: Adds Contact
*/

HRP_fnc_addContact = {
	_name = ctrlText 1400;
	_number = ctrlText 1401;

	if (count _number != 10) exitWith { ["Error", "All Phone numbers must be 10 Characters", true] spawn HRP_fnc_notifications; };
	if (count _name < 3) exitWith { ["Error", "Names must be at least 3 Characters long", true] spawn HRP_fnc_notifications; };

	_toPush = [_number, _name];

	_contacts = player getVariable "contactList";

	if (_toPush in _contacts) exitWith { ["Error", "You already have an identical contact", true] spawn HRP_fnc_notifications;};

	_contacts pushBack _toPush;

	player setVariable ["contactList", _contacts, true];

	closeDialog 0;


	[1,1] call HRP_fnc_listContacts;
};