#include <iostream>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;

struct Student {
    string name;
    string go;  //rock, Scissors, paper
    int win;
};

void play(Student &play1, Student &play2){
    if (play1.go == play2.go) {
        play1.win += 0;
    }
    else if ((play1.go == "rock" and play2.go == "scissors") or (play1.go == "scissors" and play2.go == "paper") or (play1.go == "paper" and play2.go == "rock")) {
        play1.win += 1;
    }
    else {
        play2.win += 1;
    }
}

int main()
{
    Student arr[4];
    vector<string>nam;
    arr[0] = { "Mark", "rock", 0 };
    arr[1] = { "Alex", "scissors", 0 };
    arr[2] = { "Ivan", "paper", 0 };
    arr[3] = { "Oleg", "rock", 0 };
    for (int i = 0; i < size(arr); ++i) {
        for (int k = i + 1; k < size(arr); ++k) {
            play(arr[i], arr[k]);
        }
    }
    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i].win << endl;
    }
}