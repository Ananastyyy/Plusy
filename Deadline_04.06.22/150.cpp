#include<iostream>
#include<fstream>

using namespace std;

int a[100][100], b[100], k, n;

void fr(int j) {
	if (b[j]) {
		return;
	}
	b[j] = 1; 
	k++;
	for (int i = 0; i < n; ++i) {
		if (a[j][i]) {
			fr(i);
		}
	}
		
}

int main() {
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int s, i, j;
	in >> n >> s; 
	s--;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; j++) {
			in >> a[i][j];
		}
	}
	b[s] = 1;
	for (j = 0; j < n; ++j) {
		if (a[s][j]) {
			fr(j);
		}
	}
	out << k << endl;
	return 0;
}

