// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
//Entrada
	int a;
	int b;
	int c;
//Restricciones
// Logica
	cout << "Ingresar a:" << endl;
	cin >> a;
	cout << "Ingresar b:" << endl;
	cin >> b;
	cout << "Ingresar c:" << endl;
	cin >> c;

	if (a > b && b > c) 
	 {
		cout << a << ";" << b << ";" << c;
	}
	if (b > a && a > c)
	{
		cout << b << ";" << a << ";" << c;
	}	
	if (c > b && b > a)
	{
		cout << c << ";" << b << ";" << a;
	}
	if (a > c && c > b)
	{
		cout << a << ";" << c << ";" << b;
	}
	if (b > c && c > a)
	{
		cout << b << ";" << c << ";" << a;
	}
	if (c > a && a > b)
	{
		cout << c << ";" << a << ";" << b;
	}
	_getch();
}

