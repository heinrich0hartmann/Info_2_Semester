#include <iostream>

using namespace std;

const int x = 32;

// Konvertiert einen Kleinbuchtaben zu einem Groﬂbuchstaben.
char* zuGroﬂbuchstabe(char* a)
{
	a[0] = a[0] & ~x; // Hier kommen die Bin‰roperatoren zum Einsatz
	return a;
}

// Konvertiert einen Groﬂbuchstaben zu einem Kleinbushtaben.
char* zuKleinbuchstabe(char* a)
{
	a[0] = a[0] | x; // Hier kommen die Bin‰roperatoren zum Einsatz
	return a;
}

// Programm funktioniert nicht f¸r Umlaute, w‰re gut zu wissen, ob das gefordert ist.
int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cout << endl << "Geben Sie einen Klein- oder Gro\341buchstaben ein." << endl << endl;
		return 1;
	}
	char* buchstabe(argv[1]);
	if (buchstabe[1] != '\0')
	{
		cout << endl << "Geben Sie einen Klein- oder Groﬂbuchstaben ein." << endl << endl;
		return 1;
	}

	if (buchstabe[0] > 97)
	{
		cout << zuGroﬂbuchstabe(buchstabe) << endl;
		return 0;
	}
	else
	{
		cout << zuKleinbuchstabe(buchstabe) << endl;
		return 0;
	}
	// Zeichen war nicht aus dem Alphabet.
	cout << endl << "Kein Zeichen aus dem Alphabet oder Umlaut wurde eingegeben!" << endl << endl;
	system("pause");
	return 1;
}

