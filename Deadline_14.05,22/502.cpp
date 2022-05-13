#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");
    int n;
    in >> n;
    vector < vector<int>> vec(1 + n, vector<int>(1 + n));
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            in >> vec[i][j];
    const int num = -1000000000;
    vector<vector<int>>max(n + 1, vector<int>(n + 1, num));
    max[0][0] = 0;
    for(int i=1; i<=n; ++i)
        for(int j=0; j<=n; ++j)
        {
            max[i][j] = max[i - 1][j];
            for (int k = 1; k <= j; ++k)
                max[i][j] = max(max[i][j], vec[k][i] + max[i - 1][j - k]);
        }
    out << max[n][n];
    return 0;
}