#include <iostream>
#include<fstream>
#include<map>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("in.txt");
	out.open("out.txt");
	map<char, int>field;
	field['X'] = 0;
	field['Y'] = 0;
	field['Z'] = 0;
	int N;
	in >> N;
	char L;
	int P;
	for (int i = 0; i < N; ++i) {
		cin >> L >> P;
		field[L] += P;
	}
	int a = 0;
	int b = 0;
	int min = 0;
	if (abs(field['X']) <= abs(field['Y']) && abs(field['X']) <= abs(field['Z'])) {
		a= field['Y'];
		b= field['Z'];
		min= field['X'];
	}
	else if (abs(field['Y']) <= abs(field['X']) && abs(field['Y']) <= abs(field['Z'])) {
		a = field['X'];
		b = field['Z'];
		min=field['Y'];
	}
	else {
		a = field['Y'];
		b = field['X'];
		min = field['Z'];
	}
	if (min*min*2 == (a*a + b*b)) {
		out << 0;
	}
	else {
		out << a + b;
	}
}

