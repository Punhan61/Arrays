#include<iostream>
using namespace std;
#define tab "\t"
#define delimitr "\n-----------------\n"
//#define BASICS 
//#define MATRIX_ADDITION

void main()
{
	setlocale(LC_ALL, "");
#ifdef BASICS
	const int ROWS = 8;// количество строк
	const int COLS = 5;// количество элементов строки(столбцов)
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif // BASICS

	//       TheMatrix
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	// выводим матрицу на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimitr << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimitr << endl;
	//      Matrix addition

	int C[ROWS][COLS]{};//матрица результат
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
		   
			for (int k = 0; k < COLS; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}



#ifdef MATRIX_ADDITION
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif // MATRIX_ADDITION

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}

}
