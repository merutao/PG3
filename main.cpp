//ヘッダファイルのインクルード
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include "BOX.h"

int main()
{
	BOX<int, int>num(2, 5);
	BOX<float, float>num2(2.5f, 4.2f);
	BOX<double, double>num3(2.4f, 6.1f);
	BOX<int, float>num4(6, 4.4f);
	BOX<int, double>num5(6, 8.5f);
	BOX<float, double>num6(5.2f, 8.2f);

	printf("%d\n", num.Min());
	printf("%f\n", num2.Min());
	printf("%f\n", num3.Min());
	printf("%d\n", num4.Min());
	printf("%d\n", num5.Min());
	printf("%f\n", num6.Min());
	return(0);
}