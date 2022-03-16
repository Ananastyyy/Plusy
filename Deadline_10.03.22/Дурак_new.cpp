#include <iostream>
#include<vector>

using namespace std;

class Card{
public:
	string suit;
	string num;
}
class Move {
public:
	vector<string> desk = {};
	vector<string> equal = { "6","7","8","9","10","V","D","K","T" };
	string trump;

public:
	void Eq(Card* card) {											//приведение номера карты к общей системе сравнения (для удобства)
	}

	void Go(Card* card1) {											//ход 
	}

	void Ans(Card* card2) {										//покрытие
	}

	void Add(Card* card) {										//подкидывание 
	}
}