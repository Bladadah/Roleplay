
class HRP_Phone_newsList
{
	idd = 5027;
	movingEnabled = false;

	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\phone\Phone_Frame.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Back_B: RscButton
		{
			idc = 2334;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.444828 * safezoneW + safezoneX;
			y = 0.63508 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			tooltip = "Go Back"; //--- ToDo: Localize;
		};
		class home_B: RscButton
		{
			idc = 2323;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.483294 * safezoneW + safezoneX;
			y = 0.63618 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			tooltip = "Home"; //--- ToDo: Localize;
		};
		class Lock_B: RscButton
		{
			idc = 6569;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.526091 * safezoneW + safezoneX;
			y = 0.63618 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			tooltip = "Lock"; //--- ToDo: Localize;
		};
		class RscPicture_1201: RscPicture
		{
			idc = 5634;

			text = "\RedRoleplay_Client2\icons\phone\News\newsMain.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};

		class News_6_List: RscPicture
		{
			idc = 5635;

			text = "\RedRoleplay_Client2\icons\phone\News\newsArticle.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class News_5_List: RscPicture
		{
			idc = 5636;

			text = "\RedRoleplay_Client2\icons\phone\News\newsArticle.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.370518 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class News_4_List: RscPicture
		{
			idc = 5637;

			text = "\RedRoleplay_Client2\icons\phone\News\newsArticle.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.327382 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class News_3_List: RscPicture
		{
			idc = 5638;

			text = "\RedRoleplay_Client2\icons\phone\News\newsArticle.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.284926 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class News_2_List: RscPicture
		{
			idc = 5639;

			text = "\RedRoleplay_Client2\icons\phone\News\newsArticle.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.24237 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class News_1_List: RscPicture
		{
			idc = 5640;

			text = "\RedRoleplay_Client2\icons\phone\News\newsArticle.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Next_Page: RscPicture
		{
			idc = 7324;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\nextPage.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Prev_Page: RscPicture
		{
			idc = 7325;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\previousPage.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class B1_T: RscText
		{
			idc = 9976;
			font = "Garamond";
			style = ST_MULTI + ST_NO_RECT;
			colorShadow[] = {0.62,0.62,0.62,0};

			text = "Text"; //--- ToDo: Localize;
			x = 0.428281 * safezoneW + safezoneX;
			y = 0.318185 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.04 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0375;
		};
		class B2_T: RscText
		{
			idc = 9977;
			font = "Garamond";
			style = ST_MULTI + ST_NO_RECT;
			colorShadow[] = {0.62,0.62,0.62,0};

			text = "Text"; //--- ToDo: Localize;
			x = 0.428281 * safezoneW + safezoneX;
			y = 0.35837 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.04 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0375;
		};
		class B3_T: RscText
		{
			idc = 9978;
			font = "Garamond";
			style = ST_MULTI + ST_NO_RECT;
			colorShadow[] = {0.62,0.62,0.62,0};

			text = "Text"; //--- ToDo: Localize;
			x = 0.428281 * safezoneW + safezoneX;
			y = 0.399196 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.04 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0375;
		};
		class B4_T: RscText
		{
			idc = 9979;
			font = "Garamond";
			style = ST_MULTI + ST_NO_RECT;
			colorShadow[] = {0.62,0.62,0.62,0};

			text = "Text"; //--- ToDo: Localize;
			x = 0.428281 * safezoneW + safezoneX;
			y = 0.445048 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.04 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0375;
		};
		class B5_T: RscText
		{
			idc = 9980;
			font = "Garamond";
			style = ST_MULTI + ST_NO_RECT;
			colorShadow[] = {0.62,0.62,0.62,0};

			text = "Text"; //--- ToDo: Localize;
			x = 0.428802 * safezoneW + safezoneX;
			y = 0.484419 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.04 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0375;
		};
		class B6_T: RscText
		{
			idc = 9981;
			font = "Garamond";
			style = ST_MULTI + ST_NO_RECT;
			colorShadow[] = {0.62,0.62,0.62,0};

			text = "Text"; //--- ToDo: Localize;
			x = 0.428802 * safezoneW + safezoneX;
			y = 0.537493 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.04 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0375;
		};
		class Reporter_T_1: RscText
		{
			idc = 9982;
			font = "Georgia";

			text = "test"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.340 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {-1,-1,-1,0};
			sizeEx = 0.02;
		};
		class Reporter_T_2: RscText
		{
			idc = 9983;
			font = "Georgia";

			text = "test"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.380185 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {-1,-1,-1,0};
			sizeEx = 0.0225;
		};
		class Reporter_T_3: RscText
		{
			idc = 9984;
			font = "Georgia";

			text = "test"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.42237 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {-1,-1,-1,0};
			sizeEx = 0.0225;
		};
		class Reporter_T_4: RscText
		{
			idc = 9985;
			font = "Georgia";

			text = "test"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.465555 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {-1,-1,-1,0};
			sizeEx = 0.02;
		};
		class Reporter_T_5: RscText
		{
			idc = 9986;
			font = "Georgia";

			text = "test"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.50674 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {-1,-1,-1,0};
			sizeEx = 0.02;
		};
		class Reporter_T_6: RscText
		{
			idc = 9987;
			font = "Georgia";

			text = "test"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.547925 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0249999 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {-1,-1,-1,0};
			sizeEx = 0.02;
		};
		class Button_1: RscButton
		{
			idc = 9989;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.425937 * safezoneW + safezoneX;
			y = 0.31463 * safezoneH + safezoneY;
			w = 0.13525 * safezoneW;
			h = 0.043 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			action = "closeDialog 0; [0] call HRP_fnc_readNews;";
		};
		class Button_2: RscButton
		{
			idc = 9990;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.426198 * safezoneW + safezoneX;
			y = 0.359704 * safezoneH + safezoneY;
			w = 0.13525 * safezoneW;
			h = 0.043 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			action = "closeDialog 0; [1] call HRP_fnc_readNews;";
		};
		class Button_3: RscButton
		{
			idc = 9991;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.425833 * safezoneW + safezoneX;
			y = 0.401185 * safezoneH + safezoneY;
			w = 0.13525 * safezoneW;
			h = 0.043 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			action = "closeDialog 0; [2] call HRP_fnc_readNews;";
		};
		class Button_4: RscButton
		{
			idc = 9992;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.426302 * safezoneW + safezoneX;
			y = 0.444741 * safezoneH + safezoneY;
			w = 0.13525 * safezoneW;
			h = 0.043 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			action = "closeDialog 0; [3] call HRP_fnc_readNews;";
		};
		class Button_5: RscButton
		{
			idc = 9993;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.426146 * safezoneW + safezoneX;
			y = 0.487852 * safezoneH + safezoneY;
			w = 0.13525 * safezoneW;
			h = 0.043 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			action = "closeDialog 0; [4] call HRP_fnc_readNews;";
		};
		class Button_6: RscButton
		{
			idc = 9994;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};

			x = 0.425937 * safezoneW + safezoneX;
			y = 0.530407 * safezoneH + safezoneY;
			w = 0.13525 * safezoneW;
			h = 0.043 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			action = "closeDialog 0; [5] call HRP_fnc_readNews;";
		};
		class PBack_B: RscButton
		{
			idc = 1609;
			x = 0.541148 * safezoneW + safezoneX;
			y = 0.616667 * safezoneH + safezoneY;
			w = 0.01125 * safezoneW;
			h = 0.015 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "[2] call HRP_fnc_switchNewsPage";
		};
		class PForward_B: RscButton
		{
			idc = 1610;
			x = 0.551041 * safezoneW + safezoneX;
			y = 0.616667 * safezoneH + safezoneY;
			w = 0.01125 * safezoneW;
			h = 0.015 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "[1] call HRP_fnc_switchNewsPage";
		};
		class Add_B: RscButton
		{
			idc = 6124;
			text = "+"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.420812 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.035 * safezoneH;
			sizeEx = 0.04;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; createDialog 'HRP_Phone_newsCreate'";
		};
	};
};
