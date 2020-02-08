#include "GameStructure.h"
#include "GameDriver.h"
#include "Ninjas.h"
#include "Character.h"
#include "Pirates.h"

int main()
{
	Character manager;
	GameDriver driver;
	driver.DisplayIntro();

	driver.Speak("Introducing, Ninja!");
	
	//creating a ninja
	Ninjas firstNinja;
	firstNinja.Name = "Weeb";
	firstNinja.DisplayCharacterStats();
	firstNinja.Talk("I'm da best");
	firstNinja.Help();

	driver.Speak("Introducing, Pirate!");
	
	Pirates firstPirate;
	firstPirate.Name = "Stinky";
	firstPirate.DisplayCharacterStats();
	firstPirate.Talk("Get ready to swab the poopdeck!");
	firstPirate.Help();

	driver.DisplayCharacterStats();

	firstNinja.ThrowStars();
	firstPirate.Hurt();
	firstNinja.ThrowStars();
	firstPirate.Hurt();
	firstPirate.UseSword();
	firstNinja.Hurt();
	firstNinja.ThrowStars();

	manager.SetHealth(0);
	manager.SetHealth(0);
	
	return 0;
}