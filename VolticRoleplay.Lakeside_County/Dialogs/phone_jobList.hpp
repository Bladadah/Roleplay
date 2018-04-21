
class HRP_Phone_jobList
{
	idd = 5026;
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

			text = "\RedRoleplay_Client2\icons\phone\Indeed\IndeedApp.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Job_6_List: RscPicture
		{
			idc = 5635;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\JobSelection.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Job_5_List: RscPicture
		{
			idc = 5636;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\JobSelection.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Job_4_List: RscPicture
		{
			idc = 5637;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\JobSelection.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Job_3_List: RscPicture
		{
			idc = 5638;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\JobSelection.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Job_2_List: RscPicture
		{
			idc = 5639;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\JobSelection.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Job_1_List: RscPicture
		{
			idc = 5640;

			text = "\RedRoleplay_Client2\icons\phone\Indeed\JobSelection.paa";
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
			text = "Text"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.425812 * safezoneW + safezoneX;
			y = 0.345 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.0255 * safezoneH;
			sizeEx = 0.0325;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62, 0.3};
		};
		class B2_T: RscText
		{
			idc = 9977;
			text = "Text"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.425812 * safezoneW + safezoneX;
			y = 0.389 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.0255 * safezoneH;
			sizeEx = 0.0325;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62, 0.3};
		};
		class B3_T: RscText
		{
			idc = 9978;
			text = "Text"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.425812 * safezoneW + safezoneX;
			y = 0.433 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.0255 * safezoneH;
			sizeEx = 0.0325;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62, 0.3};
		};
		class B4_T: RscText
		{
			idc = 9979;
			text = "Text"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.425812 * safezoneW + safezoneX;
			y = 0.477 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.0255 * safezoneH;
			sizeEx = 0.0325;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62, 0.3};
		};
		class B5_T: RscText
		{
			idc = 9980;
			text = "Text"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.425812 * safezoneW + safezoneX;
			y = 0.521 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.0255 * safezoneH;
			sizeEx = 0.0325;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62, 0.3};
		};
		class B6_T: RscText
		{
			idc = 9981;
			text = "Text"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.425812 * safezoneW + safezoneX;
			y = 0.565 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.0255 * safezoneH;
			sizeEx = 0.0325;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62, 0.3};
		};
		class Reporter_T_1: RscText
		{
			idc = 9982;
			text = "test"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.530625 * safezoneW + safezoneX;
			y = 0.343 * safezoneH + safezoneY;
			w = 0.0425 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.025;
			colorText[] = {-1,-1,-1,1};
		};
		class Reporter_T_2: RscText
		{
			idc = 9983;
			text = "test"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.530625 * safezoneW + safezoneX;
			y = 0.387 * safezoneH + safezoneY;
			w = 0.0425 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.025;
			colorText[] = {-1,-1,-1,1};
		};
		class Reporter_T_3: RscText
		{
			idc = 9984;
			text = "test"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.530625 * safezoneW + safezoneX;
			y = 0.431 * safezoneH + safezoneY;
			w = 0.0425 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.025;
			colorText[] = {-1,-1,-1,1};
		};
		class Reporter_T_4: RscText
		{
			idc = 9985;
			text = "test"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.530625 * safezoneW + safezoneX;
			y = 0.475 * safezoneH + safezoneY;
			w = 0.0425 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.025;
			colorText[] = {-1,-1,-1,1};
		};
		class Reporter_T_5: RscText
		{
			idc = 9986;
			text = "test"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.530625 * safezoneW + safezoneX;
			y = 0.519 * safezoneH + safezoneY;
			w = 0.0425 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.025;
			colorText[] = {-1,-1,-1,1};
		};
		class Reporter_T_6: RscText
		{
			idc = 9987;
			text = "test"; //--- ToDo: Localize;
			font = "Metropolis";
			style = ST_CENTER;
			x = 0.530625 * safezoneW + safezoneX;
			y = 0.563 * safezoneH + safezoneY;
			w = 0.0425 * safezoneW;
			h = 0.025 * safezoneH;
			sizeEx = 0.025;
			colorText[] = {-1,-1,-1,1};
		};
		class Button_1: RscButton
		{
			idc = 9989;
			x = 0.425781 * safezoneW + safezoneX;
			y = 0.342296 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.045 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [0] call HRP_fnc_jobView";
		};
		class Button_2: RscButton
		{
			idc = 9990;
			x = 0.424479 * safezoneW + safezoneX;
			y = 0.387963 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.045 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [1] call HRP_fnc_jobView";
		};
		class Button_3: RscButton
		{
			idc = 9991;
			x = 0.425 * safezoneW + safezoneX;
			y = 0.433334 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.045 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [2] call HRP_fnc_jobView";
		};
		class Button_4: RscButton
		{
			idc = 9992;
			x = 0.423959 * safezoneW + safezoneX;
			y = 0.476852 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.045 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [3] call HRP_fnc_jobView";
		};
		class Button_5: RscButton
		{
			idc = 9993;
			x = 0.423958 * safezoneW + safezoneX;
			y = 0.519445 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.045 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [4] call HRP_fnc_jobView";
		};
		class Button_6: RscButton
		{
			idc = 9994;
			x = 0.423905 * safezoneW + safezoneX;
			y = 0.563963 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.045 * safezoneH;
			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [5] call HRP_fnc_jobView";
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
			action = "[2] call HRP_fnc_switchJobPage";
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
			action = "[1] call HRP_fnc_switchJobPage";
		};
		class Back2_B: RscButton
		{
			idc = 1603;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.01525 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; [] call HRP_fnc_openPhone";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
	};
};


