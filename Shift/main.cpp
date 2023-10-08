#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

	int shift;
	cout << "на сколько элементов сдвинуть? "; cin >> shift;
	cout << endl;

	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };

	// Вывод массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// Сдвиг массива влево
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	cout << endl;

	// Сдвиг массива вправо
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n-1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer; 
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	
		
}