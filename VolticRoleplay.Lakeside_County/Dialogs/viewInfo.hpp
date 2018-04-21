class HRP_viewInfo
{
	idd = 5050;
	movingEnabled = false;

	class controls
	{	
		class Main: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\Information\main.paa";
			x = 0.108125 * safezoneW + safezoneX;
			y = -0.182 * safezoneH + safezoneY;
			w = 0.75 * safezoneW;
			h = 1.4 * safezoneH;
		};
		class EMS_Badge: RscPicture
		{
			idc = 1202;
			text = "\RedRoleplay_Client2\icons\Information\EMSBadge.paa";
			x = 0.108125 * safezoneW + safezoneX;
			y = -0.182 * safezoneH + safezoneY;
			w = 0.75 * safezoneW;
			h = 1.4 * safezoneH;
		};
		class PD_Badge: RscPicture
		{
			idc = 1204;
			text = "\RedRoleplay_Client2\icons\Information\PDBadge.paa";
			x = 0.118437 * safezoneW + safezoneX;
			y = -0.182 * safezoneH + safezoneY;
			w = 0.747656 * safezoneW;
			h = 1.397 * safezoneH;
		};
		class RscPicture_1205: RscPicture
		{
			idc = 1205;
			text = "\RedRoleplay_Client2\icons\Information\Primeministerwhitelisting.paa";
			x = 0.0978125 * safezoneW + safezoneX;
			y = -0.171 * safezoneH + safezoneY;
			w = 0.747656 * safezoneW;
			h = 1.397 * safezoneH;
		};
		class RscPicture_1206: RscPicture
		{
			idc = 1206;
			text = "\RedRoleplay_Client2\icons\Information\driverlicense.paa";
			x = 0.108125 * safezoneW + safezoneX;
			y = -0.204 * safezoneH + safezoneY;
			w = 0.747656 * safezoneW;
			h = 1.397 * safezoneH;
		};
		class Wallet_T: RscText
		{
			idc = 1000;
			font = "Metropolis";
			text = "500000"; //--- ToDo: Localize;
			x = 0.251302 * safezoneW + safezoneX;
			y = 0.368814 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.03;
		};
		class Trainings_Lb: RscListbox
		{
			idc = 1501;
			x = 0.385938 * safezoneW + safezoneX;
			y = 0.567593 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.03;
		};
		class First_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			text = "Ben"; //--- ToDo: Localize;
			x = 0.630365 * safezoneW + safezoneX;
			y = 0.370667 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class Surname_T: RscText
		{
			idc = 1002;
			font = "Metropolis";
			text = "Harris"; //--- ToDo: Localize;
			x = 0.630365 * safezoneW + safezoneX;
			y = 0.389296 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class Country_T: RscText
		{
			idc = 1003;
			font = "Metropolis";
			text = "New Zealand"; //--- ToDo: Localize;
			x = 0.630365 * safezoneW + safezoneX;
			y = 0.408333 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class DOB_T: RscText
		{
			idc = 1004;
			font = "Metropolis";
			text = "26/04/1999"; //--- ToDo: Localize;
			x = 0.630365 * safezoneW + safezoneX;
			y = 0.428704 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class Middle_T: RscText
		{
			idc = 1005;
			font = "Metropolis";
			text = "I."; //--- ToDo: Localize;
			x = 0.691146 * safezoneW + safezoneX;
			y = 0.370371 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class Sex_T: RscText
		{
			idc = 1006;
			font = "Metropolis";
			text = "M"; //--- ToDo: Localize;
			x = 0.691146 * safezoneW + safezoneX;
			y = 0.40963 * safezoneH + safezoneY;
			w = 0.04325 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class Licenses_Lb: RscListBox
		{
			idc = 1500;

			x = 0.2525 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.07 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.03;
		};
		class firstName2_T: RscText
		{
			idc = 1012;
			font = "Metropolis";
			text = "Ben"; //--- ToDo: Localize;
			x = 0.633229 * safezoneW + safezoneX;
			y = 0.5855 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class sex2_T: RscText
		{
			idc = 1007;
			font = "Metropolis";
			text = "M"; //--- ToDo: Localize;
			x = 0.694792 * safezoneW + safezoneX;
			y = 0.626852 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class POB_T: RscText
		{
			idc = 1008;
			font = "Metropolis";
			text = "New Zealand"; //--- ToDo: Localize;
			x = 0.633229 * safezoneW + safezoneX;
			y = 0.625926 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class DOB2_T: RscText
		{
			idc = 1009;
			font = "Metropolis";
			text = "26/04/1999"; //--- ToDo: Localize;
			x = 0.633229 * safezoneW + safezoneX;
			y = 0.649074 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class sur2_T: RscText
		{
			idc = 1010;
			font = "Metropolis";
			text = "Harris"; //--- ToDo: Localize;
			x = 0.633229 * safezoneW + safezoneX;
			y = 0.60463 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class MNAME_T: RscText
		{
			idc = 1011;
			font = "Metropolis";
			text = "I."; //--- ToDo: Localize;
			x = 0.694792 * safezoneW + safezoneX;
			y = 0.586112 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.015 * safezoneH;
			sizeEx = 0.02;
			colorText[] = {-1,-1,-1,1};
		};
		class Close_B: RscButton
		{
			idc = 1600;
			x = 0.762969 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0";
		};
	};
};
