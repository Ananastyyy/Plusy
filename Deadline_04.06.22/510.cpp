#include <vector>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int n, temp, a=3, b=1;
	in >> n;
	if (n % 2 != 0) {
		out << 0 << endl;
	}
	else {
		for (int i = 1; i < n / 2; ++i) {
			int temp = a;
			a = 4 * a - b;
			b = temp;
		}
		out << a << endl;
	}
}
