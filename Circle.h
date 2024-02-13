#pragma once

#include "IShape.h"
#include <stdio.h>
class Circle : public IShape
{
public:
	Circle();

	~Circle();

	void Size();

	void Draw();

private:
	float radius = 10;
	float answer = 0;
};

