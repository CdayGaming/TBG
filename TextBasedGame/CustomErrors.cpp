#include "CustomErrors.h"
/*Inventory overflow area*/ 
InventoryOverFlow::InventoryOverFlow()
{
}

InventoryOverFlow::~InventoryOverFlow()
{
}
/*No input area*/
NoInput::NoInput()
{
}
/*Invalid input area*/
invalidInput::invalidInput(string _input)
{
	invalid = _input;
}


/*
Cant insert Item area
*/

CantInsertItem::CantInsertItem()
{
	basicWeapon = Weapon("nothing", 0, 0);
}

CantInsertItem::~CantInsertItem()
{
}
