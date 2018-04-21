class HRP_PoliceDB_viewWarrant
{
	idd = 5012;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\tabletviewwarrant.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class ID_DB: RscText
		{
			idc = 1001;
			font = "Metropolis";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.323 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.05 * safezoneH;
			text = "d";
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.034;

		};
		class Name_T: RscText
		{
			idc = 1002;
			font = "Metropolis";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.367 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.05 * safezoneH;
			text = "d";
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.034;
		};
		class A_T: RscText
		{
			idc = 1006;
			font = "Metropolis";
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.05 * safezoneH;
			text = "d";
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.034;
		};
		class SO_T: RscText
		{
			idc = 1003;
			font = "Metropolis";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.466 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.05 * safezoneH;
			text = "d";
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.034;
		};

		class C_T: RscText
		{
			idc = 1004;
			font = "Metropolis";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.514 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.05 * safezoneH;
			text = "d";
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.034;
		};
		class Desc_T: RscText
		{
			idc = 1005;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.58 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.1 * safezoneH;
			text = "d";
			style = ST_MULTI + ST_NO_RECT;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.034;
		};
		class done_B: RscButton
		{
			idc = 1606;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.695 * safezoneH + safezoneY;
			w = 0.1025 * safezoneW;
			h = 0.035 * safezoneH;
			action = "closeDialog 0";
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
		class Cancel_B: RscButton
		{
			idc = 1607;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.695 * safezoneH + safezoneY;
			w = 0.1025 * safezoneW;
			h = 0.035 * safezoneH;
			action = "closeDialog 0";
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
