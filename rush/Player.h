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
	void Move(int x,int y);		//움직이는 함수
	void Draw(char c);			//현재 위치에 플레이어 출력
	void Action(int to);		//재귀를 위한 액션
	Point Go(int to);			//어디로 가야할지 알려주는 함수
};

