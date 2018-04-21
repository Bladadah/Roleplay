class HRP_radialMenu
{
	idd = 5055;
	movingEnabled = false;

	class controls
	{
		class Centre: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\radial\centre.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class CenterButton: RscButton
		{
			idc = 1200;
			text = "";
			x = 0.462 * safezoneW + safezoneX;
			y = 0.425 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.13 * safezoneH;
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
		class Picture_1: RscPicture
		{
			idc = 1199;
			text = "\RedRoleplay_Client2\icons\radial\button1.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Picture_2: RscPicture
		{
			idc = 1201;
			text = "\RedRoleplay_Client2\icons\radial\button2.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Picture_3: RscPicture
		{
			idc = 1202;
			text = "\RedRoleplay_Client2\icons\radial\button3.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Picture_4: RscPicture
		{
			idc = 1203;
			text = "\RedRoleplay_Client2\icons\radial\button4.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Picture_5: RscPicture
		{
			idc = 1204;
			text = "\RedRoleplay_Client2\icons\radial\button5.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Picture_6: RscPicture
		{
			idc = 1205;
			text = "\RedRoleplay_Client2\icons\radial\button6.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Picture_7: RscPicture
		{
			idc = 1206;
			text = "\RedRoleplay_Client2\icons\radial\button7.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Picture_8: RscPicture
		{
			idc = 1207;
			text = "\RedRoleplay_Client2\icons\radial\button8.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.4 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class Button1_B: RscButton
		{
			idc = 1600;
			font = "Metropolis";
			x = 0.404 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.12 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[1] call HRP_fnc_interactionAction";
		};
		class Button2_B: RscButton
		{
			idc = 1601;
			font = "Metropolis";
			x = 0.458 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.063875 * safezoneW;
			h = 0.12 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[2] call HRP_fnc_interactionAction";
		};
		class Button3_B: RscButton
		{
			idc = 69028;
			font = "Metropolis";
			x = 0.528646 * safezoneW + safezoneX;
			y = 0.324074 * safezoneH + safezoneY;
			w = 0.064875 * safezoneW;
			h = 0.12 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[3] call HRP_fnc_interactionAction";
		};
		class Button4_B: RscButton
		{
			idc = 1603;
			font = "Metropolis";
			x = 0.548958 * safezoneW + safezoneX;
			y = 0.416667 * safezoneH + safezoneY;
			w = 0.064875 * safezoneW;
			h = 0.142 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[4] call HRP_fnc_interactionAction";
		};
		class Button5_B: RscButton
		{
			idc = 1604;
			font = "Metropolis";
			x = 0.522239 * safezoneW + safezoneX;
			y = 0.53626 * safezoneH + safezoneY;
			w = 0.077 * safezoneW;
			h = 0.142 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[5] call HRP_fnc_interactionAction";
		};
		class Button6_B: RscButton
		{
			idc = 1605;
			font = "Metropolis";
			x = 0.450521 * safezoneW + safezoneX;
			y = 0.575926 * safezoneH + safezoneY;
			w = 0.077 * safezoneW;
			h = 0.142 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[6] call HRP_fnc_interactionAction";
		};
		class Button7_B: RscButton
		{
			idc = 1606;
			font = "Metropolis";
			x = 0.397396 * safezoneW + safezoneX;
			y = 0.519444 * safezoneH + safezoneY;
			w = 0.077 * safezoneW;
			h = 0.142 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[7] call HRP_fnc_interactionAction";
		};
		class Button8_B: RscButton
		{
			idc = 1607;
			font = "Metropolis";
			x = 0.375 * safezoneW + safezoneX;
			y = 0.408333 * safezoneH + safezoneY;
			w = 0.077 * safezoneW;
			h = 0.142 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			sizeEx = 0.0285;
   			action = "[8] call HRP_fnc_interactionAction";
		};
		class Text_1: RscText
		{
			idc = 1001;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.409 * safezoneW + safezoneX;
			y = 0.361111 * safezoneH + safezoneY;
			w = 0.06125 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.0285;
		};
		class Text_2: RscText
		{
			idc = 1002;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.4675 * safezoneW + safezoneX;
			y = 0.321297 * safezoneH + safezoneY;
			w = 0.06125 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.0285;
		};
		class Text_3: RscText
		{
			idc = 1003;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.522396 * safezoneW + safezoneX;
			y = 0.361111 * safezoneH + safezoneY;
			w = 0.07125 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.0285;
		};
		class Text_4: RscText
		{
			idc = 1004;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.556771 * safezoneW + safezoneX;
			y = 0.458333 * safezoneH + safezoneY;
			w = 0.05125 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.0285;
		};
		class Text_5: RscText
		{
			idc = 1005;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.523958 * safezoneW + safezoneX;
			y = 0.559259 * safezoneH + safezoneY;
			w = 0.06525 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.0285;
		};
		class Text_6: RscText
		{
			idc = 1006;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.466406 * safezoneW + safezoneX;
			y = 0.60463 * safezoneH + safezoneY;
			w = 0.065 * safezoneW;
			h = 0.05 * safezoneH;
			sizeEx = 0.0285;
		};
		class Text_7: RscText
		{
			idc = 1007;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.559259 * safezoneH + safezoneY;
			w = 0.06425 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.0285;
		};
		class Text_8: RscText
		{
			idc = 1008;
			style = ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = ""; //--- ToDo: Localize;
			x = 0.39 * safezoneW + safezoneX;
			y = 0.458333 * safezoneH + safezoneY;
			w = 0.05125 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.0285;
		};
	};
};