#include "Ninjas.h"
#include "Character.h"
#include <iostream>

Ninjas::Ninjas()
{
	std::cout << "Who has woken me?" << std::endl;
	Name = "Master Lee Sin";
}

void Ninjas::ThrowStars()
{
	std::cout << "I am throwing stars!" << std::endl;
}

int Character::GetHealth()
{
	return Health;
}

int Character::SetHealth(int healthSet)
{
	if (Health <= 0)
	{
		Health = 0;
		std::cout << "Character has expired" << std::endl;
	}
	else
	{
		Health = healthSet;
	}
	return healthSet;
};

void GameStructure::Help()
{
	std::cout << "Ninja's are fast and can throw ninja stars!" << std::endl;
}