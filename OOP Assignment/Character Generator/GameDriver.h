#pragma once
#include <string>
#include "Character.h"
#include "Ninjas.h"

class GameDriver
{
public:

	void DisplayIntro();
	void DisplayCharacterStats();
	int RandomRoll();
	void FightEachOther();
	void Speak(std::string speech);

private:
	
};