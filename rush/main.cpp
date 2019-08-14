#include <iostream>
#include "MainScene.h"

int main() {
	MainScene mainScene;
	
	mainScene.PrintTitle();
	mainScene.game.DrawMap();
	mainScene.game.PlayGame();
	mainScene.endig.PrintEnding();
	return 0;
}