#include<iostream>
#include<queue>
#include<fstream>

using namespace std;

int main() {
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int n, i, j, k, f, s; 
	queue<int> q;
	in >> n; 
	int** a = new int*[n];
	int* d = new int[n];
	for (i = 0; i < n; ++i)
	{
		d[i] = 1000000000;
		a[i] = new int[n];
		for (j = 0; j < n; ++j)
			in >> a[i][j];
	}
	in >> s >> f; 
	s--; 
	f--;
	d[s] = 0; q.push(s);
	while (!q.empty()) {
		i = q.front(); 
		q.pop();
		for (j = 0; j < n; ++j)
			if (a[i][j] && d[j] > d[i] + 1) {
				d[j] = d[i] + 1; 
				q.push(j);
			}
	}
	if (d[f] < 1000000000) {
		out << d[f] << endl;
	}
	else {
		out << -1 << endl;
	}
	return 0;
}