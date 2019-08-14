#pragma once
#include "Player.h"		//Player 클래스 사용
#include "Maps.h"

class GameScene
{
public:
	Player* player;			//플레이어1
	int current;			//빈공간 채운 수

	GameScene();
	~GameScene();

	void PrintLine();		//맵 그리는 함수
	void CountDown();		//제한 횟수
	void PlayGame();		//게임 시작
	void Ending();			//엔딩
	void DrawMap();
};

