
class HRP_immigrationMemo
{
	idd = 5040;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\immigration\ImmigrationPapersMemo.paa";
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.715 * safezoneH;
		};
		class Continue_B: RscButton
		{
			idc = 1600;
			x = 0.584583 * safezoneW + safezoneX;
			y = 0.753926 * safezoneH + safezoneY;
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
			action = "closeDialog 0; [] call HRP_fnc_listIdentities;";
		};
	};
};
