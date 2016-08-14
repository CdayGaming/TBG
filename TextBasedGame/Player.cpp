#include "Player.h"


Player::Player(int _X, int _Y, Weapon _weapon, Aurmor aurmorinorder[4], Status statuses)
{
	locX = _X;
	locY = _Y;
	hand1 = _weapon;
	playerStats = statuses;
}

Player::Player()
{
}


Player::~Player()
{
}

int Player::GetAttack()
{
	int randNum = rand() % 
		(
			/*all attack modifyers for the atk high go here->*/(playerStats.damagehigh+hand1.atkPlusHigh)/*<-all attack modifyers for the atk high go here*/
			- 
			/*all attack modifyers for the atk low go here->*/(playerStats.damagelow + hand1.atkPlusHigh)/*<-all attack modifyers for the atk low go here*/
			+ 1
		) + /*all attack modifyers for the atk low go here->*/(playerStats.damagelow + hand1.atkPlusHigh)/*<-all attack modifyers for the atk low go here*/;
	return  randNum;
}
