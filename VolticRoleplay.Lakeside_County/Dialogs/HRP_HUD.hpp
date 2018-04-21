	#define IDC_LIFE_BAR_FOOD 2200
	#define IDC_LIFE_BAR_WATER 2201
	#define IDC_LIFE_BAR_HEALTH 2202

	class RSC_ID_BG
	{
		idd = -1;
		fadein=1;
	  	fadeout=1;
		duration = 8;
		class controls
		{
			class CTRL_ID_BG
			{
				idc = 20;
				type = 0;
				style = 512;
				x = 0.024 * safezoneW + safezoneX;
				y = 0.418 * safezoneH + safezoneY;
				w = 0.4 * safezoneW;
				h = 0.310 * safezoneH;
				font="PuristaLight";
				sizeEx = 0.1;
				ColorBackground[] = {1, 1, 1, 0.4};
				colorText[] = {1,1,1,0};
				text = "";
			};
		};
	};

	class playerHUD
   	{
		idd=80085;
		movingEnable=0;
	  	fadein=1;
		duration = 99999999999999999999999999999999999999999999;
	  	fadeout=1;
		name="playerHUD";
		onLoad="uiNamespace setVariable ['playerHUD',_this select 0]";
		objects[]={};


		class controls
		{
			class hud_image: RscPicture
			{
				idc = 1200;

				text = "\RedRoleplay_Client2\icons\background.paa";
				x = 0.886719 * safezoneW + safezoneX;
				y = 0.555 * safezoneH + safezoneY;
				w = 0.113437 * safezoneW;
				h = 0.375 * safezoneH;
			};
			class HRP_Health: RscPicture
			{
				idc = 1501;

				text = "\RedRoleplay_Client2\icons\red_bar_100.paa";
				x = 0.886719 * safezoneW + safezoneX;
				y = 0.555 * safezoneH + safezoneY;
				w = 0.113437 * safezoneW;
				h = 0.375 * safezoneH;
			};
			class HRP_Food: RscPicture
			{
				idc = 1502;

				text = "\RedRoleplay_Client2\icons\green_bar_100.paa";
				x = 0.886719 * safezoneW + safezoneX;
				y = 0.555 * safezoneH + safezoneY;
				w = 0.113437 * safezoneW;
				h = 0.375 * safezoneH;
			};
			class HRP_Drink: RscPicture
			{
				idc = 1503;

				text = "\RedRoleplay_Client2\icons\blue_bar_100.paa";
				x = 0.886719 * safezoneW + safezoneX;
				y = 0.555 * safezoneH + safezoneY;
				w = 0.113437 * safezoneW;
				h = 0.375 * safezoneH;
			};
			class fpstext: RscText
			{
				type = 0;
				idc = 23515;
				style = 0;
				size = 1;
				font = "PuristaLight";
				shadow = "true";

				x = 0.900022 * safezoneW + safezoneX;
				y = 0.01094 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.1,0.1,0.1,0};
			};
			class statustext: RscText
			{
				type = 0;
				idc = 23520;
				style = 0;
				size = 1;
				font = "PuristaLight";
				shadow = "true";

				x = 0.900022 * safezoneW + safezoneX;
				y = 0.02194 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.1,0.1,0.1,0};
			};
			class HRP_Name: RscText
			{
				idc = 23611;
				style = ST_CENTER;
				font = "Metropolis";
				shadow = "true";

				x = 0.892396 * safezoneW + safezoneX;
				y = 0.56 * safezoneH + safezoneY;
				w = 0.108281 * safezoneW;
				h = 0.025 * safezoneH;
				colorBackground[] = {0.1,0.1,0.1,0};
				sizeEx = 0.033;
			};
			class Occupation_T: RscText
			{
				idc = 1002;
				style = ST_MULTI + ST_NO_RECT;
				font = "Metropolis";

				x = 0.918677 * safezoneW + safezoneX;
				y = 0.833 * safezoneH + safezoneY;
				w = 0.078 * safezoneW;
				h = 0.04 * safezoneH;
				sizeEx = 0.033;
			};
			class Money_T: RscText
			{
				idc = 1001;
				font = "Metropolis";

				x = 0.920131 * safezoneW + safezoneX;
				y = 0.7595 * safezoneH + safezoneY;
				w = 0.07125 * safezoneW;
				h = 0.035 * safezoneH;
				sizeEx = 0.033;
			};
		};
 	};

	class HarrisNotification {
	name = "HarrisNotification";
	idd = 4500;
	movingEnable = true;
	enableSimulation = true;
	duration = 5;
    onLoad = "uiNamespace setVariable ['HarrisNotification',_this select 0]";
	class controlsBackground {


		class STRIP: HRP_RscText {
			idc = 38502;
			x = 0.86418509 * safezoneW + safezoneX;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.003 * safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {0.043,0.486,0.769,1};
		};
		class TEXT_ZONE: HRP_RscStructuredText {
			idc = 38501;
			text = "";
			x = 0.86831 * safezoneW + safezoneX;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.13* safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};
	};
};

