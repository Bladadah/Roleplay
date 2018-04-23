/*
	Author: Ben Harris
	Title: fn_Buy.sqf
	Description: Shop Purchase Function
*/

HRP_fnc_Buy = {
	_data = lbData [ 1500, ( lbCurSel 1500 ) ];	
	_FinalData = call compile _data;
	_ItemID = _FinalData select 0;
	_ItemType = _FinalData select 1;
	HRP_ItemPrice = _FinalData select 2;
	HRP_Whitelist = _FinalData select 3;
	HRP_typeRequired = _FinalData select 4;
	HRP_levelRequired = _FinalData select 5;

	HRP_allowed = true;
	switch (HRP_typeRequired) do
	{
		case "Cop":
		{
			if ((player getVariable "cop") < HRP_levelRequired) exitWith {
				["Error", "You do not have the required access level", true] spawn HRP_fnc_Notifications;
				HRP_allowed = false;
			};
		};
		case "Medic":
		{
			if ((player getVariable "ems") < HRP_levelRequired) exitWith {
				["Error", "You do not have the required access level", true] spawn HRP_fnc_Notifications;
				HRP_allowed = false;
			};
		};
		case "CG":
		{
			if (isNil {player getVariable "CG"}) exitWith { 
				["Error", "You do not have the required access level", true] spawn HRP_fnc_Notifications;
				HRP_allowed = false;
			};
			if ((player getVariable "CG") < HRP_levelRequired) exitWith {
				["Error", "You do not have the required access level", true] spawn HRP_fnc_Notifications;
				HRP_allowed = false;
			};
		};
		case "Civ":
		{

		};
	};

	HRP_Licenses = player getVariable "licenses";
	if (!(HRP_Whitelist in HRP_Licenses) && !(isNil HRP_Whitelist)) exitWith { HRP_allowed = false; ["Error", "You do not have the required License for this item."] spawn HRP_fnc_Notifications; };
	if (HRP_allowed) then {
		HRP_ItemPrice = call compile HRP_ItemPrice;
		HRP_Cash = player getVariable "cash";
		HRP_Check = [1, HRP_ItemPrice] call HRP_fnc_checkMoney;
		if (HRP_Check) then {
			switch (_ItemType) do
			{
				case "Weapon":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					player addWeapon _ItemID;
					["Purchase Successful", "Congratulations on your new Firearm", true] spawn HRP_fnc_Notifications;
				};
				case "Magazine":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					player addMagazine _ItemID;
					["Purchase Successful", "Congratulations on your new Ammunition", true] spawn HRP_fnc_Notifications;
				};
				case "Uniform":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					_UItems = uniformItems player;
					player addUniform _ItemID;
					{
					player addItemToUniform _x;
					} foreach _UItems;
					["Purchase Successful", "Congratulations on your new Clothing", true] spawn HRP_fnc_Notifications;
				};
				case "Backpack":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					_BPItems = backpackItems player;
					clearAllItemsFromBackpack player;
					player addBackpack _ItemID;
					{
					player addItemToBackpack _x;
					} foreach _BPItems;
					["Purchase Successful", "Congratulations on your new Backpack", true] spawn HRP_fnc_Notifications;
				};
				case "Vest":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					_VItems = vestItems player;
					player addVest _ItemID;
					{
						player addItemToVest _x;
					} foreach _VItems;
					["Purchase Successful", "Congratulations on your new Vest", true] spawn HRP_fnc_Notifications;
				};
				case "Glasses":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					player addGoggles _ItemID;
					["Purchase Successful", "Congratulations on your new Glasses", true] spawn HRP_fnc_Notifications;
				};
				case "Assign":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					player addItem _ItemID;
					player assignItem _ItemID;
					["Purchase Successful", "Congratulations on your purchase", true] spawn HRP_fnc_Notifications;
				};
				case "Item":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					player addItem _ItemID;
					["Purchase Successful", "Congratulations on your purchase", true] spawn HRP_fnc_Notifications;
				};
				case "Headgear":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					player addHeadgear _ItemID;
					["Purchase Successful", "Congratulations on your purchase", true] spawn HRP_fnc_Notifications;
				};
				case "Vehicle":
				{
					_pos = getMarkerPos HRP_vehicleSpawn; 
					_objects = nearestObjects [_pos, ["LandVehicle", "Air", "Sea"],5];
					if (count _objects > 0) then {
						if (HRP_distance < 5) exitWith { ["Purchase Error", "There is already a vehicle on the spawnpoint", true] spawn HRP_fnc_Notifications; };
					};
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					_Vehicle = _ItemID createVehicle [0,0,0];
					_Vehicle allowDamage false;
					_Vehicle setVehiclePosition [(getMarkerPos HRP_vehicleSpawn), [], 0, "NONE"];
					_Vehicle setposAtl [(getPosAtl _vehicle) select 0, (getPosAtl _vehicle) select 1, ((getPosAtl _vehicle) select 2) + 1];
					_Vehicle setDir (markerDir HRP_vehicleSpawn);
					["Purchase Successful", "Congratulations on your new Vehicle", true] spawn HRP_fnc_Notifications;
					HRP_Cars pushBack _Vehicle;
					_Vehicle setVariable ["Owner", name player, true];
					_vehicle setVariable ["ownerUID", getPlayerUID player, true];
					[_Vehicle, (owner player)] remoteExec ["setOwner", 2];

					playSound "vehiclepurchased";

					_handle = [] call HRP_fnc_setNumberPlate;

					_vehicle setVariable ["PlateID", _handle, true];
					_hit = [_vehicle]call HRP_fnc_vehicleHitGet;


					[typeOf _vehicle, _hit, player, _handle, (player getVariable "playerName")] remoteExecCall ["Server_fnc_insertVehiclePoliceDB", 2];

					_Vehicle allowDamage true;

					_vehicle lock 2;

					_toDo = ["clearWeaponCargoGlobal _vehicle", "clearBackpackCargoGlobal _vehicle", "clearItemCargoGlobal _vehicle", "clearMagazineCargoGlobal _vehicle"];
					{
						call compile _x;
					} forEach _toDo;	
				};
				case "Furniture":
				{
					[HRP_ItemPrice] call HRP_fnc_removeCash;
					_count = count (player getVariable "furniture");
					if (_count > 10) exitWith {
				        ["Task Failed", "You cannot have more than 10 pieces of furniture at once! Try selling some!"] spawn HRP_fnc_Notifications;
				    };
				    [_itemID] spawn HRP_fnc_createfurniture;
				};
			};
		} else {
		["Error", "Insufficient Funds to make this purchase.", true] spawn HRP_fnc_Notifications;
		};
	};
};