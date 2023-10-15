#include <stdio.h>

//template<typename T>

//T Min(T a, T b)
//{
//	//aが大きい時bを返す
//	if (a > b)
//	{
//		return static_cast<T> (b);
//	}
//
//	//bが大きい時aを返す
//	if (a < b)
//	{
//		return static_cast<T> (a);
//	}
//}
//
//template<>
//char Min<char>(char a, char b)
//{
//	printf("数字以外は代入できません\n");
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
	int time = 3;	//時間
	int m = 100;	//階乗する値
	int j = 1072;	//時給
	int result;		//計算結果

	result = Recursive(time, all, m);
	printf("一般的な賃金体系%d : 再帰的な賃金体系%d\n", time * j, result);

	return(0);
}