#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	int k;
	cin >> k;
	vector<int>num;
	for (int i = 0; i < k; ++i) {
		int a;
		cin >> a;
		num.push_back(a);
	}
	int sum;
	int max = 0;
	for (int i = 0; i < k-1; ++i) {
		int n = num[i];
		sum = 1;
		int coun = 0;
		for (int m = i+1; m < k; ++m) {
			if (n < num[m] && coun!=1){
				coun = 1;
				n = num[m];
				sum++;
			}
			else if (n > num[m] && coun != -1){
				coun = -1;
				n = num[m];
				sum++;
			}
			else {
				if (sum > max) {
					max = sum;
					sum = 1;
				}
			}
		}
		if (sum > max) {
			max = sum;
		}
	}
	cout << max << endl;
}

