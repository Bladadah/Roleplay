/*
	Author: Ben Harris
	Description: Holster / unholster Weapon
*/

HRP_fnc_holster = {

	if (HRP_Holstered == 0 && currentWeapon player != "") then {
        curWep_Holster = currentWeapon player;
    	player action ["SwitchWeapon", player, player, 100];
   	 	player switchCamera cameraView;
   		HRP_Holstered = 1;
    } else {
	    if (HRP_Holstered == 1 && "curWep_Holster" != "" && {(curWep_Holster != "")}) then {
	 	   if(curWep_Holster in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
	   			player selectWeapon curWep_Holster;
	   			curWep_Holster = "";
	   			HRP_Holstered = 0;
			};
		};
	};
};