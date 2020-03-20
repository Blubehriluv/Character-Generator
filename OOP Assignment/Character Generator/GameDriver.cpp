#include "GameDriver.h"
#include <iostream>
#include <stdlib.h>
#include "Character.h"
#include "Ninjas.h"

void GameDriver::DisplayIntro()
{
	std::cout << std::endl;
	std::cout << "Welcome to Pirates vs. Ninjas 2.0" << std::endl;
	std::cout << "The code will work this time, I promise!" << std::endl;
	std::cout << std::endl;
	std::cout << "This game will take you on an adventure, as you fight to" << std::endl;
	std::cout << "the death and take a stand against the opposing faction" << std::endl;
	std::cout << "Will you emerge victorious and live on to continue the" << std::endl;
	std::cout << "legacy?  Press a button to continue." << std::endl;
	std::cout << std::endl;
}

void GameDriver::DisplayCharacterStats()
{
	
	std::cout << std::endl;
	std::cout << "Display Character Stats!" << std::endl;
	std::cout << "\t\tPirate" << std::endl;
	std::cout << "Health:\t100" << std::endl;
	std::cout << "Damage:\t25" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\t\tNinjas" << std::endl;
	std::cout << "Health:\t100" << std::endl;
	std::cout << "Damage:\t25" << std::endl;
	std::cout << std::endl;
}

int GameDriver::RandomRoll()
{
	int randomNum;
	randomNum = rand() % 100 + 1;
	
	return randomNum;
}

void GameDriver::FightEachOther()
{
	
}

void GameDriver::Speak(std::string speech)
{
	std::cout << std::endl;
	std::cout << speech << std::endl;
	std::cout << std::endl;
}