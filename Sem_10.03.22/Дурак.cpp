#include <iostream>
#include<vector>

using namespace std;

class Move {

public:
	vector<string> desk = {};
	vector<string> equal = { "6","7","8","9","10","V","D","K","T" };
	string trump;
	string suit;
	string num;

public:
	Move(string suit, string num) {
		this->suit;
		this->num;
		Eq();
	}

	void Eq() {
		for (int k = 0; k < equal.size(); ++k) {		//приведение номера карты к общей системе сравнения (для удобства)
			if (num == equal[k]) {
				num = k;
			}
			break;
		}
	}

	void Go() {											//ход 
		desk.push_back(suit);
		desk.push_back(num);
	}

	void Ans() {										//покрытие
		for (int i = 0; i < (desk.size()) / 2; ++i) {
			if ((suit == desk[2 * i] and num > desk[2 * i + 1]) or (suit == trump and desk[2 * i] != trump) or (suit == desk[2 * i] and suit == trump and num > desk[2 * i + 1])) {
				desk.push_back(suit);
				desk.push_back(num);
			}
			else {
				cout << "you can't move this card" << endl;
			}
		}
	}

	void Add() {										//подкидывание 
		for (int i = 0; i < (desk.size()) / 2; ++i) {
			if (num == desk[2 * i + 1]) {
				desk.push_back(suit);
				desk.push_back(num);
			}
			else {
				cout << "you can't add this card" << endl;
			}
		}
	}
	~Move() {}
}