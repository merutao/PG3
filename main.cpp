//�w�b�_�t�@�C���̃C���N���[�h
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>

int main()
{
	srand((unsigned int)time(NULL));

	int num;
	int select = 0;

	printf("���Ȃ�0���A���Ȃ�1�����\n");
	scanf_s("%d", &select);

	num = 1 + rand() % 6;

	std::function<void(void)>lottery = [=]()
		{
			printf("�T�C�R���̖ځF%d\n", num);

			if (select == 0) {
				if (num == 1 || num == 3 || num == 5) {
					printf("��");
				}
				else {
					printf("�c�O");
				}
			}

			if (select == 1) {
				if (num == 0 || num == 2 || num == 4 || num == 6) {
					printf("��");
				}
				else {
					printf("�c�O");
				}
			}

		};

	std::function<void(int)> setTimeout = [=](int second) {
		Sleep(second * 1000);

		lottery();

		};

	setTimeout(3);

	return(0);
}