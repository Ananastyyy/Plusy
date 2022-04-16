#include <iostream>
#include<fstream>
#include <limits>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	vector<long int> orig;
	vector<long int> copy;

	out.open("INPUT.TXT");
	in.open("OUTOUT.TXT");
	if (!in || !out)
	{
		cout << "Файл не открыт\n\n";
		return -1;
	}

	int n;
	in >> n;
	for (int i = 0; i < n;++i) {
		int n;
		in >> n;
		orig.push_back(n);
	}

	copy = orig;
	int min = numeric_limits<int>::max();
	sort(copy.begin(), copy.end());

	int a, b;
	for (int i = 0; i < copy.size()-1; ++i) {
		if (copy[i + 1] - copy[i] < min) {
			min = copy[i + 1] - copy[i];
			a = copy[i];
			b = copy[i + 1];
		}
	}
	int temp;
	out << min << endl;
	for (int i = 0; i < orig.size(); ++i) {
		if (orig[i] == a) {
			out << i+1 << " ";
		}
		if (orig[i] == b) {
			temp = b+1;
		}
	}
	out << temp << endl;
}

