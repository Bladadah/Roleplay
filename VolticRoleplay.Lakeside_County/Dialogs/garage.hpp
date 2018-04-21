class garage
{
	idd = 1013;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\GarageMenu.paa";
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.24 * safezoneW;
			h = 0.5 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			action = "[]call HRP_fnc_fetchCar; closeDialog 0;";

			x = 0.390729 * safezoneW + safezoneX;
			y = 0.679852 * safezoneH + safezoneY;
			w = 0.22 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class RscListbox_1500: RscListBox
		{
			idc = 1500;

			x = 0.382864 * safezoneW + safezoneX;
			y = 0.27363 * safezoneH + safezoneY;
			w = 0.2275 * safezoneW;
			h = 0.4 * safezoneH;
			colorText[] = {0.16,0.49,0.96,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Exit_B: RscButton
		{
			idc = 1601;
			x = 0.6 * safezoneW + safezoneX;
			y = 0.231481 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0";
		};
	};
};