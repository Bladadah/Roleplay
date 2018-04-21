
class HRP_Phone_createContact
{
	idd = 5032;
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

			text = "\RedRoleplay_Client2\icons\phone\Contact\createContact.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Back_B: RscButton
		{
			idc = 2334;
			action = "closeDialog 0; [1,1] call HRP_fnc_listContacts";
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
		class contactName_T: RscEdit
		{
			idc = 1400;
			style = ST_NO_RECT;
			font = "Metropolis";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.025 * safezoneH;
			size = 0.03;
			sizeEx = 0.03;
			colorText[] = {1,1,1,1};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Cell_T: RscEdit
		{
			idc = 1401;
			style = ST_NO_RECT;
			font = "Metropolis";
			x = 0.433854 * safezoneW + safezoneX;
			y = 0.405555 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.025 * safezoneH;
			size = 0.03;
			sizeEx = 0.03;
			colorText[] = {1,1,1,1};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
		class Create_B: RscButton
		{
			idc = 1603;
			x = 0.499479 * safezoneW + safezoneX;
			y = 0.585185 * safezoneH + safezoneY;
			w = 0.056 * safezoneW;
			h = 0.037 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] call HRP_fnc_addContact";
		};
		class Back2_B: RscButton
		{
			idc = 1603;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.01525 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; [1, 1] call HRP_fnc_listContacts";
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