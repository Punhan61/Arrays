#include<iostream>
using namespace std;
#define tab "\t"


void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B;
	
	for (int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << " ";
		}
	cout << endl;
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (j > i) B += A[i][j];
		}
		cout << "B= " << B << endl;
	}


}