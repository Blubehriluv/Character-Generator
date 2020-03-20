#include "Pirates.h"
#include "Character.h"
#include <iostream>

Pirates::Pirates(std::string givenName)
{
	std::cout << "Yarg, who disturbs me sleep?" << std::endl;
	Name = givenName;
	std::cout << "It be I, " << Name << ", Cap'n of all the 7 seas!" << std::endl;
}

void Pirates::UseSword()
{
	std::cout << "I am swooshing my sword" << std::endl;
}

void Pirates::Help()
{
	std::cout << "Pirates hit hard when they use their trusty sword!" << std::endl;
}

int Pirates::Attack()
{
	return 25;
}

void Pirates::Hurt()
{
	std::cout << "Yarrrg, that hurts me booty!" << std::endl;
}