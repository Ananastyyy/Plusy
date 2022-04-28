#include <iostream>
#include<string>
#include"Matrix.h"

using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int n;
	cin >> n;
	Matrix field(n);
	field.Push("right");
	field.Out();
}

