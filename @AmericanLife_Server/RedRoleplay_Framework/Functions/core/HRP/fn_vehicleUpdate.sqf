/*
	Author: Ben Harris
	Description: Updates Price and Displays Vehicle
*/
HRP_fnc_vehicleUpdate = {

	deleteVehicle VehShop;

	_index = lbCurSel 1500;
	_data = lbData [1500, _index];
	_dataArray = call compile _data;
	Life_curPrice = _dataArray select 2;
	Life_Car = _dataArray select 0;

	Life_curPrice = call compile Life_curPrice;
	ctrlSetText [1783, "Price: $" + str Life_curPrice];

	Life_ItemID = _dataArray select 0;
	Life_ItemType = _dataArray select 1;

	_newcar = Life_Car createVehicleLocal [random 1200,random 1200,random 1200 + 50];
	_newcar allowDamage false;
	HRP_activeLocalCars pushBack _newcar;

	waitUntil {isNull VehShop};

	VehShop = _newcar;
	VehShop setposAtl HRP_vehPos;
	VehShop setDir 200;
};