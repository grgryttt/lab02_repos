// Lab_02.cpp
// < Шиманова Юлія >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 29

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);


	double a;
	double b;
	double z1;
	double z2;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	z1 = pow((cos(a) - cos(b)), 2) - pow((sin(a) - sin(b)), 2);
	z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	if (fabs(z1 - z2) < 0.000001)
	{
		cout << "Значення рівні" << endl;
	}
	else
	{
		cout << "Значення не рівні" << endl;
	}

	cin.get();
	return 0;

}