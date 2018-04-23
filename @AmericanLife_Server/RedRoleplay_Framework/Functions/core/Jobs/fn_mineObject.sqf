/*
	Author: Ben Harris
	Description: Mines the Object
*/

HRP_fnc_mineObject = {
	_weapon = _this select 1;
	_ct = cursorObject;
	if (_weapon isEqualTo "A3L_Pickaxe") then {
		player playAction "GestureSwing";
	};
	if (_weapon isEqualTo "A3L_Pickaxe" && typeOf _ct in HRP_mineObjects) then {
		{
			if (typeOf _ct isEqualTo (_x select 0)) then {
				HRP_oreMined = HRP_oreMined + round (random 7);
				_value = _ct getVariable "mined";
				_value = _value + 1;
				if (_value >= 20) then
				{
					deleteVehicle _ct;
				} else {
					_ct setVariable ["mined", _value];
				};
				if (HRP_oreMined >= 20) then {

					if (isNil 'HRP_Item') then {
						HRP_Item = "groundWeaponHolder" createVehicle position player;
						HRP_Item setPos (getpos Player);
					} else {
						if (!isNil 'HRP_Item' && player distance HRP_Item > 5) then {
							HRP_Item = "groundWeaponHolder" createVehicle position player;
							HRP_Item setPos (getpos Player);
						};
					};
					HRP_Item addItemCargoGlobal [_x select 1, 1];
					HRP_oreMined = 0;
				};
			};
		} foreach HRP_oreTypes;
	};
};