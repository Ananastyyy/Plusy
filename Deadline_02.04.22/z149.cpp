#include <iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	vector<int>res;
	in.open("in.txt");
	out.open("out.txt");
	int n;
	in >> n;
	for (int i = 0; i < n; ++i) {
		int a;
		in >> a;
		res.push_back(a);
	}
	for (int i = res.size() - 1; i >= 0; --i) {
		out << res[i] << " ";
	}
}

