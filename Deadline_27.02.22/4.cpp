#include <iostream>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;

struct Student {
    string name;
    int age;
    string drink;
};

int main()
{
    Student arr[3];
    vector<string>nam;
    arr[0] = { "Mark", 14, "coffee" };
    arr[1] = { "Alex", 23, "tea" };
    arr[2] = { "Ivan", 43, "juice" };
    int max = 0;
    for (int i = 0; i < size(arr); ++i) {
        string eman="";
        for (int k = arr[i].name.size()-1; k >=0 ; --k) {
            eman += arr[i].name[k];
        }
        nam.push_back(eman);
    }
    sort(nam.begin(), nam.end());
    for (auto i : nam) {
        cout << i << endl;
    }
}