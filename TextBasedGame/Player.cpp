#include "Player.h"


Player::Player(int _X, int _Y, Weapon _weapon, Aurmor aurmorinorder[4], Status statuses)
{
	locX = _X;
	locY = _Y;
	hand1 = _weapon;

}

Player::Player()
{
}


Player::~Player()
{
}
