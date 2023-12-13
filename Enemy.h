//Enemy�̃w�b�_�[�t�@�C��	
#pragma once

//�w�b�_�[�t�@�C���̃C���N���[�h
#include "Phase.h"

class Enemy
{
public:
	void Initialize();
	void Update();
	void Draw();

	bool GetCount() { return Count; }

private:

	void Approach();

	void Shooting();

	void Leave();

private:

	static void (Enemy::* fhaseTable[])();

	Phase phase_ = Phase::APPROACH;

	bool Count = false;
};

