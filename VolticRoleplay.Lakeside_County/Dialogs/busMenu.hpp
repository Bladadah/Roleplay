class HRP_busMenu
{
	name = "HRP_busMenu";
	idd = 234247;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['HRP_busMenu',_this select 0]";
	objects[]={};

	class controlsBackground 
	{
		class nextDestination_T: RscText
		{
			idc = 1233;
			text = "Next Destination: TBC"; //--- ToDo: Localize;
			x = 0.005 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Distance_T: RscText
		{
			idc = 1232;
			text = "Distance: 20123m"; //--- ToDo: Localize;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.035 * safezoneH;
		};
	};
};