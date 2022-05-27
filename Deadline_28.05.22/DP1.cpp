#include <iostream>
using namespace std;

int Fib(int k) {
    int a = 0;
    int b = 1;
    int c;
    for (int i = 3; i <= k; ++i) {
        c = a;
        a = b;
        b = c + a;
    }
    return b;
}

int main() {
    int k;
    cin >> k;
    cout << Fib(k) << endl;
}