// Lab_02.cpp
// Бухарінов Максим Сергійович
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 2

#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	double Pi = 4 * atan(1.); // число пі
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	z1 = cos(x) + sin(x) + cos(3*x) + sin(3*x);
	z2 = 2*sqrt(2.) * cos(x) * sin( Pi/4 + 2*x);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}