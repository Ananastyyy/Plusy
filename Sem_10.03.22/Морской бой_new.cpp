#include <iostream>

using namespace std;

class space{
public:
    space[10][10];
}
	
class battlefield{
	battlefield[10][10];
}

class Move {

public:	
	int X;
	int Y;

	void Add(space* space) {				//добавление кораблей на свое поле
	}

	void Battle_to_rival(string& message, battlefield* battlefield){		//бой на соперника
	}

	void Battle_to_me(space* space) {		//бой на нас
	}
}