class HarrisNotification2 {
	name = "HarrisNotification2";
	idd = 4501;
	movingEnable = true;
	enableSimulation = true;
	duration = 5;
    onLoad = "uiNamespace setVariable ['HarrisNotification2',_this select 0]";
	class controlsBackground {


		class STRIP: HRP_RscText {
			idc = 38504;
			x = 0.86418509 * safezoneW + safezoneX;
			y = 0.255 * safezoneH + safezoneY;
			w = 0.003 * safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {0.043,0.486,0.769,1};
		};
		class TEXT_ZONE: HRP_RscStructuredText {
			idc = 38503;
			text = "";
			x = 0.86831 * safezoneW + safezoneX;
			y = 0.255 * safezoneH + safezoneY;
			w = 0.13* safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};

	};
};

class HarrisNotification3 {
	name = "HarrisNotification3";
	idd = 4502;
	movingEnable = true;
	enableSimulation = true;
	duration = 5;
    onLoad = "uiNamespace setVariable ['HarrisNotification3',_this select 0]";
	class controlsBackground {


		class STRIP: HRP_RscText {
			idc = 38506;
			x = 0.86418509 * safezoneW + safezoneX;
			y = 0.31 * safezoneH + safezoneY;
			w = 0.003 * safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {0.043,0.486,0.769,1};
		};
		class TEXT_ZONE: HRP_RscStructuredText {
			idc = 38505;
			text = "";
			x = 0.86831 * safezoneW + safezoneX;
			y = 0.31 * safezoneH + safezoneY;
			w = 0.13* safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};

	};
};

class HarrisNotification4 {
	name = "HarrisNotification4";
	idd = 4503;
	movingEnable = true;
	enableSimulation = true;
	duration = 5;
    onLoad = "uiNamespace setVariable ['HarrisNotification4',_this select 0]";
	class controlsBackground {


		class STRIP: HRP_RscText {
			idc = 38508;
			x = 0.86418509 * safezoneW + safezoneX;
			y = 0.365 * safezoneH + safezoneY;
			w = 0.003 * safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {0.043,0.486,0.769,1};
		};
		class TEXT_ZONE: HRP_RscStructuredText {
			idc = 38507;
			text = "";
			x = 0.86831 * safezoneW + safezoneX;
			y = 0.365 * safezoneH + safezoneY;
			w = 0.13* safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};

	};
};

class HarrisNotification5 {
	name = "HarrisNotification5";
	idd = 4504;
	movingEnable = true;
	enableSimulation = true;
	duration = 5;
    onLoad = "uiNamespace setVariable ['HarrisNotification5',_this select 0]";
	class controlsBackground {


		class STRIP: HRP_RscText {
			idc = 38510;
			x = 0.86418509 * safezoneW + safezoneX;
			y = 0.42 * safezoneH + safezoneY;
			w = 0.003 * safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {0.043,0.486,0.769,1};
		};
		class TEXT_ZONE: HRP_RscStructuredText {
			idc = 38509;
			text = "";
			x = 0.86831 * safezoneW + safezoneX;
			y = 0.42 * safezoneH + safezoneY;
			w = 0.13* safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};

	};
};

class SmallNotification {
	name = "SmallNotification";
	idd = 4600;
	movingEnable = true;
	enableSimulation = true;
	duration = 5;
    onLoad = "uiNamespace setVariable ['SmallNotification',_this select 0]";
	class controlsBackground {


		class STRIP: HRP_RscText {
			idc = 38502;
			x = 0.007 * safezoneW + safezoneX;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.003 * safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {0.043,0.486,0.769,1};
		};
		class TEXT_ZONE: HRP_RscStructuredText {
			idc = 38501;
			text = "";
			x = 0.011 * safezoneW + safezoneX;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.13* safezoneW;
			h = 0 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};
	};
};


class UI_Loading
{
	fadein = 0;
	fadeout = 0;
	duration = 15000;
	idd = 1010;
	movingEnable = false;
	enableSimulation = false;
	onLoad = "uiNamespace setVariable ['UI_Loading', _this select 0]";
	onUnload = "uiNamespace setVariable ['UI_Loading', displayNull]";	

	class controls {
		class RscPicture_1200: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\loading\HRPloading_0.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.133437 * safezoneW;
			h = 0.2335 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class RscPicture_1201: RscPicture
		{
			idc = 1201;

			text = "\RedRoleplay_Client2\loading\Border.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.133437 * safezoneW;
			h = 0.2335 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
};