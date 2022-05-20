#include <iostream>
#include<fstream>
#include<algorithm>
using namespace std;


int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int sum, count, n = 1, s = 0;
	int arr[6] = { 0 };
	cin >> sum >> arr[1] >> arr[3] >> arr[5];
	while (true) {
		int count = 0;
		arr[n]--;
		if (arr[n] == 0) {
			count++;
		}
		n = (n + 2) % 6;
		arr[n]--;
		if (arr[n] == 0) {
			count++;
		}
		arr[n - 1]++;
		if (count != 2) {
			n = (n + 2) % 6;
		}
		else {
			break;
		}
	}
	for (int i = 0; i < 5; ++i) {
		s += arr[i];
	}
	if (sum >= s) {
		cout << "YES" << endl;
		for (int i = 0; i < 6; ++i) {
			cout << arr[i] << " ";
		}
	}
	else {
		cout << "NO" << endl;
	}
}