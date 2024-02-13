#pragma once

#include "Animal.h"
#include <stdio.h>
class Cat:public Animal
{
public:
	Cat();
	~Cat();

	void Cry()override;

private:
};

