


class HRP_Phone_bankApp
{
	idd = 5022;
	movingEnabled = false;

	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\phone\Phone_Frame.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.52 * safezoneH;
		};
		class RscPicture_1201: RscPicture
		{
			idc = 1201;
			text = "\RedRoleplay_Client2\icons\phone\bank\bankApp.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.52 * safezoneH;
		};
		class Cash_E: RscEdit
		{
			idc = 1400;
			style = ST_NO_RECT;
			x = 0.434114 * safezoneW + safezoneX;
			y = 0.523963 * safezoneH + safezoneY;
			w = 0.12125 * safezoneW;
			h = 0.025 * safezoneH;
		};
		class Rout_E: RscEdit
		{
			idc = 1401;
			style = ST_NO_RECT;
			x = 0.433854 * safezoneW + safezoneX;
			y = 0.569444 * safezoneH + safezoneY;
			w = 0.12125 * safezoneW;
			h = 0.025 * safezoneH;
		};
		class Transfer_B: RscButton
		{
			idc = 1600;
			x = 0.513906 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
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
   			action = "[] call HRP_fnc_onlineTransfer";
		};
		class Back_B: RscButton
		{
			idc = 1601;
			x = 0.444792 * safezoneW + safezoneX;
			y = 0.635186 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.025 * safezoneH;
			tooltip = "Go Back"; //--- ToDo: Localize;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
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
		class Avail_T: RscText
		{
			idc = 2314;
			text = "1500"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.445124 * safezoneW + safezoneX;
			y = 0.387 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.03;
			sizeEx = 0.03;
		};
		class AccB_T: RscText
		{
			idc = 2315;
			text = "1500"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.445124 * safezoneW + safezoneX;
			y = 0.42 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.03;
			sizeEx = 0.03;
		};
		class Rout_T: RscText
		{
			idc = 2316;
			text = "29302930"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.4775 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.03;
			sizeEx = 0.03;
		};
		class home_B: RscButton
		{
			idc = 1602;
			x = 0.483333 * safezoneW + safezoneX;
			y = 0.636111 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.025 * safezoneH;
			tooltip = "Home"; //--- ToDo: Localize;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
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
		class Lock_B: RscButton
		{
			idc = 1603;
			x = 0.526042 * safezoneW + safezoneX;
			y = 0.636111 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.025 * safezoneH;
			tooltip = "Lock"; //--- ToDo: Localize;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
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

