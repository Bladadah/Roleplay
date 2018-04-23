/*
	Author: Ben Harris
	Description: Allows a Cop to Arrest a Civilian
*/

HRP_fnc_arrestPlayer = {
	_time = parseNumber (ctrlText 1400);
	_notes = ctrlText 1401;
	_crimes = ctrlText 1402;

	[_time, _notes, _crimes] remoteExec ["HRP_fnc_arrestedPlayer", HRP_toArrest];
};