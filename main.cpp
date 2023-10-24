#include <stdio.h>

//template<typename T>

//T Min(T a, T b)
//{
//	//a‚ª‘å‚«‚¢b‚ğ•Ô‚·
//	if (a > b)
//	{
//		return static_cast<T> (b);
//	}
//
//	//b‚ª‘å‚«‚¢a‚ğ•Ô‚·
//	if (a < b)
//	{
//		return static_cast<T> (a);
//	}
//}
//
//template<>
//char Min<char>(char a, char b)
//{
//	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
//
//	return 0;
//}

int Recursive(int time, int all, int m)
 {
	if (time <= 0)  
	{
		return(all);
	}
	return Recursive(time - 1, all += m, m * 2 - 50);
}

int main()
{
	/*char a = 'a';
	char b = 'b';

	printf("%d\n", Min<int>(200, 100));
	printf("%f\n", Min<float>(20, 100));
	printf("%f\n", Min<double>(200, 100));

	Min<char>(a, b);*/

	int all = 0;
	int time = 8;	//ŠÔ
	int m = 100;	//ŠKæ‚·‚é’l
	int j = 1072;	//‹‹
	int result;		//ŒvZŒ‹‰Ê

	result = Recursive(time, all, m);
	printf("ˆê”Ê“I‚È’À‹à‘ÌŒn%d : Ä‹A“I‚È’À‹à‘ÌŒn%d\n", time * j, result);

	return(0);
}