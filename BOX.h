#pragma once

template <typename Type, typename Type2>
class BOX
{
public:

	BOX(Type num, Type2 num2) :num(num), num2(num2) {};

	Type Min()
	{
		if (num < num2)
		{
			return static_cast<Type>(num);
		}

		if (num > num2)
		{
			return static_cast<Type>(num2);
		}
	}

private:

	Type num;
	Type2 num2;
};

