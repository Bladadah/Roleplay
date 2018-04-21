class Harris_vehicleShop_Dialog
{
	idd = 5003;
	movingEnabled = false;

	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\VehicleStore.paa";
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.5 * safezoneH;
		};
		class Cancel_B: RscButton
		{
			idc = 1600;
			action = "closeDialog 0; veh_cam cameraEffect ['TERMINATE','BACK'];	camDestroy veh_cam; VShop_Open = false; deleteVehicle VehShop;";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.195781 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.121 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Buy_B: RscButton
		{
			idc = 1601;
			action = "closeDialog 0; veh_cam cameraEffect ['TERMINATE','BACK'];	camDestroy veh_cam; VShop_Open = false; deleteVehicle VehShop; [] call HRP_fnc_Buy";
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.121 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Price_B: RscText
		{
			idc = 1783;

			text = "Price:"; //--- ToDo: Localize;
			font = "Metropolis"
			x = 0.0416144 * safezoneW + safezoneX;
			y = 0.6589 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.03;
		};
		class LB_B: RscListbox
		{
			idc = 1500;
			onLbSelChanged = "[] spawn HRP_fnc_vehicleUpdate";
			colorText[] = {0.16,0.49,0.96,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};

			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.29 * safezoneW;
			h = 0.37 * safezoneH;
		};
		class Exit_B: RscButton
		{
			idc = 1602;
			x = 0.308594 * safezoneW + safezoneX;
			y = 0.249 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
	};
};