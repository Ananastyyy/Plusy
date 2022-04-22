#include <iostream>
#include <algorithm>
#include<vector>
#include <math.h>
#include<stack>
using namespace std;

int main()
{
    int n;
    std::cin >> n;
    vector<int>num;
    vector<int>res(n);
    for (int i = 0; i < n;++i) {
        int k;
        std::cin >> k;
        num.push_back(k);
    }
    for (int i = 1; i < n;++i) {
        for (int k = 0; k < i;++k) {
            if (num[i] > num[k]) {
                if (res[k] >= res[i]) {
                    res[i] = res[k];
                }
                res[i]++;
            }
        }
    }
    int max = 1;
    for (int i = 0; i < n;++i) {
        if (res[i] > max) {
            max = res[i];
        }
    }
    cout << max << endl;
    
}