#include <iostream>
#include<list>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	list<int>ran;
	srand(time(NULL));
	double sum = 0;
	for (int i = 0; i < 10000; ++i) {
		int a = -100 + rand() % 201;
		ran.push_back(a);
		sum += a;
	}
	double res = sum/10000;
	cout << res << endl;	
}

