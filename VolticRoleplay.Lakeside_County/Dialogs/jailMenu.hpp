class HRP_jailMenu
{
	name = "HRP_jailMenu";
	idd = 234243;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['HRP_jailMenu',_this select 0]";
	objects[]={};

	class controlsBackground 
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "RedRoleplay_Client2\icons\inJail.paa";
			x = -0.0259375 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.3 * safezoneH;
		};
		class Time_T: RscText
		{
			idc = 1023;
			font = "Metropolis";
			text = "Time Remaining:"; //--- ToDo: Localize;
			x = 0.025625 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
		};
		class Crimes_T: RscText
		{
			idc = 1024;
			font = "Metropolis";
			style = ST_MULTI + ST_NO_RECT;
			text = "Crimes Committed:"; //--- ToDo: Localize;
			x = 0.0101562 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.135 * safezoneW;
			h = 0.06 * safezoneH;
		};
	};
};