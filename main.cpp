//�w�b�_�t�@�C���̃C���N���[�h
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	Animal* animal_[2];
	for (int i = 0; i < 2; i++) {
		if (i < 1) 
		{
			animal_[i] = new Dog;
		}
		else
		{
			animal_[i] = new Cat;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		animal_[i]->Cry();
	}

	return(0);
}