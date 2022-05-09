#include<iostream>

#include "Header_Datum.h"

using namespace std;

int Datum::datum_zaehler{ 0 };
bool Datum::plapperflag{ false };

int main()
{
	Datum::Plappern(true);
	Datum heute(09, 05, 2022);
	cout << heute.TagDesJahres() << endl;

	Datum heute_in_einem_Jahr(09, 05, 2022); 
	cout << heute.TagDesJahres() << endl; 

	Datum* pgestern = new Datum(08, 05, 2022);
	cout << pgestern->TagDesJahres() << endl; 
	delete pgestern;

	system("pause");
	return 0;
}