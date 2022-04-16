#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("in.txt");
	out.open("out.txt");
	int m;
	in >> m;
	if (m < 1 || m>12) {
		out << "ERROR!" << endl;
	}
	else if (m == 1 || m  == 2 || m  == 12) {
		out << "WINTER" << endl;
	}
	else if (m  == 3 || m  == 4 || m  == 5) {
		out << "SPRING" << endl;
	}
	else if (m  == 6 || m  == 7 || m  == 8) {
		out << "SUMMER" << endl;
	}
	else if (m  == 9 || m  == 10 || m  == 11) {
		out << "AUTUMN" << endl;
	}
}

