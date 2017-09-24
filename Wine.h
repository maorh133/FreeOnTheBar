#pragma once
#include "Drink.h"
#include <stdlib.h>

class Wine : public Drink
{
public:
	Wine(int, std::string);
	virtual std::string prepare();
	virtual std::string getName();
protected:
	int yearOfMade;
	bool isWhiteWine;
};

