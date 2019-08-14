#include "Player.h"
#include "ConsoleFunctions.h"
#include "Maps.h"
#include <iostream>

Player::Player(int x,int y)
{
	this->x = x;
	this->y = y;
	this->icon = 'O';
}


Player::~Player()
{
	
}

void Player::Draw(char c){
	gotoxy(x, y);
	if (c == this->icon) {
		std::cout << c;
	}
	else if (c=='2'){
		setBackgroundColor(ColorLightSkyblue);
		std::cout << ' ';
		setBackgroundColor(ColorBlack);

	}
	setTextColor(ColorWhite);

}

void Player::Action(int to) {
	Point havetoGo = Go(to);
	int oldX = x;
	int oldY = y;
	Move(havetoGo.x, havetoGo.y);


	if (havetoGo.x == oldX && havetoGo.y == oldY) //더 이상 못감
		return;
	

	Sleep(200);
	Action(to);

	
}

Point Player::Go(int to) {
	int newX = x;
	int newY = y;
	switch (to) {
	case UP:
		newY--;
		break;
	case LEFT:
		newX--;
		break;
	case RIGHT:
		newX++;
		break;
	case DOWN:
		newY++;
		break;
	default:
		break;
	}

	//벽이 아닐 경우
	if (Maps::GetInstance()->GetChar(newX, newY) != '1') {
		//Sleep(1000);
		return Point(newX, newY);
	}
	else {
		return Point(x, y);
	}

}

void Player::Move(int x,int y) {
	Draw(Maps::GetInstance()->GetChar(this->x,this->y));
	this->x = x;
	this->y = y;
	Draw(icon);

	Maps::GetInstance()->Color(x, y);
	//Sleep(1000);
	//Move(to);
	
}

