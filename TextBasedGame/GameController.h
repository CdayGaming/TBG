#pragma once
#include "Player.h"
#include <string>
#include <array>
#include <vector>
#include "Items.h"
#include "CustomErrors.h"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <time.h>
#include "Settings.h";
//This adds in a function for me so I can do delay the console
#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)

#include <windows.h>

inline void delay(double seconds)
{

	Sleep((seconds * 1000));
}

#else  /* presume POSIX */

#include <unistd.h>

inline void delay(unsigned long ms)
{
	usleep(ms * 1000);
}

#endif 
//Rest of code past this




using namespace std;

class GameController
{
private:

	Player thePlayer;
	vector<Item> allItem;
	vector<Weapon> allWeapons;
	vector<Aurmor> allAurmor;
public:
	void Out(string);
	int stage = 0;
	GameController();
	~GameController();
	void check();
	Settings theSettings;
};

