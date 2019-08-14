#include "EndingScene.h"
#include "ConsoleFunctions.h"
#include <iostream>
using namespace std;

EndingScene::EndingScene()
{
}


EndingScene::~EndingScene()
{
}

void EndingScene::PrintEnding() {
	system("cls");
	gotoxy(0, 2);

	cout << "#####   #####  " << endl;
	cout << "#     # #     #" << endl;
	cout << "#       #       " << endl;
	cout << "#  #### #  ####" << endl;
	cout << "#     # #     # " << endl;
	cout << "#     # #     # " << endl;
	cout << "#####   #####" << endl;
	cout << endl;
	cout << "Press any key to exit" << endl;
	_getch();
	system("cls");

}