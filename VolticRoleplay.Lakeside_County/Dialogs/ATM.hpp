class ATM
{
	idd = 1015;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\Base\GUI EXPO.paa";
			x = 0.274844 * safezoneW + safezoneX;
			y = 0.0718148 * safezoneH + safezoneY;
			w = 0.45 * safezoneW;
			h = 0.8 * safezoneH;
		};
		class Balance_T: RscText
		{
			idc = 1002;
			font = "Metropolis";
			x = 0.360729 * safezoneW + safezoneX;
			y = 0.224 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.02 * safezoneH;
			sizeEx = 0.0275;
		};
		class Ammount_E: RscEdit
		{
			idc=1400;
			style = ST_NO_RECT;
			font = "Metropolis";
			x = 0.437135 * safezoneW + safezoneX;
			y = 0.361518 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.03;
		};
		class enterRouting_E: RscEdit
		{
			idc = 1405;
			style = ST_NO_RECT;
			font = "Metropolis";
			x = 0.423958 * safezoneW + safezoneX;
			y = 0.531482 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.03;
		};
		class Transfer_B: RscButton
		{
			action = "[]call HRP_fnc_atmTransfer";

			idc = 1603;
			x = 0.27776 * safezoneW + safezoneX;
			y = 0.553148 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Withdraw_B: RscButton
		{
			action = "[]spawn HRP_fnc_atmWithdraw";

			idc = 1602;
			x = 0.278125 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class RscButton_1604: RscButton
		{
			action = "[]spawn HRP_fnc_atmDeposit";

			idc = 1604;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class RscButton_1605: RscButton
		{
			action = "closeDialog 0";

			idc = 1605;
			x = 0.683333 * safezoneW + safezoneX;
			y = 0.549074 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class RscButton_1606: RscButton
		{
			action = "closeDialog 0";

			idc = 1606;
			x = 0.682291 * safezoneW + safezoneX;
			y = 0.605556 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Routing_T: RscText
		{
			idc = 1000;
			font = "Metropolis";
			x = 0.399479 * safezoneW + safezoneX;
			y = 0.239 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.02 * safezoneH;
			sizeEx = 0.0275;
		};
	};
};