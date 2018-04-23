/*
	Author: Ben Harris
	Description: Submits App for Job
*/

HRP_fnc_phoneJobApp = {
	[] spawn { 
		["Application Sent", "You have applied for this job", true] spawn HRP_fnc_Notifications;

		sleep HRP_phoneAppTime;

		_value = round (random 10);
		if (_value <= 3) exitWith { ["Application Denied", "Feel free to Re-Apply", true] spawn HRP_fnc_Notifications;};


		["Application Approved", "Your Application was Approved", true] spawn HRP_fnc_Notifications;

		_jobs = player getVariable "approvedJobs";
		_jobs pushBack HRP_jobVar;
		player setVariable ["approvedJobs", _jobs, true];
	};
};