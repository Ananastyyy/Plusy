#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	for (int i = 0; i <= size(s) - size(t); ++i) {
		int coun = 0;
		for (int k = 0; k < size(t); ++k) {
			if (s[i+k] == t[k]){
				coun++;
			}
			else {
				break;
			}
		}
		if (coun == size(t)) {
			cout << i << endl;
		}
	}
}

