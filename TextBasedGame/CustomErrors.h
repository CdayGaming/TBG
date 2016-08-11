#pragma once
#include <string>
#include "Items.h"
using namespace std;

class InventoryOverFlow
{
public:
	InventoryOverFlow();
	~InventoryOverFlow();
};

class NoInput
{
public:
	NoInput();
};

class invalidInput
{
private:

public:
	string invalid;
	invalidInput(string _input);
};

class CantInsertItem
{
public:
	Weapon basicWeapon;
	Aurmor body, head, legs, feet, gloves;
	CantInsertItem();
	~CantInsertItem();

};
