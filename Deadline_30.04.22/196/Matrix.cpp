#include<iostream>
#include"Matrix.h"

using namespace std;

Matrix::Matrix(int& p)
{
	this->n = 0;
	this->size = p;
	this->num = 1;
	this->m = 0;
	arr = new int* [size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			arr[i][j] = 0;
		}
	}
	arr[0][0] = 1;
}

void Matrix::Push(string path)
{
	while (num != (size*size)) {
		if (path == "right") {
			while (m != size - 1 && arr[n][m + 1] == 0) {
				m++;
				arr[n][m] = ++num;
			}
			Push("down");
		}
		if (path == "down") {
			while (n != size - 1 && arr[n + 1][m] == 0) {
				n++;
				arr[n][m] = ++num;
			}
			Push("left");
		}
		if (path == "left") {
			while (m != 0 && arr[n][m - 1] == 0) {
				m--;
				arr[n][m] = ++num;
			}
			Push("up");
		}
		if (path == "up") {
			while (n != 0 && arr[n - 1][m] == 0) {
				n--;
				arr[n][m] = ++num;
			}
			Push("right");
		}
	}
}

void Matrix::Out()
{
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; j++) {
			cout.width(3);
			cout << arr[i][j] << " ";
		}
		cout << " " << endl;
	}
}

Matrix::~Matrix()
{
	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
