#include <iostream>
#include<vector>

using namespace std;

class Domino {
public:
    int left;
    int right;
};

class Move {

public:
    int left_on_the_desk = 1;
    int right_on_the_desk = 1;
    vector<int>desk = { 1,1 };

    void Chance(Domino f1) {							//проверяется, можно ли сходить каким-либо образом выбранной фишкой
    }
    void Turn(Domino f1) {										//разворот фишки для нужного хода
    }
    void Score(Domino f1) {										//подсчет очков за ход одной фишкой
    }
    void Go(string& place, Domino f1) {							//ход фишкой
    }
    void Out() {										//вывод всей цепочи   
    }
};
