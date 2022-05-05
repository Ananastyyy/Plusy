#include <iostream>
#include<algorithm>
#include<fstream>
#include<vector>

using namespace std;


int main()
{
	ifstream in;
	ofstream out;
	in.open("INPUT.TXT");
	out.open("OUTPUT.TXT");
	int n;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][k]!=-1 && arr[k][j]!=-1 && i != j) {
					if (arr[i][j] == -1) {
						arr[i][j] = arr[i][k] + arr[k][j];
					}
					else if (arr[i][k] + arr[k][j] < arr[i][j]) {
						arr[i][j] = arr[i][k] + arr[k][j];
					}
				}
			}
		}
	}
	int max = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	cout << max << endl;
}