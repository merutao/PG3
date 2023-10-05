#include <stdio.h>

template<typename T>

T Min(T a, T b)
{
	//aが大きい時bを返す
	if (a > b)
	{
		return static_cast<T> (b);
	}

	//bが大きい時aを返す
	if (a < b)
	{
		return static_cast<T> (a);
	}
}

template<>
char Min<char>(char a, char b)
{
	printf("数字以外は代入できません\n");

	return 0;
}

int main()
{
	char a = 'a';
	char b = 'b';

	printf("%d\n", Min<int>(200, 100));
	printf("%f\n", Min<float>(20, 100));
	printf("%f\n", Min<double>(200, 100));

	Min<char>(a, b);

	return 0;
}