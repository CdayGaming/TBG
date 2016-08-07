#pragma once
#include <string>
using namespace std;
class Item
{
private:

public:
	Item();
	~Item();
};

class Weapon
{
private:
	string name;
	int atkPlusLow, atkPlusHigh;


public:
	Weapon();
	Weapon(string _name, int _atkPlusLow, int _atkPlusHigh);
};

class Aurmor
{
private:
	int healthadd;
	int defenceadd;
public:
	//this controls each type of aurmor and where it can be placed.
	enum Type
	{
		Body,
		hand,
		head,
		legs,
		feet
	};
};

class Misc
{
private:

public:
};