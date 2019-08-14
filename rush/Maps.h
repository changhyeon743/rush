#pragma once
#include "Point.h"
const static int size = 10;
const static int maxLevel = 3;


class Maps {
private:
	Maps();
	~Maps();
	static char maps[maxLevel][ size ][ size ];

	static Maps* instance;


public:
	int currentLevel;

	int goal;
	int current;
	char currentMap[size][size];
	static Maps* GetInstance();
	static void PurgeInstance();
	Point GetPlayerLoc();
	void DrawLevel();
	void LevelUp();
	char GetChar(int x, int y);
	void Color(int x, int y);
};