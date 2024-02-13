#pragma once

#include "IShape.h"
#include <stdio.h>
class Rectangle : public IShape
{
public:
	Rectangle();

	~Rectangle();

	void Size();

	void Draw();

private:
	
	int height = 10;
	int width = 20;

	int answer = 0;
};
