#include <iostream>

using namespace std;

class Move {

public:
	int space[10][10];			//наше поле
	int battlefield[10][10];	//поле соперника, изначально пустое
	int X;
	int Y;

	Move(int X, int Y) {
		this->X;
		this->Y;
	}

	void Add() {				//добавление кораблей на свое поле
		if (space[X][Y] == 0) {
			space[X][Y] = 1;
		}
		else {
			cout << "this cell is already occupied" << endl;
		}
	}

	void Battle_to_rival(string& message){		//бой на соперника
		if (message=="HIT!") {
			battlefield[X][Y] == 1;
		}
		else {
			cout << "past" << endl;
		}
	}

	void Battle_to_me() {		//бой на нас
		if (space[X][Y] == 1) {
			cout << "HIT!" << endl;
			space[X][Y] == 0;
		}
		else {
			cout << "past" << endl;
		}
	}
	~Move(){}
}