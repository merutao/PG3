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
	printf("�~�̖ʐ� %f\n", answer);
}