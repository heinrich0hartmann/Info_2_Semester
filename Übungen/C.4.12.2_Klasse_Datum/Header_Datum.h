#pragma once

class Datum
{
public:
	Datum(int tag, int monat, int jahr);

	~Datum();

	// Wenn irgendeinJahr ein Schaltjahr ist gibt die 
	// Methode den Wert 1 zurück, anonsten 0.
	static int IstSchaltJahr(int irgendeinJahr);

	// Versetzt die Klasse in einen geschwätzigen Modus.
	static void Plappern(bool flag);

	// Gibt den Tag des Jahres für das mit dem Kontruktor 
	// angelegte Datum zurück.
	int TagDesJahres(); // Soll istSchaltJahr benutzen.

private:
	int m_tag;
	int m_monat;
	int m_jahr;
	int m_datum_nummer;

	static int datum_zaehler;
	static bool plapperflag;
};
