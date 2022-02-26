#include <iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    int age;
    string drink;
};

int main()
{
    Student arr[3];
    arr[0] = { "Mark", 14, "coffee" };
    arr[1] = { "Alex", 23, "tea" };
    arr[2] = { "Ivan", 43, "juice" };
    int max = 0;
    for (int i = 0; i < size(arr); ++i) {
        int k = 0;
        for (int t = 2; t < sqrt(arr[i].age); ++t) {
            if (arr[i].age % t == 0) {
                k++;
            }
        }
        if (k == 0) {
            cout << arr[i].name << " " << arr[i].drink << endl;
        }
    }
}