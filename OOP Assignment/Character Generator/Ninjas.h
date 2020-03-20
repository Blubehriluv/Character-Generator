#pragma once
#include "Character.h"
class Ninjas :
	public Character
{
public:
	Ninjas(std::string givenName);
	void ThrowStars();
	int Attack() override;
	void Help() override;
	void Hurt() override;

private:

};

