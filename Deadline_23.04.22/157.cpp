#include <iostream>
#include<vector>
#include<string>


using namespace std;
int fact(int k) {
	int res = 1;
	for (int i = 1; i <= k; ++i) {
		res *= i;
	}
	return res;
}

int main() {
	string s;
	cin >> s;
	int ans = fact(size(s));
	for (char i = 'a'; i < 'z'; ++i) {
		int k = 0;
		for (auto b : s) {
			if (i == b) {
				k++;
			}
		}
		if (k != 0) {
			ans /= fact(k);
		}
	}
	cout << ans << endl;
}