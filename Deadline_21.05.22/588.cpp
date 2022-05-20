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
	int* arr = new int[k];
	for (int i = 0; i < k; ++i) {
		arr[i] = 0;
	}
	if (k == 1 || k == 2 || k == 3 || k == 6) {
		cout << -1 << endl;
	}
	else if (k == 5) {
		cout << 1 << endl << 2 << endl << 0 << endl << 0 << endl << 2 << endl;
	}
	else {
		arr[0] = 2;
		arr[1] = 1;
		arr[k - 4] = 1;
		arr[k-1] = k - 4;
		for (int i = 0; i < k; ++i) {
			cout << arr[i] << endl;
		}
	}
	
}