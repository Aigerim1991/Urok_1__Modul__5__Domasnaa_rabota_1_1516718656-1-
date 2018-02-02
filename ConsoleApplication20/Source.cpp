#include <stdio.h>
#include <iostream>
#include<locale.h>
#include<time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int Z;
	do
	{
		cout << "Ввести номер задания: " << "\n";
		cin >> Z;
		switch (Z)
		{
		case 1:
		{
			const int M = 10;
			int a[M];
			for (int i = 0; i < M; i++)
			{
				a[i] = 5 + rand() % 10;
		cout <<"Массив: "<<i<<" со значением "<< a[i] << "\n";
			}
			}
		break;
		case 2:
		{
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 50 + rand() % 100;
				cout << "Массив: " << i << " со значением " << a[i] << "\n";
			}
			
		}
		break;
		case 3:
		{
			int a[8];
			for (int i = 8; i >=0; i--)
			{
				a[i] = 50 + rand() % 100;
				cout << "Массив с убыванием: " << i << " значение " << a[i] << "\n";
			}
			
			for (int i = 0; i <= 8; i++)
			{
				a[i] = 50 + rand() % 100;
				cout << "Массив с возрастанием: " << i << " значение " << a[i] << "\n";
			}
		}
		break;
		case 4:
		{
			int a[10], s, k;

			for (s = 0; s < 10; s++)
			{
				a[s] = -5 + rand() % 100;
				if (a[s] > 0)
					cout << "Массив: " << s << " с положительным значением " << a[s] << "\n";
				else cout << "Положительних чисел нет " << "\n";
			}
				cout << endl;
				for (k = 0; k < 10; k++)
				{
					a[k] = 10 + rand() % 100;
					if (a[k] % 2 == 0)
						cout << "Массив: " << k << " с четным числом: " << a[k] << "\n";
					else cout << "Четных чисел нет " << "\n";

				}
		          }
		break;
		case 5:
		{
int a[20], m,n,k,B;
			
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Ввести число В:" << "\n";
			cin >> B;
			for (int i = 0; i < 20; i++)
			{
              m = a[i] - 20;
				n = a[i] * 19;
				k = a[i] * B;
			}
			cout << " с уменьшеным на 20 значением "<< m << "\n";
			cout <<  " с умноженым на последний элемент значением " << n<< "\n";
			cout <<   " с увеличенным на В значением " << k << "\n";
		}
		break;	
		default:
			break;
		}

	} while (Z>0);










}