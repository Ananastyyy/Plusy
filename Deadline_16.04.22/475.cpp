#include <iostream>
#include<cmath>;
#include<fstream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	vector<long int> num;

	out.open("in.txt");
	in.open("out.txt");
	if (!in || !out)
	{
		cout << "Файл не открыт\n\n";
		return -1;
	}

	while (!in.eof()) {
		long int n;
		in >> n;
		num.push_back(n);
	}
	sort(num.begin(), num.end());
	int sum = num[0] - num[1];
	int count = 0;
	for (int i = 2; i < num.size() - 1; ++i) {
		if (num[i] - num[i + 1] != sum) {
			out << "NO" << endl;
			count = 1;
			break;
		}
	}
	if (count != 1) {
		out << "YES" << endl;
	}
}

