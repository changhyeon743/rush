#pragma once
#include "Point.h"

class Player
{
public:
	int x;
	int y;
	char icon;
	Player(int x,int y);
	~Player();
	void Move(int x,int y);		//�����̴� �Լ�
	void Draw(char c);			//���� ��ġ�� �÷��̾� ���
	void Action(int to);		//��͸� ���� �׼�
	Point Go(int to);			//���� �������� �˷��ִ� �Լ�
};

