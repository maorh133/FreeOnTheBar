#pragma once
#include <stdio.h>
#include <string>

class Drink
{
public:
	Drink(std::string);
	virtual std::string getName();
	virtual std::string prepare() = 0;
private:
	std::string name;
};

