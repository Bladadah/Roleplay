class HRP_arrestMenu
{
	idd = 5020;
	movingEnabled = false;

	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\jailMenu.paa";
			x = 0.17 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.64125 * safezoneW;
			h = 0.555 * safezoneH;
		};
		class Time_E: RscEdit
		{
			idc = 1400;
			style = ST_NO_RECT;
			x = 0.35099 * safezoneW + safezoneX;
			y = 0.403778 * safezoneH + safezoneY;
			w = 0.15125 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Notes_E: RscEdit
		{
			idc = 1401;
			style = ST_NO_RECT + ST_MULTI;
			x = 0.35 * safezoneW + safezoneX;
			y = 0.472222 * safezoneH + safezoneY;
			w = 0.15125 * safezoneW;
			h = 0.11 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Crime_E: RscEdit
		{
			idc = 1402;
			style = ST_NO_RECT + ST_MULTI;
			x = 0.512501 * safezoneW + safezoneX;
			y = 0.402778 * safezoneH + safezoneY;
			w = 0.15125 * safezoneW;
			h = 0.177 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Send_B: RscButton
		{
			idc = 1600;
			x = 0.349948 * safezoneW + safezoneX;
			y = 0.599926 * safezoneH + safezoneY;
			w = 0.315 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] spawn HRP_fnc_arrestPlayer";
		};
		class Exit_B: RscButton
		{
			idc = 1601;
			x = 0.656771 * safezoneW + safezoneX;
			y = 0.332408 * safezoneH + safezoneY;
			w = 0.015 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0,0,0,0};
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