#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	vector<int>num;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		num.push_back(k);
	}
	sort(num.begin(), num.end());
	int s = num.size();
	cout << num[s - 1] * num[s - 2] * num[s - 3] << endl;
}
