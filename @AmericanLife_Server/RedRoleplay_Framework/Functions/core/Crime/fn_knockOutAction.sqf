/*
	Author: Ben Harris
	Description: Knocks out a Player
*/

HRP_fnc_knockOutAction = {
	params["_target"];

	player playMove "AwopPercMstpSgthWrflDnon_End2";

	[] remoteExec ["HRP_fnc_knockedOut", _target];
};
