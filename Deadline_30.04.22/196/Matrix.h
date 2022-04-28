#pragma once
using namespace std;

class Matrix {
public:
	int** arr;
	int n;
	int m;
	int size;
	int num;
public:
	Matrix(int& p);
	void Push(string path);
	void Out();
	~Matrix();
};