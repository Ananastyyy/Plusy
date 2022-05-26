#include <iostream>
#include <cmath>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	unsigned int n, a;
	in >> n;
	a = n / 3;
	n %= 3;
	if (n == 1) {
		a -= 1;
		n += 3;
	}
	if (n > 1) {
		out << 2 << " " << n / 2 << " ";
	}
	if (a > 0) {
		out << 3 << " " << a << endl;
	}
}
