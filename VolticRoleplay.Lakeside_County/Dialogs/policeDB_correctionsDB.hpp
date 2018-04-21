class HRP_PoliceDB_correctionsDB
{
	idd = 5233;
	class controls 
	{
		class Background_P: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\correctionsDatabase.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class currentInmates_T: RscText
		{
			idc = 1000;
			font = "Metropolis";
			x = 0.297916 * safezoneW + safezoneX;
			y = 0.399148 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class remainingCells_T: RscText
		{
			idc = 1001;
			font = "Metropolis";
			x = 0.297396 * safezoneW + safezoneX;
			y = 0.462962 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class inMate_1_P: RscPicture
		{
			idc = 1201;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class inMate_2_P: RscPicture
		{
			idc = 1202;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class inmate_3_P: RscPicture
		{
			idc = 1203;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class inMate_4_P: RscPicture
		{
			idc = 1204;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class inMate_6_P: RscPicture
		{
			idc = 1205;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class inMate_7_P: RscPicture
		{
			idc = 1206;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class inMate_8_P: RscPicture
		{
			idc = 1207;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class inMate_9_P: RscPicture
		{
			idc = 1208;
			text = "\RedRoleplay_Client2\icons\inMates.paa";
			x = 0.102969 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.8 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class nextPage_B: RscButton
		{
			idc = 1600;
			text = ">"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.701353 * safezoneW + safezoneX;
			y = 0.716519 * safezoneH + safezoneY;
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
   			action = "[1] call HRP_fnc_switchInmatePage";
		};
		class previousPage_B: RscButton
		{
			idc = 1601;
			text = "<"; //--- ToDo: Localize;.
			font = "Metropolis";
			x = 0.679688 * safezoneW + safezoneX;
			y = 0.716667 * safezoneH + safezoneY;
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
   			action = "[2] call HRP_fnc_switchInmatePage";
		};
		class number_1_T: RscText
		{
			idc = 1400;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class number_2_T: RscText
		{
			idc = 1401;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.414 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class number_3_T: RscText
		{
			idc = 1402;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class number_4_T: RscText
		{
			idc = 1403;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.502 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class number_5_T: RscText
		{
			idc = 1404;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.546 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class number_6_T: RscText
		{
			idc = 1405;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.59 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class number_7_T: RscText
		{
			idc = 1406;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.634 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class number_8_T: RscText
		{
			idc = 1407;
			font = "Metropolis";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.678 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_1_T: RscText
		{
			idc = 1408;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_2_T: RscText
		{
			idc = 1409;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.414 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_3_T: RscText
		{
			idc = 1410;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_4_T: RscText
		{
			idc = 1411;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.502 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_5_T: RscText
		{
			idc = 1412;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.546 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_6_T: RscText
		{
			idc = 1413;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.59 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_7_T: RscText
		{
			idc = 1414;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.634 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class name_8_T: RscText
		{
			idc = 1415;
			font = "Metropolis";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.678 * safezoneH + safezoneY;
			w = 0.12 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_1_T: RscText
		{
			idc = 1416;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.37 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_2_T: RscText
		{
			idc = 1417;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.414 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_3_T: RscText
		{
			idc = 1418;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_4_T: RscText
		{
			idc = 1419;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.502 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_5_T: RscText
		{
			idc = 1420;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.546 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_6_T: RscText
		{
			idc = 1421;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.59 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_7_T: RscText
		{
			idc = 1422;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.634 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class cell_8_T: RscText
		{
			idc = 1423;
			font = "Metropolis";
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.678 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.035 * safezoneH;
			colorShadow[] = {0,0,0,0};
		};
		class info_1_B: RscButton
		{
			idc = 1602;
			x = 0.698021 * safezoneW + safezoneX;
			y = 0.368926 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [0] call HRP_fnc_viewPrisonerInfo";
		};
		class info_2_B: RscButton
		{
			idc = 1603;
			x = 0.697396 * safezoneW + safezoneX;
			y = 0.412037 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [1] call HRP_fnc_viewPrisonerInfo";
		};
		class info_3_B: RscButton
		{
			idc = 1604;
			x = 0.697916 * safezoneW + safezoneX;
			y = 0.454629 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [2] call HRP_fnc_viewPrisonerInfo";
		};
		class info_4_B: RscButton
		{
			idc = 1605;
			x = 0.697916 * safezoneW + safezoneX;
			y = 0.499074 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [3] call HRP_fnc_viewPrisonerInfo";
		};
		class info_5_B: RscButton
		{
			idc = 1606;
			x = 0.698438 * safezoneW + safezoneX;
			y = 0.543519 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [4] call HRP_fnc_viewPrisonerInfo";
		};
		class info_6_B: RscButton
		{
			idc = 1607;
			x = 0.698437 * safezoneW + safezoneX;
			y = 0.587037 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [5] call HRP_fnc_viewPrisonerInfo";
		};
		class info_7_B: RscButton
		{
			idc = 1608;
			x = 0.697396 * safezoneW + safezoneX;
			y = 0.632407 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [6] call HRP_fnc_viewPrisonerInfo";
		};
		class info_8_B: RscButton
		{
			idc = 1609;
			x = 0.696875 * safezoneW + safezoneX;
			y = 0.674074 * safezoneH + safezoneY;
			w = 0.026 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [7] call HRP_fnc_viewPrisonerInfo";
		};
		class Back_B: RscButton
		{
			idc = 1610;
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [] call HRP_fnc_openPoliceDatabase";
		};
	};
};
