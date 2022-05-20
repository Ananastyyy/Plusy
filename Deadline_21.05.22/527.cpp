#include<vector>
#include<string>
#include<iostream>
#include <stdlib.h>
#include<fstream>
using namespace std;

bool Alg(long long a, long long b, long long c, long long d)
{
    if (a == c && b == d)
        return true;

    while (b != 0) {
        if (b > a)
        {
            swap(a, b);
            if (a == c && b == d)
                return true;
        }

        if (b > 0)
        {
            long long nSub = a / b;
            long long oldA = a;
            a -= nSub * b;
            long long newA = a;
            if (b == d && newA <= c && c <= oldA && (oldA - c) % b == 0)
                return true;
        }
    }

    return false;
}

int main() {
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");

    int k;
    long long a, b, c, d;
    in >> k;

    for (int i = 0; i < k; ++i)
    {
        in >> a >> b >> c >> d;
        if (Alg(a, b, c, d))
            out << "YES" << endl;
        else
            out << "NO" << endl;
    }

    return 0;
}