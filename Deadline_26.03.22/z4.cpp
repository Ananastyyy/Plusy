#include <iostream>
#include <stack>
#include <algorithm>
#include<string>
#include<vector>
#include <cmath>
#include <stdlib.h>

using namespace std;


int main()
{
	vector<int> stones = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> temp;
	int now = 0;
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int max_now = 0;
		for (int k = 0; k < 3; ++k) {
			temp.push_back(stones[(now + k)%stones.size()]);
			if (stones[(now + k) % stones.size()] > max_now) {
				max_now = stones[(now + k) % stones.size()];
			}
		}
		for (int k = 0; k < 3; ++k) {
			auto it = stones.begin() + now;
			stones.erase(it);
		}
		int max = 0;
		int count = -1;
		for (int k = 0; k < stones.size(); ++k) {
			if (stones[k]<max_now && stones[k]>max) {
				max = stones[k];
				count = k;
			}
		}
		if (max == 0) {
			for (int k = 0; k < stones.size(); ++k) {
				if (stones[k]>max) {
					max = stones[k];
					count = k;
				}
			}
		}
		auto begin = temp.begin();
		auto end = temp.end();
		auto it = stones.begin() + count + 1;
		stones.insert(it, begin, end);
		now = (count + 4) % stones.size();
		temp.clear();
	}
	for (auto i : stones) {
		cout << i << " ";
	}
}