// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

/* Test
Test1	
 c = 36*/

int main() { 
//Entrada
	int c;
//Restricciones
/*
	c > 0 y entero
*/
// Variables
	int n5;
	int n2;
	int n1;
//Logica
	cout << "Ingrese c: " << endl;
	cin >> c;

	n5 = (c / 5);
	n2 = ((c % 5) / 2);
	n1 = ((c % 5) % 2);

//Salida
	cout << "Número de monedas de 5:" << n5 << endl;
	cout << "Número de monedas de 2:" << n2 << endl;
	cout << "Número de monedas de 1:" << n1 << endl;
	_getch();
}

