#include <iostream>
#include<vector>

using namespace std;

class Move {

public:
    int left = 0;
    int right = 0;
    int score = 0;
    int left_on_the_desk = 1;
    int right_on_the_desk = 1;
    vector<int>desk;

    Move(int left, int right) {
        this-> left;
        this-> right;
    }

    void Chance() {
        if (left == left_on_the_desk) {
            cout << left << " to the left" << endl;
        }
        if (left = right_on_the_desk) {
            cout << left << " to the right" << endl;
        }
        if (right == right_on_the_desk) {
            cout << right << " to the right" << endl;
        }
        if (right = left_on_the_desk) {
            cout << right << " to the left" << endl;
        }
        else {
            cout << "you can't move" << endl;
        }
    }
    void Turn() {
        int t = left;
        left = right;
        right = t;
    }
    void Score() {
        score = left + right;
    }
    void Go(string& place) {
        if (place == "left") {
            left_on_the_desk = left;
            desk.insert(desk.begin(), right);
            desk.insert(desk.begin(), left);
        }
        else {
            right_on_the_desk = right;
            desk.push_back(left);
            desk.push_back(right);
        }
    }
    void Out() {
        for (int k = 0; k < desk.size(); ++k) {
            if (k % 2 == 0) {
                cout << '[' << desk[k] << " ";
            }
            else {
                cout << desk[k] << ']' << " ";
            }
        }
    }
    ~Move() {};
};