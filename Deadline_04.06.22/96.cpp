#include<iostream>
#include<fstream>

using namespace std;
class Matrix {
public:
	int** arr;
	int n;
	int m;

public:
	Matrix(int k, int h);
	int Go(int x, int y);
	void Out();
	~Matrix();
};

int main()
{
	ifstream in("INPUT.TXT");
	ofstream out("OUTPUT.TXT");
	int n, m;
	in >> n >> m;
	int x, y;
	in >> y >> x;
	Matrix arr(n, m);
	out << arr.Go(x, y) << endl;
}

Matrix::Matrix(int n, int m) {
	this->n = n;
	this->m = m;
	arr = new int* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[m];
		for (int j = 0; j < m; ++j) {
			arr[i][j] = 1;
		}
	}
}

int Matrix::Go(int x, int y)
{
	arr[y - 1][x - 1] = 0;
	int size1 = n, size2 = m, sum = 0;
	bool bFlag = 0;
	string path = "right";
	n = 0, m = 0;
	while (true) {
		if (arr[n][m] == 0) {
			break;
		}
		if (path == "right") {
			while (m != size2 - 1 && arr[n][m + 1] == 1) {
				arr[n][m] = -1;
				m++;
				sum++;
			}
			if (m != size2 - 1 && arr[n][m + 1] == 0) {
				sum++;
				break;
			}
			path = "down";
		}
		if (path == "down") {
			while (n != size1 - 1 && arr[n + 1][m] == 1) {
				arr[n][m] = -1;
				n++;
				sum++;
			}
			if (n != size1 - 1 && arr[n + 1][m] == 0) {
				sum++;
				break;
			}
			path = "left";
		}
		if (path == "left") {
			while (m != 0 && arr[n][m - 1] == 1) {
				arr[n][m] = -1;
				m--;
				sum++;
			}
			if (m != 0 && arr[n][m - 1] == 0) {
				sum++;
				break;
			}
			path = "up";
		}
		if (path == "up") {
			while (n != 0 && arr[n - 1][m] == 1) {
				arr[n][m] = -1;
				n--;
				sum++;
			}
			if (n != 0 && arr[n - 1][m] == 0) {
				sum++;
				break;
			}
			path = "right";
		}
	}
	return sum + 1;
}

Matrix::~Matrix()
{
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete arr;
}