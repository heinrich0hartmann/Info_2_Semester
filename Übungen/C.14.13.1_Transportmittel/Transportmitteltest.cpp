#include "Transportmittel.h"
using namespace std;

int main(void)
{
	// ==== Test Transportmittel ==== 
	Transportmittel bmw(2, 2);
	cout << bmw.gethoehe() << " Meter Hoehe." << endl;
	cout << bmw.getbreite() << " Meter Breite." << endl;
	bmw.bewegen("Norden");
	cout << endl;


	// ==== Test WasserTransportmittel ====
	WasserTransportmittel Boot(5, 4, 10000);
	cout << Boot.gethoehe() << " Meter Hoehe." << endl;
	cout << Boot.getbreite() << " Meter Breite." << endl;
	Boot.bewegen("Norden");
	Boot.anlegen("Hamburg");
	Boot.ablegen("Bremerhaven");
	cout << "Bruttoregistertonnen: " << Boot.get_bruttoregistertonnen() << endl;
	cout << endl;

	// ==== Test LandTransportmittel ====
	LandTransportmittel LKW(3, 3, 4);
	cout << LKW.gethoehe() << " Meter Hoehe." << endl;
	cout << LKW.getbreite() << " Meter Breite." << endl;
	LKW.bewegen("Norden");
	LKW.fahren(111);
	LKW.schieben(1);
	cout << "Radzahl: " << LKW.get_radzahl() << endl;
	cout << endl;

	// ==== Test Fahrrad ====
	Fahrrad Bike(1, 1, 2, 21);
	cout << Bike.gethoehe() << " Meter Hoehe." << endl;
	cout << Bike.getbreite() << " Meter Breite." << endl;
	cout << Bike.get_radzahl() << " Anzahl Raeder." << endl;
	cout << Bike.get_anzahlgaenge() << " Gaenge." << endl;
	Bike.bewegen("Norden");
	Bike.schieben(5);
	Bike.freihaendigfahren("freihaendig");
	cout << endl;

	// ==== Test Rikscha ====
	Rikscha risch(2, 1, 3, "rot");
	cout << risch.gethoehe() << " Meter Hoehe." << endl;
	cout << risch.getbreite() << " Meter Breite." << endl;
	cout << risch.get_radzahl() << " Anzahl Raeder." << endl;
	cout << risch.get_farbe() << " Farbe." << endl;
	risch.bewegen("Norden");
	risch.schieben(5);
	risch.ziehen(3);
	cout << endl;

	// ==== Test Auto ====
	Auto VW(4, 2, 4, 8.3);
	cout << VW.gethoehe() << " Meter Hoehe." << endl;
	cout << VW.getbreite() << " Meter Breite." << endl;
	cout << VW.get_radzahl() << " Anzahl Raeder." << endl;
	cout << VW.get_spritverbrauch() << " L pro 100km" << endl;
	VW.bewegen("Norden");
	VW.fahren(200);
	VW.tanken(10);
	system("pause");

	return 0;
}