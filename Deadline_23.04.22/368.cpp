#include <iostream>
#include <algorithm>
#include<vector>
#include <math.h>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>>pole;
    vector<vector<int>>res;
    vector<vector<string>>out;
    for (int i = 0; i < n; ++i) {
        vector<string>in(n);
        out.push_back(in);
    }
    for (int i = 0; i < n; ++i) {
        vector<int>temp;
        int l;
        cin >> l;
        int count = pow(10, n-1);
        while(l!=0) {
            double t;
            t = l / count;
            temp.push_back(t);
            l %= count;
            count /= 10;
        }
        pole.push_back(temp);
    }
    res = pole;
    for (int i = 1; i < n; ++i) {
        res[0][i] = res[0][i - 1] + pole[0][i];
        res[i][0] = res[i - 1][0] + pole[i][0];
    }
    for (int i = 1; i < n; ++i) {
        for (int k = 1; k < n; k++) {
            res[i][k] += min(res[i - 1][k], res[i][k - 1]);
        }
    }
    out[n - 1][n - 1] = "#";
    int k = n-1;
    int i = n-1;
    while (k != 0 && i != 0) {
        if (res[i - 1][k] <= res[i][k - 1]) {
            out[i - 1][k] = "#";
            i--;
        }
        else {
            out[i][k - 1] = "#";
            k--;
        }
    }
    if (k == 0) {
        while (i >= 0) {
            out[i][0] = "#";
            i--;
        }
    }
    else {
        while (k >= 0) {
            out[0][k] = "#";
            k--;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            if (out[i][k] != "#") {
                out[i][k] = ".";
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            cout << out[i][k] << " ";
        }
        cout << " " << endl;
    }
}