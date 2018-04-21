class HRP_PoliceDB
{
	idd = 5011;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\tabletwarrant.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Name: RscEdit
		{
			idc = 1400;

			style = ST_NO_RECT;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.3573 * safezoneW;
			h = 0.0300001 * safezoneH;
		};
		class Search_b: RscButton
		{
			idc = 1600;
			action = "[] call HRP_fnc_findWarrant";

			x = 0.654172 * safezoneW + safezoneX;
			y = 0.33148 * safezoneH + safezoneY;
			w = 0.06125 * safezoneW;
			h = 0.0400002 * safezoneH;
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
		class Create_B: RscButton
		{
			idc = 1601;
			action = "closeDialog 0; createDialog 'HRP_PoliceDB_CreateWarrant'";

			x = 0.304681 * safezoneW + safezoneX;
			y = 0.69822 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.0320001 * safezoneH;
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
		class View_W: RscButton
		{
			idc = 1602;
			action = "[] call HRP_fnc_loadWarrant";

			x = 0.453078 * safezoneW + safezoneX;
			y = 0.69822 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.0320001 * safezoneH;
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
		class Remove_W: RscButton
		{
			idc = 1603;
			action = "[] call HRP_fnc_deleteWarrant";

			x = 0.599516 * safezoneW + safezoneX;
			y = 0.6991 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.0320001 * safezoneH;
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
		class List_B: RscListBox
		{
			idc = 1500;

			x = 0.29375 * safezoneW + safezoneX;
			y = 0.37086 * safezoneH + safezoneY;
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