#include <iostream>
#include "Auto_Headder.h"
#include<Windows.h>

using namespace std;
Auto mini{ 4, "schwarz", 69, 4, 6.8, 30, 30 };

int main()
{

	int s;
	Auto audi{ 4, "rot", 300, 5, 7, 40, 40 };
	Auto* vw = new Auto{ 4, "rot", 75, 5, 20, 2, 35 };
	delete vw;
	Auto bmw(audi);
	cout << bmw.anzahl_sitze() << endl;
	Sleep(2000);
	while (true)
	{
		system("cls");
		cout << "R\204der:\t\t\t" << audi.radzahl() << endl;
		cout << "Farbe:\t\t\t" << audi.farbe() << endl;
		cout << "PS:\t\t\t" << audi.ps() << endl;
		cout << "Sitze:\t\t\t" << audi.anzahl_sitze() << endl;
		cout << "Verbrauch L/100km:\t" << audi.spritverbrauch() << endl;
		cout << "Tankgr\224sse in L:\t" << audi.tankgroesse() << endl;
		cout << "Tankinhalt in L:\t" << audi.tankinhalt() << endl;

		if (audi.tankinhalt() == 0)
		{
			double y;
			cout << "Tankinhalt leer. Wie viel Liter m\224chten Sie tanken?\t";
			cin >> y;
			if (y < 10)
			{
				cout << "Geizhals!" << endl;
			}
			audi.tanken(y);
			if (audi.tanken(y) == false)
			{
				cout << "Zu viel getankt. Tats\204chlich aufgef\201llte Menge: " << audi.tankinhalt() << "L." << endl;
			}
			else
				cout << "Neuer Tankinhalt: " << audi.tankinhalt() << "L." << endl;

		}

		cout << "\nWie viel Kilometer m\224chten Sie fahren?\t";
		cin >> s;
		float strecke = audi.fahren(s);
		if (strecke < s)
		{
			cout << "Tankinhalt nicht ausreichend. Stattdessen gefahrene Strecke:\t" << strecke << "km." << endl;
		}
		else
		{
			cout << "Strecke " << s << " km gefahren. Verbleibender Tankinhalt: " << audi.tankinhalt() << "L." << endl;
		}

		Sleep(2500);
	}
	system("Pause");

	return 0;
}