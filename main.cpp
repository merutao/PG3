//�w�b�_�t�@�C���̃C���N���[�h
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>
#include "Enemy.h"

int main()
{
	Enemy* enemy_ = new Enemy;

	while (enemy_->GetCount() == false)
	{
		enemy_->Update();
	}

	return(0);
}