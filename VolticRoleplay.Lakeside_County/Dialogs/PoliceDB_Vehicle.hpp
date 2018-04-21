class HRP_PoliceDB_Vehicle
{
	idd = 5014;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\tabletregis.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Name: RscEdit
		{
			idc = 1400;

			style = ST_NO_RECT;
			x = 0.29 * safezoneW + safezoneX;
			y = 0.334 * safezoneH + safezoneY;
			w = 0.356 * safezoneW;
			h = 0.0300001 * safezoneH;
		};
		class Search_b: RscButton
		{
			idc = 1600;
			action = "[] call HRP_fnc_findVehicle";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.655156 * safezoneW + safezoneX;
			y = 0.333148 * safezoneH + safezoneY;
			w = 0.05925 * safezoneW;
			h = 0.0320001 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class List_B: RscListbox
		{
			idc = 1500;
			x = 0.290811 * safezoneW + safezoneX;
			y = 0.377 * safezoneH + safezoneY;
			w = 0.3573 * safezoneW;
			h = 0.320001 * safezoneH;
		};
		class Off_B: RscButton
		{
			idc = 1232;
			action = "closeDialog 0;";
			x = 0.492343 * safezoneW + safezoneX;
			y = 0.759593 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
	};
};
