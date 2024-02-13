//ヘッダファイルのインクルード
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IShape* Ishape[] = {
		new Circle(),
		new Rectangle()
	};

	Ishape[0]->Draw();
	Ishape[1]->Draw();

	return 0;
}