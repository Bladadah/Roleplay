class HRP_PoliceDB_mainScreen
{
	idd = 5013;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\TabletMain.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Warrant_B: RscButton
		{
			idc = 1601;
			action = "[true] call HRP_fnc_loadWarrantsPage";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.288594 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Vehicle_B: RscButton
		{
			idc = 1602;
			action = "createDialog 'HRP_PoliceDB_Vehicle'";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.288594 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Player_B: RscButton
		{
			idc = 1600;
			action = "createDialog 'HRP_PoliceDB_personLookup'";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.288594 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Off_B: RscButton
		{
			idc = 1232;
			action = "closeDialog 0;";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.492369 * safezoneW + safezoneX;
			y = 0.7596 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Corrections_B: RscButton
		{
			idc = 1603;
			action = "[true,1] call HRP_fnc_listInmates";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.286979 * safezoneW + safezoneX;
			y = 0.457408 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class onDuty_T: RscText
		{
			idc = 1000;
			font = "Metropolis";
			style = ST_CENTER;
			text = "15";
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.1 * safezoneH;
			sizeEx = 0.1;
			colorShadow[] = {0,0,0,0};
		};
		class currentInmates_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			style = ST_CENTER;
			text = "15";
			x = 0.570833 * safezoneW + safezoneX;
			y = 0.400926 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.1 * safezoneH;
			sizeEx = 0.1;
			colorShadow[] = {0,0,0,0};
		};
		class threatLevel_T: RscText
		{
			idc = 1002;
			font = "Metropolis";
			style = ST_CENTER;
			text = "Red";
			x = 0.413021 * safezoneW + safezoneX;
			y = 0.600926 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.1 * safezoneH;
			sizeEx = 0.1;
			colorShadow[] = {0,0,0,0};
		};
		class wantedFelons_T: RscText
		{
			idc = 1003;
			font = "Metropolis";
			style = ST_CENTER;
			text = "15";
			x = 0.571875 * safezoneW + safezoneX;
			y = 0.600926 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.1 * safezoneH;
			sizeEx = 0.1;
			colorShadow[] = {0,0,0,0};
		};
		class changeThreatLevel_B: RscButton
		{
			idc = 123123;
			action = "closeDialog 0; [] call HRP_fnc_openChangeThreatLevel";
			
			x = 0.292135 * safezoneW + safezoneX;
			y = 0.687926 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
		};
	};
};

		