class HRP_PoliceDB_personLookup
{
	idd = 5017;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\tabletcitizen.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class W_T: RscText
		{
			idc = 1002;
			font = "Metropolis";
			x = 0.471125 * safezoneW + safezoneX;
			y = 0.42784 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Veh_T: RscText
		{
			idc = 1003;
			font = "Metropolis";
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.4252 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Veh_LB: RscListBox
		{
			idc = 1500;

			x = 0.304062 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.2 * safezoneH;
		};
		class Name_Edit: RscEdit
		{
			idc = 1400;

			text = "Citizen's Name"; //--- ToDo: Localize;
			style = ST_NO_RECT;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.356 * safezoneW;
			h = 0.0300001 * safezoneH;
		};
		class RscButton_1601: RscButton
		{
			idc = 1600;
			action = "[] call HRP_fnc_personLookup";

			x = 0.655203 * safezoneW + safezoneX;
			y = 0.33258 * safezoneH + safezoneY;
			w = 0.0625 * safezoneW;
			h = 0.035 * safezoneH;
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
		class Name_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.316953 * safezoneW + safezoneX;
			y = 0.4252 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.035 * safezoneH;
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