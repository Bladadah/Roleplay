class HRP_ANPR
{
	name = "HRP_ANPR";
	idd = 234242;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['HRP_ANPR',_this select 0]";
	objects[]={};

	class controlsBackground 
	{
		class ANPR_T: RscText
		{
			idc = 5123;
			text = "ANPR System"; //--- ToDo: Localize;
			x = 0.0771875 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class Speed_T: RscText
		{
			idc = 5123;
			text = "Vehicle Speed:"; //--- ToDo: Localize;
			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class Plate_T: RscText
		{
			idc = 8234;
			text = "Registered Number Plate:"; //--- ToDo: Localize;
			x = 0.116 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class SpeedR_T: RscText
		{
			idc = 6123;
			text = "0 km/h"; //--- ToDo: Localize;
			x = 0.04625 * safezoneW + safezoneX;
			y = 0.819 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.06 * safezoneH;
		};
		class PlateID_T: RscText
		{
			idc = 1523;
			text = "Unidentified"; //--- ToDo: Localize;
			x = 0.1195 * safezoneW + safezoneX;
			y = 0.819 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.06 * safezoneH;
		};
	};
};