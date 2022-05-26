#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");
    int hgt;
    in >> hgt;
    vector<int>count(hgt + 1, 0);
    count[0] = 1;
    const int m = 1000 * 1000;
    for(int h=1; h<= hgt; ++h)
    {
        if (h >= 10)
            count[h] += count[h - 10];
        if (h >= 11)
            count[h] += count[h - 11];
        if (h >= 12)
            count[h] += count[h - 12];
        count[h] %= m;
    }
    out << count[hgt] * 2 % m;
    return 0;
}