#include <stdio.h>

template<typename T>

T Min(T a, T b)
{
	//a���傫����b��Ԃ�
	if (a > b)
	{
		return static_cast<T> (b);
	}

	//b���傫����a��Ԃ�
	if (a < b)
	{
		return static_cast<T> (a);
	}
}

template<>
char Min<char>(char a, char b)
{
	printf("�����ȊO�͑���ł��܂���\n");

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