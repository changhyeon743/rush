#include "MainScene.h"
#include "ConsoleFunctions.h"
using namespace std;

MainScene::MainScene() { }


MainScene::~MainScene() { }


void MainScene::PrintTitle()
{
	system("cls");
	gotoxy(3, 2);
	cout << "RUSH";				//Ÿ��Ʋ ���
	gotoxy(3, 5);
	cout << "Press any key to start" << endl;
	_getch();
	system("cls");
	
}
