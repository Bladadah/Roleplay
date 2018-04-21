class HRP_Phone_settingsMenu
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
		class Back_B: RscButton
		{
			idc = 2334;
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
		class RscPicture_1202: RscPicture
		{
			idc = 6125;

			text = "\RedRoleplay_Client2\icons\phone\settings\settingsPage.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Anon_B_Tick: RscPicture
		{
			idc = 51412;

			text = "\RedRoleplay_Client2\icons\phone\settings\SelectionCircle.paa";
			x = 0.402344 * safezoneW + safezoneX;
			y = 0.178482 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Anon_B_Cross: RscPicture
		{
			idc = 123455;

			text = "\RedRoleplay_Client2\icons\phone\settings\SelectionCircle.paa";
			x = 0.417708 * safezoneW + safezoneX;
			y = 0.177778 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Block_B_Tick: RscPicture
		{
			idc = 16124;

			text = "\RedRoleplay_Client2\icons\phone\settings\SelectionCircle.paa";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Block_B_Cross: RscPicture
		{
			idc = 2343;

			text = "\RedRoleplay_Client2\icons\phone\settings\SelectionCircle.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Background_1_B: RscButton
		{
			idc = 1603;
			x = 0.434583 * safezoneW + safezoneX;
			y = 0.361444 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "[1] call HRP_fnc_setBackground";
		};
		class Background_2_B: RscButton
		{
			idc = 1604;
			x = 0.465625 * safezoneW + safezoneX;
			y = 0.360185 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "[2] call HRP_fnc_setBackground";
		};
		class Background_3_B: RscButton
		{
			idc = 1605;
			x = 0.498437 * safezoneW + safezoneX;
			y = 0.360185 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "[3] call HRP_fnc_setBackground";
		};
		class Background_More_B: RscButton
		{
			idc = 1606;
			x = 0.53125 * safezoneW + safezoneX;
			y = 0.360185 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Back2_B: RscButton
		{
			idc = 1603;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.01525 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Anon_T_B: RscButton
		{
			idc = 1608;
			x = 0.530885 * safezoneW + safezoneX;
			y = 0.479852 * safezoneH + safezoneY;
			w = 0.0125 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[true] call HRP_fnc_anonSwitch";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Block_T_B: RscButton
		{
			idc = 1609;
			x = 0.530208 * safezoneW + safezoneX;
			y = 0.503704 * safezoneH + safezoneY;
			w = 0.0125 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[true] call HRP_fnc_switchBlockingSetting";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Anon_C_B: RscButton
		{
			idc = 1610;
			x = 0.546354 * safezoneW + safezoneX;
			y = 0.478703 * safezoneH + safezoneY;
			w = 0.0125 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[false] call HRP_fnc_anonSwitch";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Block_C_B: RscButton
		{
			idc = 1611;
			x = 0.545834 * safezoneW + safezoneX;
			y = 0.503703 * safezoneH + safezoneY;
			w = 0.0125 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[false] call HRP_fnc_switchBlockingSetting";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Ringtone: RscCombo
		{
			idc = 2100;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			onLbSelChanged = "[] call HRP_fnc_onRingtoneLbChanged";
		};
	};
};

		