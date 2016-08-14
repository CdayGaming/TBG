#include "Inventory.h"


Inventory::Inventory()
{
}


Inventory::~Inventory()
{
}

void Inventory::Additem(Item  _toAdd)
{
	if (((int)(itemInv.size() + weapInv.size() + aurInv.size())) < inventoryMaxSize)
	{
		itemInv.push_back(_toAdd);
	}
	else
	{
		throw InventoryOverFlow();
	}
}

void Inventory::Additem(Weapon  _toAdd)
{
	if (((int)(itemInv.size() + weapInv.size() + aurInv.size())) < inventoryMaxSize)
	{
		weapInv.push_back(_toAdd);
	}
	else
	{
		throw InventoryOverFlow();
	}
}

void Inventory::Additem(Aurmor _toAdd)
{
	if (((int)(itemInv.size() + weapInv.size() + aurInv.size())) < inventoryMaxSize)
	{
		aurInv.push_back(_toAdd);
	}
	else
	{
		throw InventoryOverFlow();
	}
}

vector<Item> Inventory::Getiteminv()
{
	return itemInv;
}

vector<Weapon> Inventory::GetWeapinv()
{
	return weapInv;
}

vector<Aurmor> Inventory::GetAurmorinv()
{
	return aurInv;
}
