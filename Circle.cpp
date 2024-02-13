#include "Circle.h"

Circle::Circle()
{
	Size();
}

Circle::~Circle()
{
}

void Circle::Size()
{
	answer = radius * radius * 3.14;
}

void Circle::Draw()
{
	printf("â~ÇÃñ êœ %f\n", answer);
}