#include <stdio.h>

template<typename T>

T Min(T a, T b)
{
	//a‚ª‘å‚«‚¢b‚ğ•Ô‚·
	if (a > b)
	{
		return static_cast<T> (b);
	}

	//b‚ª‘å‚«‚¢a‚ğ•Ô‚·
	if (a < b)
	{
		return static_cast<T> (a);
	}
}

template<>
char Min<char>(char a, char b)
{
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");

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