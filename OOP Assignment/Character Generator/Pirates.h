#pragma once
#include "Character.h"
#include <string>
class Pirates :
	public Character
{
public:
	Pirates();	
	void UseSword();
	int Attack() override;
	void Help() override;
	void Hurt() override;
	void Talk(std::string stuffToSay, std::string Name) override;
	void Talk(std::string stuffToSay) override;
private:
	
};

