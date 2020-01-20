#include "Pirates.h"
#include <iostream>

Pirates::Pirates()
{
	std::cout << "Yarg, who disturbs me sleep?" << std::endl;
	Name = "Captain Blunderhook";
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
	return 35;
}

void Ninjas::Hurt()
{
	std::cout << "The fiend landed a blow!" << std::endl;
}