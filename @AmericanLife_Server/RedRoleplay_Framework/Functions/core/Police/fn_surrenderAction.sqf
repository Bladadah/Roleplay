/*
	Author: Ben Harris - Revised by Nicholas Jo'Foski - Further Revised by Ben Harris
	Description: Surrender Action
*/

HRP_fnc_surrenderAction = {

	if (HRP_action) exitWith {};
	HRP_action = true;
    if !(player getVariable "surrendered") then {
        player setVariable ["surrendered", true, true];
        player playMove "AmovPercMstpSsurWnonDnon";
    } else {
        player setVariable ["surrendered", false, true];
        player switchMove "AmovPercMstpSsurWnonDnon_AmovPercMstpSnonWnonDnon";
    };

    sleep 0.2;
    HRP_action = false;
};