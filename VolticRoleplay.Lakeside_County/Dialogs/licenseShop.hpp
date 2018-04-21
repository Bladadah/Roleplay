class HRP_licenseShop
{
	idd = 5016;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\Base\DMVmain.paa";
			x = 0.262812 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.5 * safezoneW;
			h = 0.9 * safezoneH;
		};
		class availableLicenses_Lb: RscListbox
		{
			idc = 1500;

			x = 0.298 * safezoneW + safezoneX;
			y = 0.527074 * safezoneH + safezoneY;
			w = 0.29 * safezoneW;
			h = 0.16 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {0.62,0.62,0.62,1};
		};
		class yourLicenses_lb: RscListbox
		{
			idc = 1501;

			x = 0.298 * safezoneW + safezoneX;
			y = 0.268519 * safezoneH + safezoneY;
			w = 0.29 * safezoneW;
			h = 0.16 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {0.62,0.62,0.62,1};
		};
		class Accept_B: RscButton
		{
			action = "[] call HRP_fnc_buyLicense";

			idc = 1600;
			x = 0.306771 * safezoneW + safezoneX;
			y = 0.834259 * safezoneH + safezoneY;
			w = 0.095 * safezoneW;
			h = 0.03 * safezoneH;
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
			action = "closeDialog 0";

			idc = 1601;
			x = 0.402604 * safezoneW + safezoneX;
			y = 0.83426 * safezoneH + safezoneY;
			w = 0.095 * safezoneW;
			h = 0.03 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Sig_T: RscEdit
		{
			idc = 1400;
			style = ST_NO_RECT;
			font = "Palace";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.26 * safezoneW;
			h = 0.045 * safezoneH;
			colorText[] = {-1,-1,-1,1};
		};
	};
};