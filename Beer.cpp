#include "Beer.h"

Beer::Beer(std::string name):Drink(name)
{	
}

std::string  Beer::prepare()
{
	return "Well, all you need to do is pour it into a glass and serve.\n";		
}
