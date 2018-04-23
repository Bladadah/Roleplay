class CfgPatches
{
	class RedRoleplay_Server
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};

class CfgFunctions 
{
	class Server
	{
		class Save
		{
			file = "RedRoleplay_Server\Functions\core\Save";
			class handleDisconnect {};
            class initStats {};
            class statSave {};
            class statSaveLoop {};
            class copUpdate {};
		};
		class ATM
		{
			file = "RedRoleplay_Server\Functions\core\ATM";
			class transferMoney {};
		};
		class Garage
		{
			file = "RedRoleplay_Server\Functions\core\Garage";
			class fetchGarage {};
            class insertGarage {};
            class removeGarage {};
            class impoundVehicle {};
		};
		class Money
		{
			file = "RedRoleplay_Server\Functions\core\Money";
			class replicateMoney {};
		};
		class Housing
		{
			file = "RedRoleplay_Server\Functions\core\Housing";
			class insertHouse {};
			class loadHouse {};
			class loadHouseLocal {};
			class loadHouseGear {};
			class updateHouseGear {};
			class deleteHouse {};
		};
		class PoliceDB
		{
			file = "RedRoleplay_Server\Functions\core\PoliceDB";
			class warrantAdd {};
			class findWarrant {};
			class deleteWarrant {};
			class insertVehiclePoliceDB {};
			class deleteVehiclePoliceDB {};
			class findVehicle {};
			class personLookup {};
		};

		class Phone
		{
			file = "RedRoleplay_Server\Functions\core\Phone";
			class insertNews {};
			class fetchNews {};
		};

		class Immigration
		{
			file = "RedRoleplay_Server\Functions\core\Immigration";
			class fetchGarageImmigration {};
		};
	};
	class ExternalS
	{
		class ExtDB
		{
			file = "RedRoleplay_Server\External\ExtDB";
			class ExtDBasync {};
            class ExtDBinit {};
			class ExtDBstrip {};
			class ExtDBquery {};
		};
	};
};