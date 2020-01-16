#include "GameStructure.h"
#include "GameDriver.h"
#include "Ninjas.h"
#include "Character.h"
#include "Pirates.h"

int main()
{
	GameDriver driver;
	driver.DisplayIntro();

	//creating a ninja
	Ninjas bigboi;
	bigboi.Name = "Stinky";
	bigboi.DisplayCharacterStats();
	bigboi.Talk("I'm da best");
	bigboi.Talk("wowee", bigboi.Name);
	
	return 0;
}