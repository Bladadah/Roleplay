
class HRP_Phone_callMenu
{
	idd = 5023;
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
		class app: RscPicture
		{
			idc = 1201;

			text = "\RedRoleplay_Client2\icons\phone\call\Phonepage.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Back_B: RscButton
		{
			idc = 1601;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
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
			idc = 1602;
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
			idc = 1603;
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
		class 1_B: RscButton
		{
			idc = 1600;
			x = 0.425364 * safezoneW + safezoneX;
			y = 0.403556 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[1] call HRP_fnc_Dial";
   		};
		class 2_B: RscButton
		{
			idc = 1604;
			x = 0.471354 * safezoneW + safezoneX;
			y = 0.402777 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[2] call HRP_fnc_Dial";
		};
		class 3_B: RscButton
		{
			idc = 1605;
			x = 0.519271 * safezoneW + safezoneX;
			y = 0.403704 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[3] call HRP_fnc_Dial";
		};
		class 4_B: RscButton
		{
			idc = 1606;
			x = 0.424999 * safezoneW + safezoneX;
			y = 0.449074 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[4] call HRP_fnc_Dial";
		};
		class 7_B: RscButton
		{
			idc = 1607;
			x = 0.426041 * safezoneW + safezoneX;
			y = 0.492593 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[7] call HRP_fnc_Dial";
		};
		class 5_B: RscButton
		{
			idc = 1608;
			x = 0.470832 * safezoneW + safezoneX;
			y = 0.45 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[5] call HRP_fnc_Dial";
		};
		class 6_B: RscButton
		{
			idc = 1609;
			x = 0.51875 * safezoneW + safezoneX;
			y = 0.450926 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[6] call HRP_fnc_Dial";
		};
		class 8_B: RscButton
		{
			idc = 1610;
			x = 0.471354 * safezoneW + safezoneX;
			y = 0.494444 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[8] call HRP_fnc_Dial";
		};
		class 9_B: RscButton
		{
			idc = 1611;
			x = 0.51875 * safezoneW + safezoneX;
			y = 0.496296 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[9] call HRP_fnc_Dial";
		};
		class 0_B: RscButton
		{
			idc = 1612;
			x = 0.472916 * safezoneW + safezoneX;
			y = 0.540741 * safezoneH + safezoneY;
			w = 0.044063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[0] call HRP_fnc_Dial";
		};
		class SMS_B: RscButton
		{
			idc = 1613;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.03063 * safezoneW;
			h = 0.045 * safezoneH;
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
		class Call_B: RscButton
		{
			idc = 1614;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.03063 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [] call HRP_fnc_phoneCall;";
		};
		class Contacts_B: RscButton
		{
			idc = 1615;
			x = 0.426041 * safezoneW + safezoneX;
			y = 0.312037 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [1,1] call HRP_fnc_listContacts";
		};
		class Number_T: RscText
		{
			idc = 1000;
			text = "";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class Clear_B: RscButton
		{
			idc = 1616;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.015 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "[] call HRP_fnc_clearDial";
		};
	};
};