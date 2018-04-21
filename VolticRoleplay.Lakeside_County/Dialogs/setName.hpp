class HRP_setName
{
	idd = 1233;
	movingEnabled = false;

	class controls
	{
		class ToSet: RscEdit
		{
			idc = 1400;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Set: RscButton
		{
			idc = 1600;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.035 * safezoneH;
			action = "[] call HRP_fnc_setName; closeDialog 0";
		};
		class Current_Name: RscText
		{
			idc = 1000;
			text = "Current Name:"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.03 * safezoneH;
		};
	};
};