#include "Enemy.h"
#include <Windows.h>
#include <stdio.h>

void(Enemy::* Enemy::fhaseTable[])()
{
		&Enemy::Approach,
		& Enemy::Shooting,
		& Enemy::Leave
};

void Enemy::Initialize()
{

}

void Enemy::Update()
{
	(this->*fhaseTable[static_cast<size_t>(phase_)])();
}

void Enemy::Draw()
{

}

void Enemy::Approach()
{
	printf("�ڋ�\n");

	phase_ = Phase::SHOOTING;
}

void Enemy::Shooting()
{
	printf("�_��\n");

	phase_ = Phase::LEAVE;
}

void Enemy::Leave()
{
	printf("���E\n");

	Count = true;
}
