class HRP_buyHouse
{
	idd = 5009;
	class controls 
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\immigration\purchaseHouse.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.715 * safezoneH;
		};
		class Buy_B: RscButton
		{
			idc = 1600;
			action = "[] call HRP_fnc_buyHouse; closeDialog 0";

			x = 0.587656 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Exit_B: RscButton
		{
			idc = 1601;
			action = "closeDialog 0";

			x = 0.360781 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Buyer_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.389636 * safezoneW + safezoneX;
			y = 0.331 * safezoneH + safezoneY;
			w = 0.17 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.027;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Description_T: RscText
		{
			idc = 1002;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.418 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.027;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Price_T: RscText
		{
			idc = 1023;
			font = "PuristaBold";
			style = ST_CENTER;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Signature_T: RscEdit
		{
			idc = 1400;
			font = "Palace";
			style = ST_NO_RECT;
			x = 0.447917 * safezoneW + safezoneX;
			y = 0.704482 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {-1,-1,-1,1};
		};
	};
};