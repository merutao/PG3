#include <stdio.h>

//template<typename T>

//T Min(T a, T b)
//{
//	//a���傫����b��Ԃ�
//	if (a > b)
//	{
//		return static_cast<T> (b);
//	}
//
//	//b���傫����a��Ԃ�
//	if (a < b)
//	{
//		return static_cast<T> (a);
//	}
//}
//
//template<>
//char Min<char>(char a, char b)
//{
//	printf("�����ȊO�͑���ł��܂���\n");
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
	int time = 8;	//����
	int m = 100;	//�K�悷��l
	int j = 1072;	//����
	int result;		//�v�Z����

	result = Recursive(time, all, m);
	printf("��ʓI�Ȓ����̌n%d : �ċA�I�Ȓ����̌n%d\n", time * j, result);

	return(0);
}