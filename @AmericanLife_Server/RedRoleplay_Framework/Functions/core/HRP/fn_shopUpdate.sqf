/*
	Author: Ben Harris
	Description: Updates the text on the shop
*/

HRP_fnc_shopUpdate = {
	_data = lbData [1500, ( lbCurSel 1500 )];
	_text = lbText [1500, ( lbCurSel 1500 )];

	ctrlSetText [1000, _text];

	_dataArray = call compile _data;
	_curPrice = _dataArray select 2;
	_curPrice = call compile _curPrice;
	ctrlSetText [1001, "$" + str _curPrice];
};