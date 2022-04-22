#include "Matrix.h"
#include<iostream>

Matrix::Matrix(int k, int h) {
	n = k;
	m = h;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			std::cin >> arr[i][j];
		}
	}
}

void Matrix::FindMax(int& x, int& y)
{
	int max = -1;
	for (int i = 0; i < n;++i) {
		for (int k = 0; k < m;++k) {
			if (arr[i][k] > max) {
				max = arr[i][k];
				x = i;
				y = k;
			}
		}
	}
}

void Matrix::Go(int& x, int& y)
{
	if (x != 0) {
		for (int i = 0; i < m; ++i) {
			int temp = arr[x][i];
			arr[x][i] = arr[0][i];
			arr[0][i] = temp;
		}
	}
	if (y != 0) {
		for (int i = 0; i < n; ++i) {
			int temp = arr[i][y];
			arr[i][y] = arr[i][0];
			arr[i][0] = temp;
		}
	}
}

void Matrix::Out()
{
	std::cout << arr[n-1][m-1] << std::endl;
}


Matrix::~Matrix()
{
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}