#pragma once
#include <string>

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