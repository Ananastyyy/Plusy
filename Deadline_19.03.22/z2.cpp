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
	for (int i = 0; i < 10; ++i) {
		int a = -100 + rand() % 201;
		ran.push_back(a);
		sum += a;
		cout << a << " ";
	}
	double res = sum/10;
	cout <<"-------- "<< endl;
	cout << sum << endl;
	cout << ran.size() << endl;
	cout << res << endl;	
}

