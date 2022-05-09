#include "Auto_Headder.h"
#include<iostream>

using namespace std;

Auto::Auto()
	: m_radzahl(0)
	, m_farbe("")
	, m_ps(0)
	, m_anzahl_sitze(0)
	, m_spritverbrauch(0)
	, m_tankinhalt(0)
	, m_tankgroesse(0)
{
}

Auto::Auto(int radzahl, const string& farbe, int ps, int anzahl_sitze, double spritverbrauch, double tankinhalt, double tankgroesse)
	: m_radzahl(radzahl)
	, m_farbe(farbe)
	, m_ps(ps)
	, m_anzahl_sitze(anzahl_sitze)
	, m_spritverbrauch(spritverbrauch)
	, m_tankinhalt(tankinhalt)
	, m_tankgroesse(tankgroesse)
{
}

Auto::Auto(const Auto& a)
	: m_radzahl(a.m_radzahl)
	, m_farbe(a.m_farbe)
	, m_ps(a.m_ps)
	, m_anzahl_sitze(a.m_anzahl_sitze)
	, m_spritverbrauch(a.m_spritverbrauch)
	, m_tankinhalt(a.m_tankinhalt)
	, m_tankgroesse(a.m_tankgroesse)
{
}

Auto::~Auto()
{
	cout << "Destruktor von " << this << " erfolgreich aufgerufen." << endl;

}

// Man muss von einem konstanten Spritverbrauch auf 100km ausgehen.
float Auto::fahren(float strecke)
{
	double max_reichweite = (m_tankinhalt * 100) / m_spritverbrauch;
	if (strecke > max_reichweite)
	{
		m_tankinhalt = 0;
		strecke = max_reichweite;
	}
	else
	{
		double neue_max_reichweite = max_reichweite - strecke;
		m_tankinhalt = (neue_max_reichweite * m_spritverbrauch) / 100;
	}
	return strecke;
}

int Auto::radzahl() const
{
	return m_radzahl;
}

string Auto::farbe() const
{
	return m_farbe;
}

int Auto::ps() const
{
	return m_ps;
}

int Auto::anzahl_sitze() const
{
	return m_anzahl_sitze;
}

double Auto::spritverbrauch() const
{
	return m_spritverbrauch;
}

double Auto::tankinhalt() const
{
	return m_tankinhalt;
}

double Auto::tankgroesse() const
{
	return m_tankgroesse;
}

bool Auto::tanken(double tankmenge)
{
	if (tankmenge > m_tankgroesse)
	{
		m_tankinhalt = m_tankgroesse;
		return false;
	}
	else
	{
		m_tankinhalt = tankmenge;
		return true;
	}
}