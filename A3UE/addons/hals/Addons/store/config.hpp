/*
	Macro: ERROR_WITH_TITLE()

	Parameters:
	0: CLASSNAME - Classname of item
	1: PRICE - Default item price
	2: STOCK - Default item stock
__________________________________________________________________*/
#define ITEM(CLASSNAME, PRICE, STOCK)\
	class CLASSNAME {\
		price = PRICE;\
		stock = STOCK;\
	};

#define MAGAZINE_STOCK 200
#define LAUNCHER_STOCK 50
#define PISTOL_STOCK 150
#define RIFLE_STOCK 100
#define MZ_STOCK 50
#define NN_STOCK 50
#define PN_STOCK 65
#define MISC_STOCK 50

class cfgHALsStore 
{
	class categories 
	{
		#include "config\mti.hpp"
	};

	class stores 
	{
		class my_extension_stock_mti
		{
			displayName = $STR_ARMS_DEALER_STORE;
			categories[] = {
				"handgunsMTI",
				"riflesMTI", 
				"sniperRiflesMTI", 
				"mgMTI",
				"smgMTI",
				"launchersMTI",
				"launcherMagazinesMTI",
				"navigationMTI",
				"pointersMTI",
				"muzzlesMTI",
				"opticsMTI",
				"magazinesMTI",  
				"miscMTI"
			};
		};
	};
};
