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
	else if (m % 13 == 1 || m % 13 == 2 || m % 13 == 12) {
		out << "WINTER" << endl;
	}
	else if (m % 13 == 3 || m % 13 == 4 || m % 13 == 5) {
		out << "SPRING" << endl;
	}
	else if (m % 13 == 6 || m % 13 == 7 || m % 13 == 8) {
		out << "SUMMER" << endl;
	}
	else if (m % 13 == 9 || m % 13 == 10 || m % 13 == 11) {
		out << "AUTUMN" << endl;
	}
}

