#pragma once

#include <string>

using namespace std;

class Auto
{
public:
	// Standard-Konstruktor
	Auto();

	// Allgemeiner-Konstruktor
	Auto(int radzahl, const string& farbe, int ps, int anzahl_sitze, double spritverbrauch, double tankinhalt, double tankgroesse);

	// Kopier-Konsruktor
	Auto(const Auto& a);

	//Destruktor
	~Auto();

	//Methode fahren()
	float fahren(float strecke);

	// Getter-Methoden
	int radzahl() const;
	string farbe() const;
	int ps() const;
	int anzahl_sitze() const;

	// In Liter pro 100km 
	double spritverbrauch() const;

	double tankinhalt() const;
	double tankgroesse() const;

	// Setter-Methode
	bool tanken(double tankinhalt);

private:
	int m_radzahl;
	string m_farbe;
	int m_ps;
	int m_anzahl_sitze;
	double m_spritverbrauch;
	double m_tankinhalt;
	double m_tankgroesse;
};
