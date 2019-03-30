// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

/*Test
 Test1
 t = 3879
*/

int main(){
// Entrada
	int t;
	int h;
	int m;
	int s;
// Restricciones
/* 
 0 <= s <=60
 0 <= m <=60
 0 <= h <=24
*/
//Logica
	cout << "tiempo en segundos:" << endl;
	cin >> t;

	h = t / 3600;
	m = (t % 3600) / 60;
	s = (t % 3600) % 60;
//Salida
	cout << "horas=" << h << ";";
	cout << "minutos=" << m << ";";
	cout << "segundos=" << s << ";"; 

_getch();

}

