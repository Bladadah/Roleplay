class HRP_immigrationPapersCreate
{
	idd = 5042;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\immigration\ImmigrationPapers.paa";
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.715 * safezoneH;
		};
		class First_Name_E: RscEdit
		{
			idc = 1400;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.356771 * safezoneW + safezoneX;
			y = 0.343519 * safezoneH + safezoneY;
			w = 0.12525 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0.62,0.62,0.62,0.1};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {-1,-1,-1,1};

		};
		class Sur_Name_E: RscEdit
		{
			idc = 1401;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.494271 * safezoneW + safezoneX;
			y = 0.344445 * safezoneH + safezoneY;
			w = 0.14525 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Middle_Name_E: RscEdit
		{
			idc = 1402;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.358333 * safezoneW + safezoneX;
			y = 0.407407 * safezoneH + safezoneY;
			w = 0.028 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Sex_Lb: RscEdit
		{
			idc = 2100;
			font = "PuristaLight";
			style = ST_NO_RECT;
			text = "M";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.406444 * safezoneH + safezoneY;
			w = 0.028 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
			autofill = "M";
		};
		class DOB_1_E: RscEdit
		{
			idc = 1403;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.464375 * safezoneW + safezoneX;
			y = 0.406444 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class DOB_2_E: RscEdit
		{
			idc = 1404;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.492188 * safezoneW + safezoneX;
			y = 0.406444 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class DOB_3_E: RscEdit
		{
			idc = 1405;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.52 * safezoneW + safezoneX;
			y = 0.406444 * safezoneH + safezoneY;
			w = 0.027 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Eye_Lb: RscCombo
		{
			idc = 2101;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.406444 * safezoneH + safezoneY;
			w = 0.068 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {1,1,1,1};
			colorActive[] = {1,1,1,1};
			colorBackgroundActive[] = {1,1,1,1};
			colorBackgroundDisabled[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,1};
		};
		class Previous_Country_E: RscEdit
		{
			idc = 1406;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.355729 * safezoneW + safezoneX;
			y = 0.47037 * safezoneH + safezoneY;
			w = 0.15125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Passport_T: RscText
		{
			idc = 1407;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.513541 * safezoneW + safezoneX;
			y = 0.472222 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0.62,0.62,0.62,0.1};
			colorText[] = {-1,-1,-1,1};
		};
		class Declared_Funds_T: RscText
		{
			idc = 1408;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.356771 * safezoneW + safezoneX;
			y = 0.570371 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Motor_Vehicles_T: RscText
		{
			idc = 1409;
			font = "PuristaLight";
			style = ST_NO_RECT;
			x = 0.495833 * safezoneW + safezoneX;
			y = 0.570371 * safezoneH + safezoneY;
			w = 0.143 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
		};
		class Signature_E: RscEdit
		{
			idc = 1410;
			font = "Palace";
			style = ST_NO_RECT;
			x = 0.471355 * safezoneW + safezoneX;
			y = 0.703703 * safezoneH + safezoneY;
			w = 0.17 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.1};
			sizeEx = 0.05;
		};
		class Submit_B: RscButton
		{
			idc = 1600;
			x = 0.584896 * safezoneW + safezoneX;
			y = 0.752778 * safezoneH + safezoneY;
			w = 0.05525 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] spawn HRP_fnc_identityCreate";
		};
		class Cancel_B: RscButton
		{
			idc = 1600;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [] call HRP_fnc_listIdentities";

			x = 0.355625 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.05525 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
	};
};