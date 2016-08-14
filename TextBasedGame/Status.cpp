#include "Status.h"

 
void Status::StatusUpdate()
{
	if (poisened)
	{
		health -= poisonStrength;
	}

}

Status::Status()
{
}


Status::~Status()
{
}
