#include<iostream>
using namespace std;
//#define DEC_2_BIN

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_2_BIN
	int decimal; // десятичное число введенное пользователем
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_SIZE = 32; // int - 4 Byte = 32 bit
	bool bin[MAX_SIZE] = {}; // будет хранить разряды двоичного числа

	int i = 0; //счетчик разряда
	while (decimal)
	{
		bin[i] = decimal % 2; //получаем младший разряд двоичного числа
		decimal /= 2; //убиракм полученный разряд двоичного числа
		i++;
	}
	//i--;
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // DEBUG

	// Hexadecimal
	int decimal;
	cout << "Введите десятичное число "; cin >> decimal;
	const int n = 8;
	int hex[n] = {};
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
	}
	cout << "0x";  //это префикс,показывающий,что число записано в Hexadecimal
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
			default:cout << hex[i];
		}*/
		/*if (hex[i] < 10)
		{
			cout << hex[i];
		}
		else
		{
			cout << char(hex[i] + 55);
		}*/
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
	cout << endl;
}