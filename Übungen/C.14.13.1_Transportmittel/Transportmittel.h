#pragma once
#include<string>
#include<iostream>
using namespace std;

// Basisklasse
class Transportmittel
{
private:
	double hoehe;
	double breite;
public:
	Transportmittel(double H, double B) : hoehe(H), breite(B)
	{
		cout << "Allgemeiner Konstruktor von Transportmittel." << endl;
	}
	void bewegen(string richtung)
	{
		cout << "In Richtung " << richtung << " bewegen." << endl;
	}
	double gethoehe() const { return hoehe; }
	double getbreite() const { return breite; }
};

class LandTransportmittel : public Transportmittel
{
private:
	int radzahl;
public:
	LandTransportmittel(double H, double B, int rz) : Transportmittel(H, B), radzahl(rz)
	{
		cout << "Allgemeiner Konstruktor von LandTransportmittel." << endl;
	}
	int get_radzahl() const { return radzahl; }
	void fahren(double km)
	{
		cout << km << " Kilometer gefahren." << endl;
	}
	void schieben(double km)
	{
		cout << km << " Kilometer geschoben." << endl;
	}
};

class WasserTransportmittel : public Transportmittel
{
private:
	int bruttoregistertonnen;
public:
	WasserTransportmittel(double H, double B, int brt) : Transportmittel(H, B), bruttoregistertonnen(brt)
	{
		cout << "Allgemeiner Konstruktor von WasserTransportmittel." << endl;
	}
	int get_bruttoregistertonnen() const { return bruttoregistertonnen; }
	void anlegen(string Anlegehafen)
	{
		cout << "Anlegen in Hafen " << Anlegehafen << endl;
	}
	void ablegen(string Ablegehafen)
	{
		cout << "Ablegen von Hafen " << Ablegehafen << endl;
	}
};

class Fahrrad : public LandTransportmittel
{
private:
	int anzahlgaenge;
public:
	Fahrrad(double H, double B, int rz, int ag) : LandTransportmittel(H, B, rz), anzahlgaenge(ag)
	{
		cout << "Allgemeiner Konstruktor von Fahrrad." << endl;
	}
	void freihaendigfahren(string name)
	{
		cout << "Ich fahre: " << name << endl;
	}
	void schieben(double km)
	{
		cout << km << " Kilometer Fahrrad geschoben." << endl;
	}
	int get_anzahlgaenge() const { return anzahlgaenge; }
};

class Rikscha : public LandTransportmittel
{
private:
	string farbe;
public:
	Rikscha(double H, double B, int rz, string f) : LandTransportmittel(H, B, rz), farbe(f)
	{
		cout << "Allgemeiner Konstruktor von Rikscha." << endl;
	}
	void ziehen(int anzahlpersonen)
	{
		cout << "Wird von " << anzahlpersonen << " Personen geschoben." << endl;
	}
	void schieben(double km)
	{
		cout << km << " Kilometer Rikscha geschoben." << endl;
	}
	string get_farbe() const { return farbe; }
};

class Auto : public LandTransportmittel
{
private:
	double spritverbrauch;
public:
	Auto(double H, double B, int rz, double sv) : LandTransportmittel(H, B, rz), spritverbrauch(sv)
	{
		cout << "Allgemeiner Konstruktor von Auto." << endl;
	}
	void fahren(double km)
	{
		cout << km << " km Auto gefahren." << endl;
	}
	void tanken(int liter)
	{
		cout << liter << " Liter getankt." << endl;
	}
	double get_spritverbrauch() const { return spritverbrauch; }
};

