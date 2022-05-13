#include <iostream>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;


int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	vector<int>res;
	int n, m;
	in >> n >> m;
	int t;
	for (int i = 0; i < n; ++i) {
		in >> t;
		res.push_back(t);
	}
	sort(res.begin(), res.end());
	while (m != 0) {
		res[0]++;
		m--;
		sort(res.begin(), res.end());
	}
	out << res[0] << endl;
}