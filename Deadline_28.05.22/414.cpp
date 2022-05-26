#include <iostream>
#include<vector>
#include<fstream>
using namespace std;

int main() {
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");
    int n, a, b, k;
    in >> n >> a >> b;
    vector <int> v;
    vector <int> v1;
    vector <int> v2;
    v.push_back(1);
    v.push_back(1);
    for (int i = 1; i < n; i++) {
        in >> k;
        v.push_back(k);
    }
    int x = a;
    v1.push_back(x);
    int y = b;
    v2.push_back(y);

    while (x != 1) {
        x = v[x];
        v1.push_back(x);
    }

    while (y != 1) {
        y = v[y];
        v2.push_back(y);
    }

    x = a;
    y = b;

    while (x != y) {
        if (v2.size() > v1.size())
        {
            v2.erase(v2.begin());
        }

        else
            v1.erase(v1.begin());

        x = v1[0];
        y = v2[0];
    }
    out << x << endl;


    return 0;
}