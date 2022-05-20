#include <iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int n, m, k;
	in >> n >> m >> k;
	int i, j, l, i1, j1;
	vector<vector<int>>a(n, vector<int>(m, 0));
	for (int l = 0; l < k; ++l) {
		in >> i >> j;
		a[i][j] = -1;
	}
	int coun = 1;
	for (int i = 1; i < n; ++i) {
		for (int j = 1; k < m; ++k) {
			if ((a[i-1][j]==coun || a[i][j-1]==coun || a[i+1][j]==coun|| a[i][j+1]==coun) && a[i][j]==0) {
				a[i][j] = coun;
			}
			else if (a[i][j] == 0) {
				a[i][j] = ++coun;

			}
		}
	}
	out << coun << endl;
	
}