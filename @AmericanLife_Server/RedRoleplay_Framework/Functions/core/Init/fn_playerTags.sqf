/*
		Author: Ben Harris
		Description: Player Tags
*/

HRP_fnc_playerTags = {
	onEachFrame
		{
		 {
		   if ((side _x == civilian ) && (_x != player) && isPlayer _x && (player distance _x) < 15 && (vehicle _x == _x)) then {
		    	if (_x getVariable	"unconscious") then{
		    		drawIcon3D ["", [1, 1, 1, 1], [visiblePosition _x select 0, visiblePosition _x select 1,(getPosATL _x select 2)+0.5], 0.2, 0.2, 45, (format ["%1 - %2 - Unconscious", _x getVariable ["bankAccount", "!!!!"], profileNamespace getVariable [str (_x getVariable ["bankAccount", "1"]), "Unknown"]]), 1, 0.04, "PuristaMedium"];
		    	} else {
		    		 drawIcon3D ["", [1, 1, 1, 1], [visiblePosition _x select 0, visiblePosition _x select 1,(getPosATL _x select 2)+2.1], 0.2, 0.2, 45, (format ["%1 - %2", _x getVariable ["bankAccount", "!!!!"], profileNamespace getVariable [str (_x getVariable ["bankAccount", "1"]), "Unknown"]]), 1, 0.04, "PuristaMedium"];
		    	};
		   };
		 } foreach allunits;
	};
};
