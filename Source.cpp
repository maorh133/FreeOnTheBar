#include "Beer.h"
#include "GolanSmadar.h"
#include "CarmelEmeraldRiesling.h"
#include "YardenShardona.h"
#include "Chianti.h"
#include "YardenMountHermonRed.h"
#include "YardenCabernetSauvignon.h"
#include "ChateauMargot.h"
#include <stdio.h>
#include <iostream>
#include "windows.h" 

#define SHELF_SIZE 11
#define LIST_OPTIONS 0
#define PREPARE_LAST_DRINK 99
#define LEAVE_THE_BAR 100
#define NO_INPUT -1

void printListOptions(Drink* stock[SHELF_SIZE])
{
	std::cout << "(" << LIST_OPTIONS << ")	" << "list options" << std::endl;
	int index = 1;
	for each (Drink* drink in stock)
	{
		std::cout << "(" << index << ")	" << drink->getName() << std::endl;
		++index;
	}
	std::cout << "(" << PREPARE_LAST_DRINK << ")	" << "How did you prepare my last drink?" << std::endl;
	std::cout << "(" << LEAVE_THE_BAR << ")	" << "Leave the bar" << std::endl;


}
int main()
{

	Drink* stock[SHELF_SIZE];
	stock[0] = new Beer("Heineken");
	stock[1] = new Beer("Goldstar");
	stock[2] = new Beer("Maccabi");
	stock[3] = new Beer("Tuborg");
	stock[4] = new CarmelEmeraldRiesling(1986);
	stock[5] = new GolanSmadar(1989);
	stock[6] = new YardenShardona(1997);
	stock[7] = new Chianti(1997);
	stock[8] = new YardenMountHermonRed(1994);
	stock[9] = new YardenCabernetSauvignon(1997);
	stock[10] = new ChateauMargot(1997);

	int input = NO_INPUT;	
	Drink* lastDrink = nullptr;

	int inputArr[10] = { 3,8,99,5,99,2,10,LEAVE_THE_BAR };
	int index = 0;

	while (input != LEAVE_THE_BAR)
	{
		std::cout << "What can I get you, sir? (0 - list options)\n" << std::endl;

		// If you want to be the client in the bar uncomment this line and comment the next 3 lines.
		//std::cin >> input;

		Sleep(3000);
		input = inputArr[index];
		std::cout << inputArr[index++] << "" << std::endl;

		switch (input)
		{
		case LIST_OPTIONS:
			printListOptions(stock);
			break;
		case PREPARE_LAST_DRINK:
			if (lastDrink != nullptr) 
			{
				std::cout << "You orderd " + lastDrink->getName() << ".\n" << lastDrink->prepare() << std::endl;
			}
			else 
			{
				std::cout << "You not orderd nothing yet\n"<< std::endl;
			}
			break;
		case LEAVE_THE_BAR:
			std::cout << "Bar is closed. Good nigth.\n" << std::endl;
			break;
		default:
			if (input <= SHELF_SIZE && input >0)
			{
				lastDrink = stock[input - 1];
				std::cout << "One " << lastDrink->getName() << " coming up, sir.\n" << std::endl;
			}
			break;
		}
	}
	system("pause");
	return 0;
}