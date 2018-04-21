class HRP_PoliceDB_inMateInfo
{
	idd = 5234;
	class controls 
	{
		class Background_P: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\inMateInfo.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Name_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cellNumber_T: RscText
		{
			idc = 1002;
			font = "Metropolis";
			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.475521 * safezoneW + safezoneX;
			y = 0.367592 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class Time_T: RscText
		{
			idc = 1003;
			font = "Metropolis";
			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.515104 * safezoneW + safezoneX;
			y = 0.409 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class Reason_T: RscText
		{
			idc = 1004;
			font = "Metropolis";
			colorShadow[] = {0,0,0,0};

			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.407 * safezoneW + safezoneX;
			y = 0.474 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Notes_T: RscText
		{
			idc = 1005;
			font = "Metropolis";
			style = ST_MULTI + ST_NO_RECT;
			colorShadow[] = {0,0,0,0};

			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.407 * safezoneW + safezoneX;
			y = 0.53542 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.2 * safezoneH;
		};
		class Back_T: RscButton
		{
			idc = 1600;
			x = 0.290625 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.035 * safezoneH;
			action = "[true, 1] call HRP_fnc_listInmates;";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
	};
};