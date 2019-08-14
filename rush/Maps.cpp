#include "ConsoleFunctions.h"
#include "Maps.h"
#include "Player.h"
#include "Point.h"
Maps::Maps() {
	currentLevel = 0;
	goal = 0;
	current = 0;
};
Maps::~Maps() {};

char Maps::maps[maxLevel][ size ][ size ] =
{
	{
		{ "111111111" },
		{ "1p0000011" },
		{ "111011011" },
		{ "100011001" },
		{ "100000001" },
		{ "100011111" },
		{ "100011001" },
		{ "110000001" },
		{ "111111111" },
	},
	{
		{ "111111111" },
		{ "10p011111" },
		{ "101011011" },
		{ "100011001" },
		{ "100000001" },
		{ "100011101" },
		{ "100011001" },
		{ "110000011" },
		{ "111111111" },
	},
	{
		{ "111111111" },
		{ "100000001" },
		{ "101011101" },
		{ "101000001" },
		{ "101010101" },
		{ "100000101" },
		{ "101110101" },
		{ "1000001p1" },
		{ "111111111" },
	}
};

Maps* Maps::instance = nullptr;
Maps* Maps::GetInstance() {
	if (instance == nullptr) instance = new Maps();
	return instance;
}
void Maps::PurgeInstance() {
	delete instance;
	instance = nullptr;
}

Point Maps::GetPlayerLoc() {
	int h, w;
	for (h = 0; h < size-1; h++) {
		for (w = 0; w < size-1; w++) {
			if (maps[currentLevel][h][w] == 'p') {
				return Point(w, h);
			}
		}
		printf("\n");
	}

	return Point(1, 1);
}

void Maps::Color(int x, int y) {
	if (currentMap[y][x] != '2') {
		currentMap[y][x] = '2';
		current++;
		gotoxy(18, 3);
		std::cout << current << " / " << goal;
	}
	
}

void Maps::DrawLevel() {
	system("cls");
	int h, w;
	for (h = 0; h < size-1; h++) {
		for (w = 0; w < size-1; w++) {
			currentMap[h][w] = maps[currentLevel][h][w];
			char element = currentMap[h][w];
			if (element == '1') {
				setBackgroundColor(ColorLightWhite);
				std::cout << ' ';
				
				setBackgroundColor(ColorBlack);
			}
			else {
				goal++;
				
				std::cout << ' ';
			}
		}
		printf("\n");
	}
}

void Maps::LevelUp() {
	currentLevel++;
	goal = 0;
	current = 0;
}

char Maps::GetChar(int x, int y) {
	return currentMap[y][x];
}

