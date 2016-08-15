#pragma once
#include "Inventory.h"
class Status
{
public:
	int health = 0;
	int inteligence = 0;
	int money = 0;
	int damagelow = 0, damagehigh = 1;
	Inventory playerInv;
	//player leveling system
	int xp = 0;
	int level = 0;
	int nextLVL = 1;
	//Conditions of player (to add more later)
	int poisonStrength = 0;
	bool poisened = false;

	void StatusUpdate();


	Status();
	~Status();
};

