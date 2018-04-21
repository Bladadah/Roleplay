class HRP_sellHouse
{
	idd = 5010;
	class controls 
	{
		class BuyButton: RscButton
		{
			idc = 1600;
			text = "Sell House"; //--- ToDo: Localize;
			x = 0.394688 * safezoneW + safezoneX;
			y = 0.501 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.044 * safezoneH;
			action = "[cursorObject] call HRP_fnc_sellHouse; closeDialog 0";
		};
		class Cancel_Button: RscButton
		{
			idc = 1601;
			text = "Cancel"; //--- ToDo: Localize;
			x = 0.472031 * safezoneW + safezoneX;
			y = 0.501 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.044 * safezoneH;
			action = "closeDialog 0";
		};
		class Price_Text: RscText
		{
			idc = 1023;
			text = "Sale Price:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
