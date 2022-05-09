#include <iostream>
#include "Header_Datum.h"1

using namespace std;

Datum::Datum(int tag, int monat, int jahr)
	: m_tag{ tag }
	, m_monat{ monat }
	, m_jahr{ jahr }
{
	if (datum_zaehler <= 10)
	{
		m_datum_nummer = ++datum_zaehler;
		if (plapperflag == true)
		{
			cout << "Allgemeiner Konstruktor von Objekt Nummer " << m_datum_nummer << endl;
		}
	}
	else
	{
		cout << "WARNUNG! Es wird versucht mehr als 10 Exemplare der Klasse Datum anzulegen." << endl;
	}
}

Datum::~Datum()
{
	cout << "Destruktor von Objekt Nummer " << m_datum_nummer << endl;
}

int Datum::IstSchaltJahr(int irgendeinJahr)
{
	if (plapperflag == true)
	{
		cout << "IstSchaltJahr() wurde aufgerufen" << endl;
	}
	if (((irgendeinJahr % 4 == 0) && (irgendeinJahr % 100 != 0)) || (irgendeinJahr % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Datum::Plappern(bool flag)
{
	if (flag == true)
	{
		cout << "Plappern() wurde aufgerufen" << endl;
	}
	plapperflag = flag;
}

int Datum::TagDesJahres()
{
	if (plapperflag == true)
	{
		cout << "TagDesJahres() wurde aufgerufen" << endl;
	}

	int anzahlTageImMonat[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int tagDesJahres = 0;

	for (int i = 1; i < m_monat; ++i)
	{
		tagDesJahres += anzahlTageImMonat[i];
	}
	tagDesJahres += m_tag;

	if (IstSchaltJahr(m_jahr) == true)
	{
		tagDesJahres += 1;
	}

	return tagDesJahres;
}
