class HRP_Phone_contactList
{
	idd = 5029;
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

			text = "\RedRoleplay_Client2\icons\phone\Contact\Contactpage.paa";
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
		class Contact_1: RscPicture
		{
			idc = 2938;

			text = "\RedRoleplay_Client2\icons\phone\Contact\yourNumber.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Contact_2: RscPicture
		{
			idc = 2939;

			text = "\RedRoleplay_Client2\icons\phone\Contact\ContactBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Contact_3: RscPicture
		{
			idc = 2940;

			text = "\RedRoleplay_Client2\icons\phone\Contact\ContactBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Contact_4: RscPicture
		{
			idc = 2941;

			text = "\RedRoleplay_Client2\icons\phone\Contact\ContactBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};

		class Contact_5: RscPicture
		{
			idc = 2942;

			text = "\RedRoleplay_Client2\icons\phone\Contact\ContactBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Contact_6: RscPicture
		{
			idc = 2943;

			text = "\RedRoleplay_Client2\icons\phone\Contact\ContactBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.155375 * safezoneW;
			h = 0.520001 * safezoneH;
		};
		class Contact_7: RscPicture
		{
			idc = 2944;

			text = "\RedRoleplay_Client2\icons\phone\Contact\ContactBox.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
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
		class DeleteB_2: RscButton
		{
			idc = 1624;
			x = 0.547969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.015125 * safezoneW;
			h = 0.045 * safezoneH;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[0] call HRP_fnc_deleteContact";
		};
		class DeleteB_3: RscButton
		{
			idc = 1625;
			x = 0.547917 * safezoneW + safezoneX;
			y = 0.402778 * safezoneH + safezoneY;
			w = 0.015125 * safezoneW;
			h = 0.045 * safezoneH;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[1] call HRP_fnc_deleteContact";
		};
		class DeleteB_4: RscButton
		{
			idc = 1626;
			text = "";
			x = 0.547916 * safezoneW + safezoneX;
			y = 0.448148 * safezoneH + safezoneY;
			w = 0.015125 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[2] call HRP_fnc_deleteContact";
		};
		class DeleteB_5: RscButton
		{
			idc = 1627;
			text = "";
			x = 0.547917 * safezoneW + safezoneX;
			y = 0.493519 * safezoneH + safezoneY;
			w = 0.015125 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[3] call HRP_fnc_deleteContact";
		};
		class DeleteB_6: RscButton
		{
			idc = 1628;
			text = "";
			x = 0.547917 * safezoneW + safezoneX;
			y = 0.538889 * safezoneH + safezoneY;
			w = 0.015125 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[4] call HRP_fnc_deleteContact";
		};
		class DeleteB_7: RscButton
		{
			idc = 1629;
			text = "";
			x = 0.547396 * safezoneW + safezoneX;
			y = 0.58426 * safezoneH + safezoneY;
			w = 0.015125 * safezoneW;
			h = 0.045 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[5] call HRP_fnc_deleteContact";
		};
		class yourNumber_T: RscText
		{
			idc = 7777;
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			text = "ID"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.4485 * safezoneW + safezoneX;
			y = 0.322 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.03;
			sizeEx = 0.03;
		};
		class Button1_T: RscText
		{
			idc = 7778;
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			text = "ID"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.366 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.025;
			sizeEx = 0.025;
			colorText[] = {0.62,0.62,0.62,1};
		};
		class Button2_T: RscText
		{
			idc = 7779;
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			text = "ID"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.41 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.025;
			sizeEx = 0.025;
			colorText[] = {0.62,0.62,0.62,1};
		};
		class Button3_T: RscText
		{
			idc = 7780;
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			text = "ID"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.454 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.025;
			sizeEx = 0.025;
			colorText[] = {0.62,0.62,0.62,1};
		};

		class Button4_T: RscText
		{
			idc = 7781;
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			text = "ID"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.433333 * safezoneW + safezoneX;
			y = 0.498 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.025;
			sizeEx = 0.025;
			colorText[] = {0.62,0.62,0.62,1};
		};
		class Button5_T: RscText
		{
			idc = 7782;
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			text = "ID"; //--- ToDo: Localize;
			font = "Metropolis";
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.542 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.025;
			sizeEx = 0.025;
			colorText[] = {0.62,0.62,0.62,1};
		};
		class Button6_T: RscText
		{
			idc = 7783;
			style = ST_MULTI + ST_CENTER + ST_NO_RECT;
			font = "Metropolis";
			text = "ID"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.586 * safezoneH + safezoneY;
			w = 0.1125 * safezoneW;
			h = 0.055 * safezoneH;
			size = 0.025;
			sizeEx = 0.025;
			colorText[] = {0.62,0.62,0.62,1};
		};
		class Contact1_B: RscButton
		{
			idc = 2322;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [0] call HRP_fnc_viewContact";

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.125225 * safezoneW;
			h = 0.046 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Contact2_B: RscButton
		{
			idc = 2323;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [1] call HRP_fnc_viewContact";

			x = 0.422552 * safezoneW + safezoneX;
			y = 0.402519 * safezoneH + safezoneY;
			w = 0.125225 * safezoneW;
			h = 0.046 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Contact3_B: RscButton
		{
			idc = 2324;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [2] call HRP_fnc_viewContact";

			x = 0.422552 * safezoneW + safezoneX;
			y = 0.447889 * safezoneH + safezoneY;
			w = 0.125225 * safezoneW;
			h = 0.046 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Contact4_B: RscButton
		{
			idc = 2325;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [3] call HRP_fnc_viewContact";

			x = 0.422343 * safezoneW + safezoneX;
			y = 0.493815 * safezoneH + safezoneY;
			w = 0.125225 * safezoneW;
			h = 0.046 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Contact5_B: RscButton
		{
			idc = 2326;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [4] call HRP_fnc_viewContact";

			x = 0.423125 * safezoneW + safezoneX;
			y = 0.538185 * safezoneH + safezoneY;
			w = 0.125225 * safezoneW;
			h = 0.046 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class Contact6_B: RscButton
		{
			idc = 2327;
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			action = "closeDialog 0; [5] call HRP_fnc_viewContact";

			x = 0.422396 * safezoneW + safezoneX;
			y = 0.581481 * safezoneH + safezoneY;
			w = 0.125225 * safezoneW;
			h = 0.046 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};

		};
		class createContact_B: RscButton
		{
			idc = 1604;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.278148 * safezoneH + safezoneY;
			w = 0.01525 * safezoneW;
			h = 0.03 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; createDialog 'HRP_Phone_createContact'";
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
			action = "[2] call HRP_fnc_switchContactPage";
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
			action = "[1] call HRP_fnc_switchContactPage";
		};
	};
};

