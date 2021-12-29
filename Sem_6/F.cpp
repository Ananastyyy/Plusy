
#include <iostream>
using namespace std;

void div(int k) {
    cout << k % 10 << " ";
    k /= 10;
    if (k > 0) {
        div(k);
    }
}
int main()
{
    int a;
    cin >> a;
    div(a);
}

