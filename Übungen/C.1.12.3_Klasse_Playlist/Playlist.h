#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Aufzaehlung der in der Playlist verwalteten Musikstile
enum mkat { KLASSIK = 1, POP, ROCK, JUNGLE, HIPHOP, JAZZ };

// Struktur zur Haltung der Daten der titel in einer verketteten Liste
struct titel {
	titel* next;
	string  name;
	string  interpret;
	mkat kategorie;
};

class playlist
{
public:
	// oeffentliche Schnittstelle 
	playlist() { start_pointer = NULL; name = "mylist"; }
	~playlist() { AlleTitelLoeschen(); }
	void set_name(string n) { name = n; }
	string get_name() const { return name; }
	bool Abspielen(const string& titel = string());
	void TitelEinfuegen(string Name, string Interpret, mkat Kategorie);
	bool TitelLoeschen(string Name);
	bool TitelSuchenundAnzeigen(string Name, string& i, mkat& k);
	void ZeileEingeben(string befehlszeile, string& text);
	void AlleTitelAnzeigen();
	void PlaylistSpeichern();
	void PlaylistLaden();
	// oeffentliche Hilfsfunktionen
	void BenutzerdatenEingeben(string& titel, string& interpret, mkat& CD_kategorie);
	const char* enumkat_in_string(mkat eingabe);
private:
	// interne Hilfsfunktionen
	void AlleTitelLoeschen(void);
	bool int_in_enummkat(int eingabe, enum mkat& ausgabe);

	// Anker der verketteten Liste */
	struct titel* start_pointer;
	// Name der Playlist
	string name;
};
