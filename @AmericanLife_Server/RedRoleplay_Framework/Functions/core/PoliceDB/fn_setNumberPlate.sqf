/*
	Author: Ben Harris
	Description: Sets a Number Plate to Car // Todo // Tie in With Jonzie and MrShounka Vehicles, Create Physical Plate System on Next Car
*/

HRP_fnc_setNumberPlate = {
	_choose = ["_uppercase", "_number"];
	_uppercase = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"];
	_number = ["1","2","3","4","5","6", "7","8","9","0"];

	_Count = 8;
	HRP_PlateStr = "";
	for "_i" from 1 to _Count do {

		if (_Count <= 0) exitWith {};
		_Find = selectRandom _choose;

		switch (_Find) do
		{
			case "_uppercase":
			{
				_letter = selectRandom _uppercase;
				HRP_PlateStr = HRP_PlateStr + _letter;
			};
			case "_number":
			{
				_letter = selectRandom _number;
				HRP_PlateStr = HRP_PlateStr + _letter;
			};
		};
	};
	HRP_PlateStr;
};