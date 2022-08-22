#include<iostream>
#include<ctime>
using namespace std;
#define tab "\t"
//#define UNIQUE_1
#define UNIQUE_2
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	//int arr[n];
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };

	//���������� ������� ����������� ���������� �������
#ifdef UNIQUE_1
	for (int i = 0; i < n; i++)
	{
		bool unique;  //���� ������������
		do
		{
			arr[i] = rand() % n;
			unique = true;//������������ ��� ��������������� ���������� ��������� 
			//�����,�� ��� ��� ����� ���������:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}

			}
		} while (!unique);
	}

	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif // UNIQUE_1

#ifdef UNIQUE_2
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}

	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif // UNIQUE_2

	
}