#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("in.txt");
	out.open("out.txt");
	
	int n;
	in >> n;
	int temp = (n * n + 1) / 2;
	out << (temp - 1) / 9 * 10 + (temp - 1) % 9 + 1 << endl;
}

