class HRP_Progress
{
	name = "HRP_Progress";
	idd = 23515;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['HRP_Progress',_this select 0]";
	objects[]={};

	class controlsBackground 
	{
		class Progress_B: RscProgress
		{
			idc = 1400;
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.152 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.035 * safezoneH;

		};
		class Text_Progress: RscText
		{
			idc = 1000;
			font = "Metropolis";
			text = "Text"; //--- ToDo: Localize;
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.152 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.035 * safezoneH;
			sizeEx = 0.035;
		};
		class Frame: RscFrame
		{
			idc = 1023;
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.152 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.035 * safezoneH;
		};
	};
};