#include <iostream>
#include <cmath>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int n, i = 1;
	in >> n;
	for (int j = 2; i <= sqrt(n); ++j)
	{
		if (n % j == 0)
		{
			for (i <= sqrt(n); ++i; )
			{
				if (n % i == 0)
				{
					break;
				}
			}
			out << n / i << ' ' << n - (n / i) << endl;
			return 0;
		}
	}
	out << 1 << ' ' << n - 1 << endl;
	return 0;
}