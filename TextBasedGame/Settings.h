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
class Settings
{
public:
	Settings();
	Settings(int timedelay);
	~Settings();
	int error_time_delay = 2;
};

