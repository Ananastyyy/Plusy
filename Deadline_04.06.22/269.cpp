#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main() {
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	vector<int>d1;
	vector<int>d2;
	string t1, t2;
	in >> t1 >> t2;
	for (int i = 0; i < size(t1); ++i) {
		d1.push_back(t1[i] - '0');
	}
	for (int i = 0; i < size(t2); ++i) {
		d2.push_back(t2[i] - '0');
	}
	int m = d1.size()+d2.size(), Flag = 0, d1coun = d1.size() - 1, d2coun = 0, it1, it2, sum;
	while (d1coun != 0 || d2coun != d2.size()) {
		sum = 0;
		Flag = 0;
		it1 = d1coun;
		it2 = d2coun;
		while (it1 != d1.size() && it2 != d2.size()) {
			if (d1[it1] + d2[it2] > 3) {
				Flag = 1;
			}
			++it1;
			++it2;
			sum++;
		}
		if (Flag == 0) {
			if (d1.size() + d2.size() - sum < m) {
				m = d1.size() + d2.size() - sum;
			}	
		}
		if (d1coun != 0) {
			d1coun--;
		}
		else {
			d2coun++;
		}
	}
	out << m << endl;
}
