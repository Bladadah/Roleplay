class HRP_truckMenu
{
	name = "HRP_truckMenu";
	idd = 234248;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['HRP_truckMenu',_this select 0]";
	objects[]={};

	class controlsBackground 
	{
		class nextDestination_T: RscText
		{
			idc = 1234;
			text = "Next Destination: TBC"; //--- ToDo: Localize;
			x = 0.005 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Distance_T: RscText
		{
			idc = 1235;
			text = "Distance: 20123m"; //--- ToDo: Localize;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.035 * safezoneH;
		};
	};
};