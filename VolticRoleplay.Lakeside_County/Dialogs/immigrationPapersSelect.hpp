class HRP_immigrationPapersSelect
{
	idd = 5041;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;

			text = "\RedRoleplay_Client2\icons\immigration\ImmigrationPapers2.paa";
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.715 * safezoneH;
		};
		class Submit_B: RscButton
		{
			idc = 1600;

			x = 0.584562 * safezoneW + safezoneX;
			y = 0.75388 * safezoneH + safezoneY;
			w = 0.05525 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] call HRP_fnc_identitySelect;";
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			font  = "EtelkaMonospaceProBold";
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.1375 * safezoneW;
			h = 0.34 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorActive[] = {0.62,0.62,0.62,1};
   			colorSelect[] = {0.62,0.62,0.62,1};
   			colorText[] = {-1,-1,-1,1};
   			onLbSelChanged = "[] call HRP_fnc_immigrationLbChanged";
		};
		class First_Name_T: RscText
		{
			idc = 77777;
			font  = "EtelkaMonospaceProBold";
			text = "Name"; //--- ToDo: Localize;
			x = 0.557 * safezoneW + safezoneX;
			y = 0.317 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.2};
		};
		class Middile_Name_T: RscText
		{
			idc = 77778;
			font  = "EtelkaMonospaceProBold";
			text = "Name"; //--- ToDo: Localize;
			x = 0.5671 * safezoneW + safezoneX;
			y = 0.3474 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.2};
		};
		class Sur_Name_T: RscText
		{
			idc = 77779;
			font  = "EtelkaMonospaceProBold";
			text = "Name"; //--- ToDo: Localize;
			x = 0.5494 * safezoneW + safezoneX;
			y = 0.3776 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.2};
		};
		class Sex_T: RscText
		{
			idc = 77780;
			font  = "EtelkaMonospaceProBold";
			text = "Name"; //--- ToDo: Localize;
			x = 0.527481 * safezoneW + safezoneX;
			y = 0.40675 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.2};
		};
		class Eye_T: RscText
		{
			idc = 77781;
			font  = "EtelkaMonospaceProBold";
			text = "Name"; //--- ToDo: Localize;
			x = 0.560119 * safezoneW + safezoneX;
			y = 0.4373 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.2};
		};
		class DOB_T: RscText
		{
			idc = 77782;
			font  = "EtelkaMonospaceProBold";
			text = "Name"; //--- ToDo: Localize;
			x = 0.5674 * safezoneW + safezoneX;
			y = 0.469 * safezoneH + safezoneY;
			w = 0.08125 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0.62,0.62,0.62,0.2};
		};
		class FileChar_P: RscPicture
		{
			idc = 1201;
			text = "\RedRoleplay_Client2\icons\immigration\filenewCharacter.paa";
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.715 * safezoneH;
		};
		class FileChar_B: RscButton
		{
			idc = 1601;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.08525 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "closeDialog 0; [] call HRP_fnc_openIdentityCreation";
		};
		class RscPicture_1202: RscPicture
		{
			idc = 1202;
			text = "\RedRoleplay_Client2\icons\immigration\LakesideIslesID.paa";
			x = 0.628906 * safezoneW + safezoneX;
			y = -0.017 * safezoneH + safezoneY;
			w = 0.34125 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class Name_T: RscText
		{
			idc = 71324;
			font  = "EtelkaMonospaceProBold";
			text = ""; //--- ToDo: Localize;
			x = 0.768073 * safezoneW + safezoneX;
			y = 0.271667 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.015 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02;
		};
		class surName_T: RscText
		{
			idc = 71325;
			font  = "EtelkaMonospaceProBold";
			text = ""; //--- ToDo: Localize;
			x = 0.768073 * safezoneW + safezoneX;
			y = 0.294444 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.015 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02;
		};
		class Country_T: RscText
		{
			idc = 71326;
			font  = "EtelkaMonospaceProBold";
			text = ""; //--- ToDo: Localize;
			x = 0.768073 * safezoneW + safezoneX;
			y = 0.317592 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.015 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02;
		};
		class DoB_T2: RscText
		{
			idc = 71327;
			font  = "EtelkaMonospaceProBold";
			text = ""; //--- ToDo: Localize;
			x = 0.768073 * safezoneW + safezoneX;
			y = 0.340741 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.015 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02;
		};
		class Mid_T: RscText
		{
			idc = 71328;
			font  = "EtelkaMonospaceProBold";
			text = ""; //--- ToDo: Localize;
			x = 0.838541 * safezoneW + safezoneX;
			y = 0.273148 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.015 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02;
		};
		class Sex_T2: RscText
		{
			idc = 71329;
			font  = "EtelkaMonospaceProBold";
			text = ""; //--- ToDo: Localize;
			x = 0.838541 * safezoneW + safezoneX;
			y = 0.319444 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.015 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02;
		};
		class PassportID_T: RscText
		{
			idc = 71330;
			font  = "EtelkaMonospaceProBold";
			text = ""; //--- ToDo: Localize;
			x = 0.814531 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.015 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.025;
		};
	};
};