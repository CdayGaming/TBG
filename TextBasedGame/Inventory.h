#pragma once
#include <string>;
#include <array>;
#include <vector>;
#include "Items.h";
#include "CustomErrors.h"
using namespace std;
class Inventory
{
private:
	int inventoryMaxSize = 0;
	vector <Item> itemInv;
	vector <Weapon> weapInv;
	vector <Aurmor> aurInv;
public:
	Inventory();
	~Inventory();
	void Additem(Item);
	void Additem(Weapon);
	void Additem(Aurmor);
	vector<Item> Getiteminv();
	vector<Weapon> GetWeapinv();
	vector<Aurmor> GetAurmorinv();
};

