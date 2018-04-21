class HRP_SpawnSelect
{
	idd = 5008;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground {};
	
	class controls
	{	
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\RedRoleplay_Client2\icons\spawnmenu.paa";
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.46125 * safezoneW;
			h = 0.455 * safezoneH;
		};
		class MapView : RscMapControl 
		{
			idc = 2132;
			x = 0.4802 * safezoneW + safezoneX;
			y = 0.342 * safezoneH + safezoneY;
			w = 0.199 * safezoneW;
			h = 0.39 * safezoneH;
			maxSatelliteAlpha = 0.75;//0.75;
			alphaFadeStartScale = 1.15;//0.15;
			alphaFadeEndScale = 1.29;//0.29;
		};
		class SpawnList: RscListbox
		{
			idc = 2131;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.300001 * safezoneH;
			onLbSelChanged = "[] spawn HRP_fnc_updateSpawnSelect";
			colorText[] = {0.16,0.49,0.96,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
		};
		class SpawnButton: RscButton
		{
			idc = 2133;
			text = "";
			x = 0.327575 * safezoneW + safezoneX;
			y = 0.7057 * safezoneH + safezoneY;
			w = 0.135 * safezoneW;
			h = 0.03 * safezoneH;
			action = "[] call HRP_fnc_spawn";
			colorText[] = {0,0,0,0};
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




