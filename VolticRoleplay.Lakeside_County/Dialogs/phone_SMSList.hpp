class HRP_Phone_SMSList
{
	idd = 5022;
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
		class RscPicture_1201: RscPicture
		{
			idc = 1432;

			text = "\RedRoleplay_Client2\icons\phone\Message\messagePage.paa";
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
		class Message_1: RscPicture
		{
			idc = 2938;

			text = "\RedRoleplay_Client2\icons\phone\Message\messageBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Message_2: RscPicture
		{
			idc = 2939;

			text = "\RedRoleplay_Client2\icons\phone\Message\messageBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Message_3: RscPicture
		{
			idc = 2940;

			text = "\RedRoleplay_Client2\icons\phone\Message\messageBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Message_4: RscPicture
		{
			idc = 2941;

			text = "\RedRoleplay_Client2\icons\phone\Message\messageBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Messsage_5: RscPicture
		{
			idc = 2942;

			text = "\RedRoleplay_Client2\icons\phone\Message\messageBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
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
		class MessageB_1: RscButton
		{
			idc = 1600;
			font = "Metropolis";
			x = 0.424531 * safezoneW + safezoneX;
			y = 0.312741 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[0] call HRP_fnc_openMessage";
   			size = 0.03;
   			sizeEx = 0.03;
		};
		class Message2_B: RscButton
		{
			idc = 1601;
			font = "Metropolis";
			x = 0.423437 * safezoneW + safezoneX;
			y = 0.368519 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[1] call HRP_fnc_openMessage";
   			size = 0.03;
   			sizeEx = 0.03;
		};
		class Message3_B: RscButton
		{
			idc = 1602;
			font = "Metropolis";
			x = 0.426042 * safezoneW + safezoneX;
			y = 0.423148 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[2] call HRP_fnc_openMessage";
   			size = 0.03;
   			sizeEx = 0.03;
		};
		class Message4_B: RscButton
		{
			idc = 1603;
			font = "Metropolis";
			x = 0.42448 * safezoneW + safezoneX;
			y = 0.478704 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[3] call HRP_fnc_openMessage";
   			size = 0.03;
   			sizeEx = 0.03;
		};
		class Message5_B: RscButton
		{
			idc = 1604;
			font = "Metropolis";
			x = 0.42448 * safezoneW + safezoneX;
			y = 0.53426 * safezoneH + safezoneY;
			w = 0.14125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[4] call HRP_fnc_openMessage";
   			size = 0.03;
   			sizeEx = 0.03;
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
			action = "[2] call HRP_fnc_switchMessagePage";
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
			action = "[1] call HRP_fnc_switchMessagePage";
		};
		class New_B: RscButton
		{
			idc = 1603;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "createDialog 'HRP_phone_sendMessageEnter'";
		};
	};
};
