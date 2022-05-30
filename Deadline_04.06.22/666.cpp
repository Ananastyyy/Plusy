#include <vector>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	const int maxn = 26;
	unsigned int arr[26];
	long int k, n, i;
	in >> n;
	arr[0] = 1;
	for (int i = 1; i <= 25; ++i) {
		arr[i] = 1 + 2 * arr[i-1];
	}
	char res;
	for (int k = 26; k >= 1; --k) {
		if (n == 1) {
			res =(int)'a' + k - 1;
			out << res << endl;
			break;
		}
		else {
			if (n > arr[k - 2] + 1) {
				n = n - 1 - arr[k - 2];
			}
			else {
				n--;
			}
		}
	}
}
