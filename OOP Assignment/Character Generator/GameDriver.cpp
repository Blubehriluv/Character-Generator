#include "GameDriver.h"
#include <iostream>
#include <stdlib.h>

void GameDriver::DisplayIntro()
{
	std::cout << "Welcome to Pirates vs. Ninjas 2.0" << std::endl;
	std::cout << "The code will work this time, I promise!" << std::endl;

	std::cout << "This game will take you on an adventure, as you fight to" << std::endl;
	std::cout << "the death and take a stand against the opposing faction" << std::endl;
	std::cout << "Will you emerge victorious and live on to continue the" << std::endl;
	std::cout << "legacy?  Press a button to continue." << std::endl;
}

void GameDriver::DisplayCharacterStats()
{
	std::cout << "Test Display Character Stats!" << std::endl;
}

int GameDriver::RandomRoll()
{
	int randomNum;
	randomNum = rand() % 100 + 1;
	
	return randomNum;
}