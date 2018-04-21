class Harris_clothingShop_Dialog
{
	idd = 5002;
	movingEnabled = false;

	class controls
	{
		class clothing_Shop: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\clothingShop.paa";
			x = 0.0307812 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.627 * safezoneH;
		};
		class Purchase_B: RscButton
		{
			idc = 1601;
			action = "[] call HRP_fnc_Buy;";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.256625 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Cancel_B: RscButton
		{
			idc = 1601;
			action = "closeDialog 0; clothing_cam cameraEffect ['TERMINATE','BACK'];	camDestroy clothing_cam; CShop_Open = false; deleteVehicle ShopCharacter;";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.0854375 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.09 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class RscCombo_2100: RscCombo
		{
			idc = 2100;
			onLbSelChanged = "[] call HRP_fnc_typeUpdate";

			x = 0.0854375 * safezoneW + safezoneX;
			y = 0.2646 * safezoneH + safezoneY;
			w = 0.2625 * safezoneW;
			h = 0.026 * safezoneH;
		};
		class Price_T: RscText
		{
			idc = 1783;
			font = "Metropolis";

			text = "Price:"; //--- ToDo: Localize;
			x = 0.0813125 * safezoneW + safezoneX;
			y = 0.7200 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Background_Lb: RscListBox
		{
			idc = 1500;
			onLbSelChanged = "[] call HRP_fnc_clothingUpdate";

			x = 0.0864687 * safezoneW + safezoneX;
			y = 0.3108 * safezoneH + safezoneY;
			w = 0.265 * safezoneW;
			h = 0.37 * safezoneH;
			colorText[] = {0.16,0.49,0.96,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
	};
};