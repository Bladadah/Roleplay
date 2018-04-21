class HRP_craftingMenu
{
	idd = 8376;
	movingEnabled = false;

	class controls
	{
		class craftingMenu_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\craftingmenu.paa";
			x = 0.331614 * safezoneW + safezoneX;
			y = 0.181333 * safezoneH + safezoneY;
			w = 0.335156 * safezoneW;
			h = 0.627 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Craft_B: RscButton
		{
			font = "Metropolis";
			idc = 1600;

			x = 0.34625 * safezoneW + safezoneX;
			y = 0.74663 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] spawn HRP_fnc_craftItem";
		};
		class Craft_lb: RscListbox
		{
			onLbSelChanged = "[] call HRP_fnc_onCraftLbChanged";
			font = "Metropolis";
			idc = 1500;

			x = 0.348958 * safezoneW + safezoneX;
			y = 0.272222 * safezoneH + safezoneY;
			w = 0.143 * safezoneW;
			h = 0.455 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {1,1,1,1};
   			sizeEx = 0.03;
		};
		class Materials_Lb: RscListbox
		{
			font = "Metropolis";
			idc = 1501;

			x = 0.505208 * safezoneW + safezoneX;
			y = 0.273148 * safezoneH + safezoneY;
			w = 0.143 * safezoneW;
			h = 0.455 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {1,1,1,1};
   			sizeEx = 0.03;
		};
		class dropDown_lb: RscCombo
		{
			idc = 2100;
			onLbSelChanged = "[] call HRP_fnc_onCraftSelectionLbChanged";
			x = 0.349479 * safezoneW + safezoneX;
			y = 0.212037 * safezoneH + safezoneY;
			w = 0.299 * safezoneW;
			h = 0.02 * safezoneH;
			sizeEx = 0.03;
		};
	};
};