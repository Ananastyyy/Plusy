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
    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].drink << endl;
    }
}