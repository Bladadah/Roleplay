
class HRP_PoliceDB_createWarrant
{
	idd = 5011;
	class controls 
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\tabletcreate.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class RscEdit_1404: RscEdit
		{
			idc = 1400;

			text = "Suspect Name"; //--- ToDo: Localize;
			style = ST_NO_RECT;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.42 * safezoneW;
			h = 0.0300001 * safezoneH;
		};
		class RscEdit_1405: RscEdit
		{
			idc = 1403;

			text = "Arrest Priority"; //--- ToDo: Localize;
			style = ST_NO_RECT;
			x = 0.292203 * safezoneW + safezoneX;
			y = 0.37526 * safezoneH + safezoneY;
			w = 0.42 * safezoneW;
			h = 0.0300001 * safezoneH;
		};
		class RscEdit_1406: RscEdit
		{
			idc = 1401;

			text = "Crimes Committed"; //--- ToDo: Localize;
			style = ST_NO_RECT;
			x = 0.292203 * safezoneW + safezoneX;
			y = 0.41486 * safezoneH + safezoneY;
			w = 0.42 * safezoneW;
			h = 0.0300001 * safezoneH;
		};
		class RscEdit_1407: RscEdit
		{
			idc = 1402;

			text = "Description of Crime(s):"; //--- ToDo: Localize;
			style = ST_MULTI + ST_NO_RECT;
			x = 0.294059 * safezoneW + safezoneX;
			y = 0.46084 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.209 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			colorFrame[] = {0,0,0,0};
		};
		class Cancel_B: RscButton
		{
			idc = 1601;
			action = "closeDialog 0; [] call HRP_fnc_loadWarrantsPage";

			x = 0.305197 * safezoneW + safezoneX;
			y = 0.6991 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Add_B: RscButton
		{
			idc = 1601;
			action = "[] call HRP_fnc_addWarrant; closeDialog 0; [] call HRP_fnc_loadWarrantsPage";

			x = 0.599103 * safezoneW + safezoneX;
			y = 0.69822 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Off_B: RscButton
		{
			idc = 1232;
			action = "closeDialog 0;";
			x = 0.492343 * safezoneW + safezoneX;
			y = 0.759593 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {0,0,0,0};
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

