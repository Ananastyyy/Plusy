#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("in.txt");
	out.open("out.txt");
	int a1, a2, a3;
	in >> a1 >> a2 >> a3;
	if (a1 + a2 == a3 || a1 + a3 == a2 || a2 + a3 == a1) {
		out << "YES!" << endl;
	}
	else {
		out << "NO!" << endl;
	}
}