//ヘッダファイルのインクルード
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

typedef void (*newType)(int*, int*);

//結果  奇数か偶数か
void DispResult(int* number, int* answer)
{
	if (*number == 1)
	{
		if (*answer == 1 || *answer == 3 || *answer == 5)
		{
			printf("奇数\n");
		}
		else
		{
			printf("×\n");
		}
	}
	

	if (*number == 0)
	{
		if (*answer == 2 || *answer == 4 || *answer == 6)
		{
			printf("偶数\n");
		}
		else
		{
			printf("×");
		}
	}
	
	
}

//結果まで3秒待つ  コールバック
void setTimeout(newType calc, int second,int number ,int answer)
{
	Sleep(second * 180);

	calc(&number, &answer);

}


int main()
{
	srand((unsigned int)time(NULL));

	newType calc;

	calc = DispResult;

	int number = 0;
	int answer;

	printf("偶数なら０を、奇数なら１を\n");
	scanf_s("%d", &number);

	answer = 1 + rand() % 6;

	setTimeout(calc, 3, number, answer);

	return(0);
}