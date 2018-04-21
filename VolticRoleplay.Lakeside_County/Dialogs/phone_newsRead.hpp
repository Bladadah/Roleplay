
class HRP_Phone_newsRead
{
	idd = 5028;
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
		class RscPicture_1202: RscPicture
		{
			idc = 1235;

			text = "\RedRoleplay_Client2\icons\phone\news\newsarticleview.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Back_B: RscButton
		{
			idc = 2334;
			action = "closeDialog 0; [true, 1] call HRP_fnc_openNewsApp";
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
		class Title_T: RscText
		{
			idc = 1231;
			font = "Metropolis";
			colorShadow[] = {0.62,0.62,0.62,0.2};

			text = "Title"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.03;
		};
		class Desc_T: RscText
		{
			idc = 1252;
			font = "Metropolis";
			Style = ST_NO_RECT + ST_MULTI;
			colorShadow[] = {0.62,0.62,0.62,0.2};

			text = "Message"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.13125 * safezoneW;
			h = 0.229999 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.03;
		};
		class Date_t: RscText
		{
			idc = 1233;
			font = "Metropolis";
			style = ST_CENTER;
			colorShadow[] = {0.62,0.62,0.62,0.2};

			text = ""; //--- ToDo: Localize;
			x = 0.50716 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.06125 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02;
		};
	};
};
