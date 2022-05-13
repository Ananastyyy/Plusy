#include <iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int Fac(int k) {
    int res = 1;
    for (int i = k; i > 1; --i) {
        res *= i;
    }
    return res;
}

int main(){
    ifstream in;
    ofstream out;
    in.open("INPUT.TXT");
    out.open("OUTPUT.TXT");
    int n, m;
    cin >> n >> m;
    int res = 0;
    for (int i = m; i < n+1; ++i) {
        res += Fac(n) / (Fac(i) * Fac(n - i));
    }
    cout << res << endl;
}