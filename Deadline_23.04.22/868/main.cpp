#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
	int x = 0;
	int y = 0;
	int n, m;
	cin >> n >> m;
	Matrix arr(n, m);
	arr.FindMax(x, y);
	arr.Go(x, y);
	arr.Out();
}
