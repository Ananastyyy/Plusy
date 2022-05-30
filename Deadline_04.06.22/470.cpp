#include<iostream>
#include<fstream>

using namespace std;


int main() {
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	long int s[100][100];
	int h, w, i, j, a, b, c, d;
	long int n, k, x;
	in >> h >> w >> n;
	for (int i = 0; i <= w; ++i) {
		s[i][0] = 0;
	}
	for (int j = 0; j <= h; ++j) {
		s[0][j] = 0;
	}
	for (j = 1; j <= h; ++j) {
		for (i = 1; i <= w; ++i) {
			in >> x;
			s[i][j] = x + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
		}
	}
	for (k = 1; k <= n; ++k) {
		in >> a >> b >> c >> d;
		out << s[d][c] - s[d][a - 1] - s[b - 1][c] + s[b - 1][a - 1] << endl;
	}
}

