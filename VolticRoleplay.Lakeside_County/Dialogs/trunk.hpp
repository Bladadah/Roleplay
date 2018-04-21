class HRP_Trunk
{
	idd = 5070;
	class controls 
	{
		class Trunk_Lb: RscListbox
		{
			idc = 1500;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.3 * safezoneH;
		};
		class Trunk_B: RscButton
		{
			idc = 1600;
			text = "Grab from Trunk"; //--- ToDo: Localize;
			x = 0.432448 * safezoneW + safezoneX;
			y = 0.624703 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.035 * safezoneH;
			action = "[] call HRP_fnc_grabFromTrunk";
		};
	};
};