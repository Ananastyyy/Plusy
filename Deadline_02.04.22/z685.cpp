#include <iostream>
#include<fstream>
#include <algorithm>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("in.txt");
	out.open("out.txt");
	int a[3] = {};
	int b[3] = {};
	for (int i = 0; i < 3; ++i) {
		in >> a[i];
	}
	for (int i = 0; i < 3; ++i) {
		in >> b[i];
	}
	sort(a, a + 3);
	sort(b, b + 3);
	int s = 0;
	for (int i = 0; i < 3;++i) {
		s += a[i] * b[i];
	}
	out << s << endl;
}