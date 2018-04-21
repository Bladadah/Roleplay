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
				text = "icons\background.paa";
				x = 0.886713 * safezoneW + safezoneX;
				y = 0.5704 * safezoneH + safezoneY;
				w = 0.113437 * safezoneW;
				h = 0.33 * safezoneH;
			};

			
			class hud_bank_actual 
			{
				type=0;
				idc = 23522;
				style=0;
				x = 0.917187 * safezoneW + safezoneX;
				y = 0.784259 * safezoneH + safezoneY;
				w = 0.108281 * safezoneW;
				h = 0.022 * safezoneH;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};
			
			class hud_weapon_divider: RscText
			{
				idc = 1003;
				text = "/"; //--- ToDo: Localize;
				x = 0.9125 * safezoneW + safezoneX;
				y = 0.863926 * safezoneH + safezoneY;
				w = 0.0154688 * safezoneW;
				h = 0.033 * safezoneH;
			};

			class hud_weapon_hyphen: RscText
			{
				idc = 1007;
				text = "-"; //--- ToDo: Localize;
				x = 0.936198 * safezoneW + safezoneX;
				y = 0.852408 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.055 * safezoneH;
			};

			class id_name
			{
				type=CT_STRUCTURED_TEXT;
				idc=44446;

				style=ST_LEFT;
				x = 0.034 * safezoneW + safezoneX;
				y = 0.433 * safezoneH + safezoneY;
				w = 0.75;
				h = 0.5;
				sizeEx=0.045;
				size=0.045;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};
			class id_faction
			{
				type=CT_STRUCTURED_TEXT;
				idc=44447;
				style=ST_LEFT;
				x = 0.034 * safezoneW + safezoneX;
				y = 0.483 * safezoneH + safezoneY;
				w = 0.75;
				h = 0.5;
				sizeEx=0.045;
				size=0.045;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};
			class id_uid
			{
				type=CT_STRUCTURED_TEXT;
				idc=44448;
				style=ST_LEFT;
				x = 0.034 * safezoneW + safezoneX;
				y = 0.533 * safezoneH + safezoneY;
				w = 0.75;
				h = 0.5;
				sizeEx=0.045;
				size=0.045;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};
			class id_city
			{
				type=CT_STRUCTURED_TEXT;
				idc=44449;
				style=ST_LEFT;
				x = 0.034 * safezoneW + safezoneX;
				y = 0.583 * safezoneH + safezoneY;
				w = 0.75;
				h = 0.5;
				sizeEx=0.045;
				size=0.045;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 0.7 , 1 , 1 };
				shadow=true;
				text="";
			};
			class id_houses
			{
				type=CT_STRUCTURED_TEXT;
				idc=44450;
				style=ST_LEFT;
				x = 0.034 * safezoneW + safezoneX;
				y = 0.633 * safezoneH + safezoneY;
				w = 0.75;
				h = 0.5;
				sizeEx=0.045;
				size=0.045;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 0.7 , 1 , 1 };
				shadow=true;
				text="";
			};
			class id_licenses
			{
				type=CT_STRUCTURED_TEXT;
				idc=44451;
				style=ST_LEFT;
				x = 0.034 * safezoneW + safezoneX;
				y = 0.683 * safezoneH + safezoneY;
				w = 0.75;
				h = 0.5;
				sizeEx=0.045;
				size=0.045;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 0.7 , 1 , 1 };
				shadow=true;
				text="";
			};


			class cg_health
			{
				type=CT_STRUCTURED_TEXT;
				fadein=1;
			  	fadeout=1;
				idc=444440;
				style=ST_LEFT;
				x = 0.919822 * safezoneW + safezoneX;
				y = 0.64366 * safezoneH + safezoneY;
				w = 0.0748438 * safezoneW;
				h = 0.011 * safezoneH;
				sizeEx=0.105;
				size=0.105;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = {1,1,1,1};
				shadow=false;
				text="";
			};

			class cg_food
			{
				type=CT_STRUCTURED_TEXT;
				idc=444441;
				fadein=1;
			  	fadeout=1;
				style=ST_LEFT;
				x = 0.919822 * safezoneW + safezoneX;
				y = 0.70658 * safezoneH + safezoneY;
				w = 0.0748438 * safezoneW;
				h = 0.011 * safezoneH;
				sizeEx=0.105;
				size=0.105;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};

			class cg_drink
			{
				type=CT_STRUCTURED_TEXT;
				idc=444442;
				fadein=1;
			  	fadeout=1;
				style=ST_LEFT;
				x = 0.919822 * safezoneW + safezoneX;
				y = 0.676 * safezoneH + safezoneY;
				w = 0.0748438 * safezoneW;
				h = 0.011 * safezoneH;
				sizeEx=0.105;
				size=0.105;
				font="PuristaLight";
				colorBackground[]={0,0,0,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=false;
				text="";
			};


			class fpstext {
				type=0;
				idc = 23515;
				style=0;
				x = 0.9 * safezoneW + safezoneX;
				y = 0.011 * safezoneH + safezoneY;
				w = 0.2;
				h = 0.04;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class statustext 
			{
				type=0;
				idc = 23520;
				style=0;
				x = 0.9 * safezoneW + safezoneX;
                y = 0.022 * safezoneH + safezoneY;
                w = 0.2;
                h = 0.04;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class hud_name_actual
			{
				type=0;
				idc=23611;
				style=ST_CENTER;
				x = 0.893696 * safezoneW + safezoneX;
				y = 0.578259 * safezoneH + safezoneY;
				w = 0.108281 * safezoneW;
				h = 0.022 * safezoneH;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};


			class ammotext
			{
				type=0;
				idc=23525;
				style=0;
				x = 0.922812 * safezoneW + safezoneX;
				y = 0.869482 * safezoneH + safezoneY;
				w = 0.0103125 * safezoneW;
				h = 0.022 * safezoneH;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class hud_money_actual
			{
				type=0;
				idc=23523;
				style=0;
				x = 0.918437 * safezoneW + safezoneX;
				y = 0.75926 * safezoneH + safezoneY;
				w = 0.0773437 * safezoneW;
				h = 0.022 * safezoneH;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class bullettext
			{
				type=0;
				idc=23530;
				style=0;
				x = 0.897031 * safezoneW + safezoneX;
				y = 0.863926 * safezoneH + safezoneY;
				w = 0.0154688 * safezoneW;
				h = 0.033 * safezoneH;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			class weaponname
			{
				type=0;
				idc=23678;
				style=ST_CENTER;
				x = 0.899115 * safezoneW + safezoneX;
				y = 0.844333 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};

			//Display Total Money
			class selecttext
			{
				type=0;
				idc=23535;
				style=0;x = 0.945886 * safezoneW + safezoneX;
				y = 0.853852 * safezoneH + safezoneY;
				w = 0.0515625 * safezoneW;
				h = 0.055 * safezoneH;
				sizeEx=0.03;
				size=1;
				font="PuristaLight";
				colorBackground[]={0.1,0.1,0.1,0};
				colorText[] = { 1 , 1 , 1 , 1 };
				shadow=true;
				text="";
			};
		};
 	};
