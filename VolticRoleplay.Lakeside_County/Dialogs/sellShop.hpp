class HRP_sellShop
{
	idd = 5015;
	class controls 
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\farmersMarket.paa";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.325 * safezoneW;
			h = 0.57 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			action = "[] spawn HRP_fnc_sellItems";

			x = 0.511302 * safezoneW + safezoneX;
			y = 0.686889 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.05 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			action = "closeDialog 0";

			x = 0.396875 * safezoneW + safezoneX;
			y = 0.688852 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.05 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.201 * safezoneW;
			h = 0.375 * safezoneH;
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