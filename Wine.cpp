#include "Wine.h"
#pragma warning(disable : 4996)


Wine::Wine(int yearOfMade, std::string name) :Drink(name), yearOfMade(yearOfMade)
{
}

std::string Wine::prepare()
{
	if (isWhiteWine)
	{
		return "Well, all you need to do is pour it when it is cold.\n";
	}
	else
	{
		return "Well, all you need to do is pour it when it is at 16-18 celsius degrees.\n";
	}
}

std::string Wine::getName()
{
	char* nameStr = new char[100];
	char* yearOfMadeStr = new char[4 + 1];  /*4 because all year arte between 1000-2018 (1000 to 9999)*/

	std::strcpy(nameStr, Drink::getName().c_str());
	itoa(yearOfMade, yearOfMadeStr, 10);
	std::strcat(nameStr, " (year ");
	std::strcat(nameStr, yearOfMadeStr);
	std::strcat(nameStr, ")");

	return nameStr;

}