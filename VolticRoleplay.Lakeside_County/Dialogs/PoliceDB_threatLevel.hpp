class HRP_PoliceDB_threatLevel
{
	idd = 5234;
	class controls 
	{
		class Background_P: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\threatLevel.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Back_B: RscButton
		{
			idc = 1600;
			x = 0.289115 * safezoneW + safezoneX;
			y = 0.276407 * safezoneH + safezoneY;
			w = 0.03125 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [] call HRP_fnc_openPoliceDatabase";
		};
		class threatLevel_T: RscText
		{
			idc = 1000;
			font = "Metropolis";
			text = "Red"; //--- ToDo: Localize;
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class Green_B: RscButton
		{
			idc = 1601;
			x = 0.30052 * safezoneW + safezoneX;
			y = 0.461111 * safezoneH + safezoneY;
			w = 0.126 * safezoneW;
			h = 0.19 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "['Green'] call HRP_fnc_changeThreatLevel";
		};
		class Orange_B: RscButton
		{
			idc = 1602;
			x = 0.439063 * safezoneW + safezoneX;
			y = 0.461111 * safezoneH + safezoneY;
			w = 0.126 * safezoneW;
			h = 0.19 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "['Orange'] call HRP_fnc_changeThreatLevel";
		};
		class Red_B: RscButton
		{
			idc = 1603;
			x = 0.578646 * safezoneW + safezoneX;
			y = 0.46111 * safezoneH + safezoneY;
			w = 0.126 * safezoneW;
			h = 0.19 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "['Red'] call HRP_fnc_changeThreatLevel";
		};
	};
};
