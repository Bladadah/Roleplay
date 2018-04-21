/*
	Title: Dialog_Gearshop.hpp
	Description: Dialog for the Gear Shops
*/

class Harris_Gearshop_Dialog
{
	idd = 5421;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "RedRoleplay_Client2\icons\generalStore.paa";
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.17 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.65 * safezoneH;
		};
		class Cancel_B: RscButton
		{
			idc = 1600;
			action = "closeDialog 0";

			x = 0.330365 * safezoneW + safezoneX;
			y = 0.696148 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
		};
		class Purchase_B: RscButton
		{
			idc = 1600;

			x = 0.585937 * safezoneW + safezoneX;
			y = 0.698149 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.055 * safezoneH;
			action = "[] call HRP_fnc_Buy";
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
		};
		class mainLb_lb: RscListbox
		{
			idc = 1500;
			font = "Metropolis";
			onLbSelChanged = "[] spawn HRP_fnc_shopUpdate";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.27 * safezoneW;
			h = 0.37 * safezoneH;
			colorText[] = {0.16,0.49,0.96,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class curSel_T: RscText
		{
			idc = 1000;
			font = "Metropolis";
			text = "Weapon"; //--- ToDo: Localize;
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.045 * safezoneH;
			sizeEx = 0.032;
		};
		class Price_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			text = "Weapon"; //--- ToDo: Localize;
			x = 0.630729 * safezoneW + safezoneX;
			y = 0.3 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.045 * safezoneH;
		};
	};
};