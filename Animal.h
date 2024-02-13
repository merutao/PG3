#pragma once
class Animal
{
public:
	Animal();
	~Animal();

	virtual void Cry();
protected:
	const char* name;
};

