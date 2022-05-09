#pragma once

class Datum
{
public:
	Datum(int tag, int monat, int jahr);

	~Datum();

	// Wenn irgendeinJahr ein Schaltjahr ist gibt die 
	// Methode den Wert 1 zur�ck, anonsten 0.
	static int IstSchaltJahr(int irgendeinJahr);

	// Versetzt die Klasse in einen geschw�tzigen Modus.
	static void Plappern(bool flag);

	// Gibt den Tag des Jahres f�r das mit dem Kontruktor 
	// angelegte Datum zur�ck.
	int TagDesJahres(); // Soll istSchaltJahr benutzen.

private:
	int m_tag;
	int m_monat;
	int m_jahr;
	int m_datum_nummer;

	static int datum_zaehler;
	static bool plapperflag;
};
