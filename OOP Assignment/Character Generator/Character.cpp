#include "GameStructure.h"
#include "Pirates.h"
#include "Ninjas.h"
#include "Character.h"
#include <iostream>

int Character::GetHealth()
{
	return Health;
}

void Character::DisplayCharacterStats()
{
	std::cout << "Has a current health of " << GetHealth() << std::endl;
}

void Character::Talk(std::string stuffToSay)
{
	std::cout << "Our Character says: " << stuffToSay << std::endl;
}

void Character::Talk(std::string stuffToSay, std::string Name)
{
	std::cout << Name << ", " << stuffToSay << "." << std::endl;
}

void Character::SetHealth(int healthSet)
{
	if (healthSet <= 0)
	{
		healthSet = 0;
		std::cout << Name << " has been executed, with 0 health left." << std::endl;
	}
}

int Character::Attack()
{
	return 10;
}

void Character::Hurt()
{
	std::cout << "Somebody got slapped!" << std::endl;
}

//int Character::Attack(int )

void Character::Help()
{
	std::cout << "I am here to help." << std::endl;
}