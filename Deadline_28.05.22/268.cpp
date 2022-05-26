#include<iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


int main()
{
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");
    int n, k, i, j, coun1, coun2, sum = 0, temp;
    string s;
    cin >> n >> k >> s;
    if (n > 1) {
        for (int a = 0; a < n; ++a) {
            i = a;
            j = a+1;
            temp = 2;
            coun1 = 0;
            coun2 = 0;
            sum++;
            while (i > -1 && j < n) {
                if (s[i] != s[j]) {
                    if (temp%2 == 1) {
                        coun1++;
                        if (coun1 <= k) {
                            sum++;
                        }
                    }
                    else {
                        coun2++;
                        if (coun2 <= k) {
                            sum++;
                        }
                    }
                }
                else {
                    sum++;
                }
                if (temp % 2 == 0) {
                    i--;
                }
                else {
                    j++;
                }
                temp++;
            }
        }
        cout << sum << endl;
    }
    else {
        cout << 1 << endl;
    }
}