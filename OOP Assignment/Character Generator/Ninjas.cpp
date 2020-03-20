#include "Ninjas.h"
#include "Character.h"
#include <iostream>

Ninjas::Ninjas(std::string givenName)
{
	std::cout << "Who has woken me?" << std::endl;
	Name = givenName;
	std::cout << "It is I, " << Name << "!" << std::endl;
}

void Ninjas::ThrowStars()
{
	std::cout << "I am throwing stars!" << std::endl;
}

void Ninjas::Help()
{
	std::cout << "Ninja's are fast and can throw ninja stars!" << std::endl;
}

int Ninjas::Attack()
{
	return 25;
}

void Ninjas::Hurt()
{
	std::cout << "The fiend landed a blow!" << std::endl;
}