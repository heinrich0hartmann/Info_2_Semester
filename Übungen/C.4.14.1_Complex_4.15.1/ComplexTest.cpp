#include "Complex.h"

#include <iostream>

using namespace std;

//Das Testprogramm für die Klasse Complex und den überladenen Operator

int main()
{
	try
	{
		Complex z1(0, 0);
		Complex z2(1, 1);
		Complex z3(2, 2);
		cout << "z2 = 1+1i" << endl;
		cout << "z3 = 2+2i" << endl;
		//Eingabetest
		cout << "Geben Sie eine komplexe Zahl ein: ";
		cin >> z1;
		cout << "z1: " << z1;
		//Subtraktionstest
		Complex Z = z1 - z2;
		cout << "z1 - z2: " << Z; 
		//Divisionstest
		Z = z1 / z3;
		cout << "z1 / z3:" << Z; << endl;
		//invalid test
		z3.setRe(0);
		z3.setIm(0);
		Z = z1 / z3;

	}
	catch (invalid_argument &ex)
	{
		cout << ex.what() << endl;
	}
	system("pause");
	return 0;

}
