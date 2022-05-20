#include<vector>
#include<string>
#include<iostream>
#include <stdlib.h>
#include<fstream>
using namespace std;

string Div(string a, int b) {
	string res = "";
	string temp="";
	int ost;
	while (a != "") {
		int div;
		int n = atoi(temp.c_str());
		while (n < b) {
			temp += a[0];
			a.erase(a[0]);
			n = atoi(temp.c_str());
		}
		div = n / b;
		res =+ div - '0';
		ost = n - div * b;
		temp = "";
		char o;
		while (ost != 0) {
			o = (ost % 10) - '0';
			temp.insert(temp.begin(), o);
			ost /= 10;
		}
	}
	return res;
}

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	string a;
	int b;
	in >> a >> b;
	out << Div(a, b);
	return 0;
}