class giveCash
{
	idd = 1010;
	class controls 
	{
		class giveMoney_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\giveMoney.paa";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class RscButton_1601: RscButton
		{
			idc = 1600;
			action = "[HRP_giveCashTarget, player]call HRP_fnc_giveCashSubmit";

			text = ""; //--- ToDo: Localize;
			x = 0.548489 * safezoneW + safezoneX;
			y = 0.514593 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
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
		class Cash_E: RscEdit
		{
			idc = 1401;
			style = ST_NO_RECT;
			font = "Metropolis";
			x = 0.55099 * safezoneW + safezoneX;
			y = 0.441296 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.027 * safezoneH;
			sizeEx = 0.03;
		};
		class CurrentFunds_T: RscText
		{
			idc = 1000;
			font = "Metropolis";
			text = "$"; //--- ToDo: Localize;
			x = 0.546875 * safezoneW + safezoneX;
			y = 0.393518 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.032987 * safezoneH;
			sizeEx = 0.03;
		};
		class Person_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			text = "Amount"; //--- ToDo: Localize;
			x = 0.548437 * safezoneW + safezoneX;
			y = 0.482407 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.032987 * safezoneH;
			sizeEx = 0.03;
		};
	};
};