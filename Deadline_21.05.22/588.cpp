#include <iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int k;
	cin >> k;
	int* arr = new int[k+1];
	for (int i = 0; i < k; ++i) {
		arr[i] = 0;
	}
	if (k == 1 || k == 2 || k == 3 || k == 6) {
		cout << -1 << endl;
	}
	else if (k == 4) {
		out << 2 << endl << 1 << endl << 0 << endl << 1;
		return 0;
	}
	else if (k == 5) {
		cout << 1 << endl << 2 << endl << 0 << endl << 0 << endl << 2 << endl;
	}
	else {
		arr[1] = 2;
		arr[2] = 1;
		arr[k - 4] = 1;
		arr[k] = k - 4;
		for (int i = 1; i <= k; ++i) {
			cout << arr[i] << endl;
		}
	}
	
}