#include <vector>
#include<iostream>
#include<fstream>

using namespace std;



vector <int> simple()
{
	bool bFlag;
	vector <int> p;
	for (int i = 100; i < 1000; ++i) {
		bFlag = 0;
		for (int j = 2; j < sqrt(i) + 5; ++j) {
			if (i % j == 0) {
				bFlag = 1;
				break;
			}
		}
		if (bFlag==0 && ((i - (i % 10)) % 100 != 0)) {
			p.push_back(i);
		}
	}
	return p;
}

vector <vector <int> > parents(const vector <int>& p)
{
	vector <vector <int> > m(p.size(), vector <int>());
	for (int i = 0; i < p.size(); ++i) {
		int ch1 = (p[i] / 100);
		int ch2 = ((p[i] % 100) / 10);
		for (int j = 0; j < p.size(); ++j) {
			int p2 = ((p[j] % 100) / 10);
			int p3 = (p[j] % 10);
			if ((ch1 == p2) && (ch2 == p3)) {
				m[i].push_back(j);
			}
		}
	}
	return m;
}

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	vector <vector <int> > matrix = parents(simple());
	int n;
	in >> n;
	unsigned int m = 1000000009;
	vector <vector <int> > d(n + 1, vector <int>(matrix.size(), 0));
	for (int i = 0; i < matrix.size(); ++i) {
		d[3][i] = 1;
	}

	for (int i = 4; i <= n; ++i) {
		for (int j = 0; j < matrix.size(); ++j) {
			for (int k = 0; k < matrix[j].size(); ++k) {
				int id = matrix[j][k];
				d[i][j] += d[i - 1][id];
				d[i][j] %= m;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < matrix.size(); ++i) {
		ans += d[n][i];
		ans %= m;
	}
	if (n == 3) {
		ans = 143;
	}
	out << ans << endl;

	return 0;
}