#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	vector<int>sp;
	cin >> n >> m;
	int num = 2;
	int coun = 0;
	int temp;
	for (int i = 1; i <= n; ++i) {
		sp.push_back(i);
	}
	while (sp.size() > 1) {
		temp = 1;
		for (int i = 1; i <= sp.size(); ++i) {
			if (temp%2==0 && sp[i-1] == m) {
				cout << num << endl;
				coun = 1;
				break;
			}
			else if (temp % 2 == 0) {
				sp.erase(sp.begin() + (i-1));
				num++;
				i++;
			}
			temp++;
		}
		if (coun == 1) {
			break;
		}
	}
	if (sp.size() == 1) {
		cout << n << endl;
	}
}

