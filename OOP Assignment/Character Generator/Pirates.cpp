#include "Pirates.h"
#include <iostream>

Pirates::Pirates()
{
	std::cout << "Yarg, who disturbs me sleep?" << std::endl;
	Name = "Captain Blunderhook";
}

void Pirates::UseSword()
{
	std::cout << "I am swooshing my sword" << std::endl;
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
	std::cout << "Pirates hit hard when they use their trusty sword!" << std::endl;
}