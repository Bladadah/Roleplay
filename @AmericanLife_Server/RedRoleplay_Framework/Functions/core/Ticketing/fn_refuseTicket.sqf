/*
	Author: Ben Harris
	Description: Refuses Ticket
*/

HRP_fnc_refuseTicket = {
	["Refused", "This citizen refused the ticket", true] remoteExec ["HRP_fnc_Notifications", HRP_ticketSender];	
};