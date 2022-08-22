#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	int arr[n];
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 10;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
		A[i][j] = arr[i];
		}
	}
			

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << "  ";
		}
		cout << endl;
	}
}