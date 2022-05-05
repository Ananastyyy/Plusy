#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main() {
    ifstream in;
    ofstream out;
    in.open("INPUT.TXT");
    out.open("OUTPUT.TXT");
    string n;
    long int k;
    cin >> n >> k;
    long int res = 0;
    while (size(n) != 0) {
        while (res < k) {
            res = res * 10 + (n[0] - '0');
            n.erase(0, 1);
        }
        if(res>=k){
            res = res % k;
        }
    }
    cout << res << endl;
}