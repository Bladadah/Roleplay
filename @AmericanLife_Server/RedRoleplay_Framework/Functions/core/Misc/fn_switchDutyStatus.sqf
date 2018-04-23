HRP_fnc_switchDutyStatus = {
	params ["_d", "_t"];
	if(_d == 0) then {
		if(_t == 0) then {
			_cop = player getVariable ["cop", 0];
			player setVariable ["cop", -1, true];
			player setVariable ["copoffduty", _cop, true];
			player setVariable ["copLevel", nil, true];
			player setVariable ["currentOccupation", "Unemployed", true];
			player setVariable ["payCheque", HRP_payCheque, true];
		} else {
			_ems = player getVariable ["ems", 0];
			player setVariable ["ems", -1, true];
			player setVariable ["emsoffduty", _ems, true];
			player setVariable ["copLevel", nil, true];
			player setVariable ["currentOccupation", "Unemployed", true];
			player setVariable ["payCheque", HRP_payCheque, true];
			myjob = nil;
		};
	} else {
		if(_t == 0) then {
			_cop = player getVariable ["copoffduty", 0];
			player setVariable ["cop", _cop, true];
			player setVariable ["copoffduty", 0, true];
			player setVariable ["copLevel", 1, true];
			player setVariable ["currentOccupation", "Police Officer", true];
			player setVariable ["payCheque", HRP_policePay, true];
		} else {
			_ems = player getVariable ["emsoffduty", 0];
			player setVariable ["ems", _ems, true];
			player setVariable ["emsoffduty", 0, true];
			player setVariable ["copLevel", 1, true];
			player setVariable ["currentOccupation", "Paramedic", true];
			player setVariable ["payCheque", HRP_emsPay, true];
			myjob = "EMS";
		};
	};
};