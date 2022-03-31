#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("in.txt");
	out.open("out.txt");
    int a, b, c;
    in >> a >> b >> c;
    if (a <= b + c) {
        out << "NO" << endl;
    }
    else {
        out << "YES" << endl;
    }
}

