class HRP_smeltingMenu
{
	idd = 5041;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\refineryMenu.paa";
			x = 0.180312 * safezoneW + safezoneX;
			y = -0.05 * safezoneH + safezoneY;
			w = 0.6 * safezoneW;
			h = 1 * safezoneH;
		};
		class Machines_T: RscText
		{
			idc = 1000;
			font = "Metropolis"
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.1 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			style = ST_MULTI + ST_NO_RECT;
			sizeEx = 0.03;
		};
		class Refine_B_1: RscButton
		{
			idc = 1600;
			x = 0.665 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.038 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[0] spawn HRP_fnc_processItem";
		};
		class Refine_B_2: RscButton
		{
			idc = 1601;
			x = 0.665105 * safezoneW + safezoneX;
			y = 0.387037 * safezoneH + safezoneY;
			w = 0.038 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[1] spawn HRP_fnc_processItem";
		};
		class Refine_B_3: RscButton
		{
			idc = 1602;
			x = 0.666146 * safezoneW + safezoneX;
			y = 0.427778 * safezoneH + safezoneY;
			w = 0.038 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[2] spawn HRP_fnc_processItem";
		};
		class Refine_B_4: RscButton
		{
			idc = 1603;
			x = 0.666146 * safezoneW + safezoneX;
			y = 0.469445 * safezoneH + safezoneY;
			w = 0.038 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[3] spawn HRP_fnc_processItem";
		};
		class Refine_B_5: RscButton
		{
			idc = 1604;
			x = 0.665625 * safezoneW + safezoneX;
			y = 0.512963 * safezoneH + safezoneY;
			w = 0.038 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[4] spawn HRP_fnc_processItem";
		};
		class Cancel_B: RscButton
		{
			idc = 1605;
			x = 0.619271 * safezoneW + safezoneX;
			y = 0.725926 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.047 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0";
		};
	};
};
