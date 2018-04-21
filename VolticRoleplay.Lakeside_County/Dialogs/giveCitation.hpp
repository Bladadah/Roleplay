class HRP_giveCitation
{
	idd = 5063;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\giveCitation";
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.35 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class First_T: RscText
		{
			idc = 1000;
			font = "PuristaLight";
			text = "Ben"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Last_T: RscText
		{
			idc = 1001;
			font = "PuristaLight";
			text = "Harris"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Middle_T: RscText
		{
			idc = 1002;
			font = "PuristaLight";
			text = "I."; //--- ToDo: Localize;
			x = 0.53125 * safezoneW + safezoneX;
			y = 0.267593 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class DOB_T: RscText
		{
			idc = 1003;
			font = "PuristaLight";
			text = "26/04/1999"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class License_T: RscText
		{
			idc = 1004;
			font = "PuristaLight";
			text = "Yes"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class country_T: RscText
		{
			idc = 1005;
			font = "PuristaLight";
			text = "Lakeside Isles"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class violation_E: RscEdit
		{
			idc = 1400;
			style = ST_NO_RECT;
			font = "PuristaLight";
			x = 0.383854 * safezoneW + safezoneX;
			y = 0.430556 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class courtAppearance_LB: RscCombo
		{
			idc = 2100;
			font = "PuristaLight";
			x = 0.384478 * safezoneW + safezoneX;
			y = 0.479852 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class citationCost: RscEdit
		{
			idc = 1401;
			style = ST_NO_RECT;
			font = "PuristaLight";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class submittingOfficer_T: RscText
		{
			idc = 1006;
			font = "PuristaLight";
			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.383334 * safezoneW + safezoneX;
			y = 0.548148 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class badge_T: RscEdit
		{
			idc = 1402;
			style = ST_NO_RECT;
			font = "PuristaLight";
			x = 0.513542 * safezoneW + safezoneX;
			y = 0.548148 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Issue_B: RscButton
		{
			idc = 1600;
			x = 0.517552 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.075 * safezoneW;
			h = 0.03 * safezoneH;
			action = "[] call HRP_fnc_sendTicket; closeDialog 0;";
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
	};
};
