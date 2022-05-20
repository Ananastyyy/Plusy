#include <iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int res(int k, int p) {
    if (k < 2) {
        return 0;
    }
    vector<int> num(k + 1);
    num[2] = 1;
    for (int i = 2; i < k; i++) {
        num[i + 1] = (num[i + 1] + num[i]) % p;
        if (2 * i <= k) {
            num[2 * i] = num[i];
        }
    }
    return num[k];
}

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
    using namespace std;
    int k, p;
    in >> k >> p;
    out << res(k, p);
}