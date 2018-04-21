class HRP_lockerMenu
{
	idd = 5045;
	movingEnabled = false;

	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\locker.paa";
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.5 * safezoneW;
			h = 0.75 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Locker_Lb: RscListbox
		{
			idc = 1500;
			x = 0.25401 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.162 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class Player_Lb: RscListbox
		{
			idc = 1501;
			x = 0.559895 * safezoneW + safezoneX;
			y = 0.290741 * safezoneH + safezoneY;
			w = 0.162 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class Store_B: RscButton
		{
			idc = 1600;
			x = 0.425573 * safezoneW + safezoneX;
			y = 0.302333 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.066 * safezoneH;
			action = "[] call HRP_fnc_storeLockerItem";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Fetch_B: RscButton
		{
			idc = 1601;
			x = 0.427084 * safezoneW + safezoneX;
			y = 0.489814 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.066 * safezoneH;
			action = "[] call HRP_fnc_fetchLockerItem";
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
