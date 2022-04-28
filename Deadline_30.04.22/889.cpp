#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int k, m;
    cin >> k >> m;
    vector<pair<int, int> > path;
    for (int i = 0; i < m; ++i) {
        int p, h;
        cin >> p >> h;
        path.push_back(make_pair(h, p));
    }
    sort(path.begin(), path.end());
    for (int i = path.size() - 1; i >= 0; --i) {
        if (path[i].second == k ) {
            k++;
        }
        else if (path[i].second+1 == k) {
            k--;
        }
    }
    cout << k << endl;
}

