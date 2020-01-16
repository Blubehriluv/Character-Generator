#pragma once
#include "Character.h"
class Pirates :
	public Character
{
public:
	Pirates();	
	void UseSword();
	int Attack() override;
	void Help() override;

private:
	
};

