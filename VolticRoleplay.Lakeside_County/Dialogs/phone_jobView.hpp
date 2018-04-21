class HRP_Phone_jobView
{
	idd = 5032;
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
			h = 0.520001 * safezoneH;
		};
		class Back_B: RscButton
		{
			idc = 2334;
			action = "closeDialog 0; [true, 1] call HRP_fnc_openJobsApp";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.444828 * safezoneW + safezoneX;
			y = 0.63508 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			tooltip = "Go Back"; //--- ToDo: Localize;
		};
		class home_B: RscButton
		{
			idc = 2323;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.483294 * safezoneW + safezoneX;
			y = 0.63618 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			tooltip = "Home"; //--- ToDo: Localize;
		};
		class Lock_B: RscButton
		{
			idc = 6569;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.526091 * safezoneW + safezoneX;
			y = 0.63618 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			tooltip = "Lock"; //--- ToDo: Localize;
		};
		class background_P: RscPicture
		{
			idc = 7565;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\IndeedView.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Title_T: RscText
		{
			idc = 1603;
			font = "Metropolis";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.02 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.03;
		};
		class Pay_T: RscText
		{
			idc = 1604;
			font = "Metropolis";
			x = 0.433334 * safezoneW + safezoneX;
			y = 0.386259 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.02 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.03;
		};
		class Desc_T: RscText
		{
			idc = 1605;
			font = "Metropolis";
			style = ST_MULTI + ST_NO_RECT;
			x = 0.434375 * safezoneW + safezoneX;
			y = 0.424074 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.09 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
			sizeEx = 0.03;
		};
		class Submit_B: RscButton
		{
			idc = 1606;
			x = 0.502604 * safezoneW + safezoneX;
			y = 0.587963 * safezoneH + safezoneY;
			w = 0.05125 * safezoneW;
			h = 0.0375 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] call HRP_fnc_phoneJobApp";
		};
		class Back2_B: RscButton
		{
			idc = 1603;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.01525 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; [true,1] call HRP_fnc_openJobsApp";
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


