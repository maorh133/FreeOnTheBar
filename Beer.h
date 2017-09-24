#pragma once
#include <stdio.h>
#include <string>
#include "Drink.h"

class Beer : public Drink
{
public:
	Beer(std::string name);
	virtual std::string prepare();
};

