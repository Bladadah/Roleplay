class HRP_giveKeys
{
	idd = 50223;
	movingEnabled = false;

	class controls
	{
		class car_Combo: RscCombo
		{
			idc = 2100;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.03 * safezoneH;
		};
		class Give_B: RscButton
		{
			idc = 1600;
			text = "Give Key"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.03 * safezoneH;
			action = "[] call HRP_fnc_giveKey; closeDialog 0";
		};
	};
};