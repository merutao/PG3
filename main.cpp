//ヘッダファイルのインクルード
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include <thread>


void Thread1() {
	printf("thread1\n");
}

void Thread2() {
	printf("thread2\n");
}

void Thread3() {
	printf("thread3\n");
}

int main()
{
	std::thread thread1(Thread1);
	thread1.join();

	std::thread thread2(Thread2);
	thread2.join();

	std::thread thread3(Thread3);
	thread3.join();

	return(0);
}