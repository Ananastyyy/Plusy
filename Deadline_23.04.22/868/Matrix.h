#pragma once

class Matrix {
	int** arr;
	int n;
	int m;

public:
	Matrix(int k, int h);
	void FindMax(int& x, int& y);
	void Go(int& x, int& y);
	void Out();
	~Matrix();
};


