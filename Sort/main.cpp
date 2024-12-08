#include<iostream>
using namespace std;
#define tab "\t"
#define SORT
void main()
{
	setlocale(LC_ALL, "");
#ifdef SORT
	const int n = 10;
	int arr[n];
	// Заполняем массив случайными чилами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

	//Вывод иходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сортировка массива:
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

	//Вывод отсортироного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SORT




}