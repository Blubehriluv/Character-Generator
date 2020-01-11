#pragma once
#include "GameStructure.h"
#include <string>


class Character :
	public GameStructure
{
public:
	std::string Name;
	int GetHealth();
	int SetHealth(int healthSet);
	void GameStructure::Help();

private:
	int Health = 100;
};