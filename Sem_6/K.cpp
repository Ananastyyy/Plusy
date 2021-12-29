#include <iostream>
using namespace std;

void odd(int k) {
    if (k % 2 != 0) {
        cout << k << endl;
    };
    cin >> k;
    if (k != 0) {
        odd(k);
    };
}

int main() {
    int n;
    cin >> n;
    if (n != 0) {
        odd(n);
    };
}
