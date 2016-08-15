#include "GameController.h"

/*
ostream & operator<<(ostream & out, Money & clockObj)
{
out << "$" << clockObj.GetDollars() << "." << clockObj.GetCents();
return out; 
}
*/

//The variables needed
GameController theGame;

//The cout version just making it easier for me(caiden) 
//You can use cout if you want I just made this so we can creat our own shortcuts
/*
CURRENT SHORTCUTS:
	@l = new line
	@c = Clear console
*/
void out(string _out)
{
	string output;
	for (int i = 0; i < ((int)_out.size()); i++)
	{
		if (_out[i] == '@')
		{
			switch (_out[i + 1])
			{
			case 'l':
				output = output + "\n";
				break;
			case 'c':
				system("cls");
				break;
			case 't':
				output = output + "    ";
				break;
			case'r':
				output = output+to_string((theGame.GetPlayer().GetAttack()));
			default:
				break;
			}
			i++;
		}
		else
		{
			output = output + _out[i];
		}
	}
	cout << output << endl;
}



int main()
{
	out("This is a beta mode for Caiden or Batyas use only ");
	
	
	string input;
	do
	{
		switch (theGame.stage)
		{
			//Case that they get to the exit screen
		case 0:
		{
			out("Would you like to quit? (y or n)");
			cin >> input;
			try {
				if (input[0] == 'y' || input[0] == 'Y')
				{
					theGame.stage = -1;
				}
				else if (input[0] == 'n' || input[0] == 'N')
				{
					theGame.stage = 1;
				}
				else
				{
					throw invalidInput(input);
				}
			}
			catch (out_of_range e)
			{
				out("You did not input anything.");

			}
			catch (invalidInput e)
			{
				out("You did not input a valid answer");
				out(e.invalid + " Was not a valid answer");
				delay(theGame.theSettings.error_time_delay);
			}
		}
		break;
		//Case that runs when they are in the settings screen
		case 1:
		{

			try
			{
				out("__________Settings__________@l");
				out("Edit:@l");
				//edited this part to allow for testing the players random
				out("1)Error speed@l2)Save and Exit@l3)Back@l4)Test the random@l");
				out("Type the number of the item you want to do/edit : ");
				cin >> input;
				int settingInput = 0;
				//Transfering to an integer value
				{
					try
					{
						settingInput = stoi(input);
					}
					catch (invalid_argument e)
					{
						throw invalidInput(input);
					}
					catch (out_of_range)
					{
						throw invalidInput(input);
					}
				}
				int inputer = -1;
				switch (settingInput)
				{
				case 1:
				{
					do {
						cin.clear();
						out("@c");
						out("Input a number between 0 and 10 for the time to wait in seconds@l Current amount is : " + to_string(theGame.theSettings.error_time_delay));
						cin >> inputer;

					} while (inputer < 0 || inputer>10);

					theGame.theSettings.error_time_delay = inputer;
				}
				break;
				case 2:
					theGame.stage = 0;
					break;
				case 3:
					//add this when we 
					out("Not availible yet");
					break;
				case 4:
					//remove this later once the player attack it all set up
					out("@r");
					break;
				default:
					throw invalidInput(input);
					break;
				}

			}
			catch (out_of_range e)
			{
				cout << "You did not input anything." << endl;

			}
			catch (invalidInput e)
			{
				cout << "You did not input a valid answer" << endl;
				cout << e.invalid << " Was not a valid answer" << endl;
				delay(theGame.theSettings.error_time_delay);
			}


		}
		break;

		default:
			break;
		}
	} while (theGame.stage != -1);
}

void savegame()
{

}

Player GameController::GetPlayer()
{
	return thePlayer;
}

GameController::GameController()
{
}


GameController::~GameController()
{
}

void GameController::check()
{
}

void GameController::createNewPlayer(Player _tomake)
{
	thePlayer = _tomake;
}
