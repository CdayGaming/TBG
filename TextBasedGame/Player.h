#pragma once
#include "items.h";
#include "Inventory.h"
#include "Status.h";
class Player
{
private:
	//player locations
	int locX = 0;
	int locY = 0;

	//what the player is wearing
	Weapon hand1;
	Aurmor body, head, gloves, boots, legs;
	//The player statuses - controles the 
	Status playerStats;


public:
	Player(int _X, int _Y, Weapon _wepon, Aurmor aurmorinorder[4], Status statuses);
	Player();
	~Player();
};

