/*
	Author: Ben Harris
	Description: Opens the Clothing Shop
*/

HRP_fnc_OpenClothingShop = {
	disableSerialization;
	_target = _this select 0;
	_shop = _target getVariable "HRP_Clothing_Shop";
	_finalShop = call compile _shop;
	createDialog "Harris_clothingShop_Dialog";
	waituntil {!isNull (findDisplay 5002);};
	_crtl = (findDisplay 5002) displayCtrl 1500;

	_CharacterShop = "C_man_polo_2_F" createVehicleLocal [14746.7,9259.73,0.00143909];
	_CharacterShop setpos [14746.7,9259.73,0.00143909];
	clothing_cam  = "CAMERA" camCreate (getPos player);  
	showCinemaBorder true;   
	clothing_cam cameraEffect ["EXTERNAL", "BACK"];                             
	clothing_cam camSetPos [14745.7,9258.73,1];  
	clothing_cam camSetFOV 0.85;  
	clothing_cam camSettarget _CharacterShop;

	clothing_cam camCommit 0;

	deletevehicle _CharacterShop;


	ShopCharacter = "C_man_polo_2_F" createVehicleLocal [14746.7,9259.73,0.00143909];  
	ShopCharacter setdir 90;  
	ShopCharacter setpos [14746.7,9259.73,1.5];

	if(isNil "CShop_Open") then { CShop_Open = true; };
	CShop_Open = true;

	[] spawn HRP_fnc_charMove;
	[] spawn HRP_fnc_exitLoop;

	HRP_types = [];

	{
	_index = lbAdd [ 1500, ( _x select 0 ) ]; 
	lbSetData [ 1500, _index, ( _x select 1 )];

	_type = (call compile (_x select 1)) select 1;

	if !(_type in HRP_types) then {
		HRP_types pushback _type;
	};

	} forEach _finalShop;	

	HRP_curShop = _finalShop;

	{
		_index = lbAdd [2100, _x];
		lbSetData [2100, _index, _x];
	} forEach HRP_types;
	
	lbSetCurSel [2100, 0]
};