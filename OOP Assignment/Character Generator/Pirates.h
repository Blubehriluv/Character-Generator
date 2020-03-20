#pragma once
#include "Character.h"
#include <string>
class Pirates :
	public Character
{
public:
	Pirates(std::string givenName);	
	void UseSword();
	int Attack() override;
	void Help() override;
	void Hurt() override;
private:
	
};

