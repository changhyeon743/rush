#include "GameScene.h"
#include "ConsoleFunctions.h"
#include "Maps.h"
#include "Point.h"
GameScene::GameScene()
{

}


GameScene::~GameScene()
{
	delete player;
}

void GameScene::PlayGame() {
	player->Draw(player->icon);


	while(true) {
		if (Maps::GetInstance()->currentLevel >= maxLevel)
			return;

		if (Maps::GetInstance()->current >= Maps::GetInstance()->goal) {
			Maps::GetInstance()->LevelUp();
			DrawMap();
		}
	
		if (_kbhit())
		{
			int key = _getch();
			player->Action(key);
			
		}
	} 
	
	
}

void GameScene::DrawMap() {
	system("cls");
	Point point = Maps::GetInstance()->GetPlayerLoc();
	player = new Player(point.x, point.y);
	Maps::GetInstance()->DrawLevel();
	//maps->DrawLevel();
}