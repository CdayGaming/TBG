#include "Items.h"



Item::Item()
{
}


Item::~Item()
{
}

Weapon::Weapon()
{
	name = "ERROR : WEAPON NAME NOT SET";
	atkPlusHigh = 0;
	atkPlusLow = 0;
}

Weapon::Weapon(string _name, int _atkPlusLow, int _atkPlusHigh)
{
	name = _name;
	atkPlusHigh = _atkPlusHigh;
	atkPlusLow = _atkPlusLow;
}
