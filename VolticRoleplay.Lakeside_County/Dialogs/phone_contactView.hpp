
class HRP_Phone_contactView
{
	idd = 5030;
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
		class RscPicture_1201: RscPicture
		{
			idc = 1432;

			text = "\RedRoleplay_Client2\icons\phone\Contact\contactView.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Back_B: RscButton
		{
			idc = 2334;
			action = "closeDialog 0; [1] call HRP_fnc_listContacts";
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
		class Name_T: RscText
		{
			idc = 2324;
			style = ST_NO_RECT + ST_CENTER;
			text = "Name"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.408 * safezoneH + safezoneY;
			w = 0.1025 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {-1,-1,-1,0.5};
			sizeEx = 0.035;
			size = 0.035;
		};
		class Cell_T: RscText
		{
			idc = 9578;
			style = ST_NO_RECT + ST_CENTER;
			text = "Cell"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.430 * safezoneH + safezoneY;
			w = 0.1025 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.03;
			size = 0.03;
			colorText[] = {0.62,0.62,0.62,1};
			colorShadow[] = {-1,-1,-1,0.2};
		};
		class Call_B: RscButton
		{
			idc = 1603;
			x = 0.444792 * safezoneW + safezoneX;
			y = 0.484259 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.065 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [] call HRP_fnc_phoneCall";
		};
		class Msg_B: RscButton
		{
			idc = 1604;
			x = 0.504166 * safezoneW + safezoneX;
			y = 0.484259 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.065 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [] call HRP_fnc_openSendSMS";
		};
	};
};