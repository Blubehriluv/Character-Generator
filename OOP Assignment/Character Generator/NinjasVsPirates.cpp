#include "GameStructure.h"
#include "GameDriver.h"
#include "Ninjas.h"
#include "Character.h"
#include "Pirates.h"

int main()
{
	//Begins the application
	Character manager;
	GameDriver driver;
	driver.DisplayIntro();

	driver.Speak("Introducing, Ninja!");
	
	//creating a ninja
	Ninjas firstNinja("Master Lee Sin, the Weeb");
	firstNinja.SetHealth(100);
	firstNinja.DisplayCharacterStats();
	firstNinja.Talk("I'm da best");
	firstNinja.Help();

	driver.Speak("Introducing, Pirate!");

	//creating a pirate
	Pirates firstPirate("Captain Blunderhook, the Stinky");
	//firstPirate.Name = "Stinky";
	firstPirate.SetHealth(100);
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
	firstPirate.Hurt();
	firstPirate.UseSword();
	firstNinja.Hurt();
	firstNinja.ThrowStars();
	firstPirate.Hurt();

	firstPirate.SetHealth(0);
	
	return 0;
}