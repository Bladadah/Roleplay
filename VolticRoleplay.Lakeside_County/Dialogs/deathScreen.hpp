class HRP_Death_Screen
{
	idd = 5007;
	movingEnabled = false;
	enableSimulation = true;
	class controls
	{
		class background_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\deathScreen.paa";
			x = -0.0207813 * safezoneW + safezoneX;
			y = -0.402 * safezoneH + safezoneY;
			w = 1.02094 * safezoneW;
			h = 1.8 * safezoneH;
		};
		class Respawn_B: RscButton
		{
			idc = 1601;
			action = "[] call HRP_fnc_Respawned";

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.18 * safezoneW;
			h = 0.08 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Request_B: RscButton
		{
			idc = 1600;
			action = "[] call HRP_fnc_RequestMedic";

			x = 0.288594 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.18 * safezoneW;
			h = 0.08 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Death_T: RscText
		{
			idc = 1718;

			text = "Death Time:"; //--- ToDo: Localize;
			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.18 * safezoneW;
			h = 0.1 * safezoneH;
			sizeEx = 0.05;
		};
		class Killedby_T: RscText
		{
			idc = 1719;

			text = "Death Time:"; //--- ToDo: Localize;
			x = 0.757292 * safezoneW + safezoneX;
			y = 0.177778 * safezoneH + safezoneY;
			w = 0.18 * safezoneW;
			h = 0.1 * safezoneH;
			sizeEx = 0.05;
		};
	};
};