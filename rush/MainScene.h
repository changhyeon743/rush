#pragma once
#include "GameScene.h"		//���Ӿ� Ŭ���� ���
#include "EndingScene.h"
class MainScene
{
public:
	MainScene();
	~MainScene();

	GameScene game;			//���� ��� ����ü
	EndingScene endig;

	void PrintTitle();		//Ÿ��Ʋ ���
	void SelectCharacter();	//�÷��̾� ��ȣ �Է�
};

