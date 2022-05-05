#include <iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ifstream in;
    ofstream out;
    pair<int, int> temp;
    vector<pair<float, pair<int, int> > > res;
    in.open("INPUT.TXT");
    out.open("OUTPUT.TXT");
    int n;
    int count;
    double r;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        for (int k = 2; k < n; ++k) {
            if (i + k == n && i < k){
                count = 0;
                for (int l = 2; l < i; ++l) {
                    if (i % l == 0 && k % l == 0) {
                        count = 1;
                        break;
                    }
                }
                if (count == 0) {
                    r = (i * 100) / k;
                    temp = make_pair(i, k);
                    res.push_back(make_pair(r, temp));
                }
            }
        }
    }
    sort(res.begin(), res.end());
    cout << res[res.size()-1].second.first << " " << res[res.size()-1].second.second << endl;
}