#pragma once
#include "Player.h"		//Player Ŭ���� ���
#include "Maps.h"

class GameScene
{
public:
	Player* player;			//�÷��̾�1
	int current;			//����� ä�� ��

	GameScene();
	~GameScene();

	void PrintLine();		//�� �׸��� �Լ�
	void CountDown();		//���� Ƚ��
	void PlayGame();		//���� ����
	void Ending();			//����
	void DrawMap();
};

