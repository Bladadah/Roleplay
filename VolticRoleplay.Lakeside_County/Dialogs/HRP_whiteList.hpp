class HRP_whiteList
{
	name = "HRP_whiteList";
	idd = 123312;
	fadein=0;
	fadeout=0;
	movingEnable = 0;
	objects[]={};

	class controlsBackground 
	{
		class Whitelist_Combo: RscCombo
		{
			idc = 2100;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.03 * safezoneH;
		};
		class Whitelist_B: RscButton
		{
			idc = 1600;
			text = "Whitelist"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.03 * safezoneH;
			action = "[] call HRP_fnc_whitelist; closeDialog 0";
		};
		class SWhitelist_B: RscButton
		{
			idc = 1601;
			text = "SERT Whitelist"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.03 * safezoneH;
			action = "[] call HRP_fnc_sertWhitelist; closeDialog 0";
		};
	};
};
