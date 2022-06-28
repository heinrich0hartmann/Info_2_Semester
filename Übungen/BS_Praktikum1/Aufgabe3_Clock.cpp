#include<iostream>
#include<thread>
#include<chrono>

using namespace std;
using namespace chrono;

// Funktion um eine Fibonacci-Folge zu bererchnen
int fibonacci(int n)
{
	if (n < 3) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	// Zwei Zeitpunkte zur Zeitmessung
	time_point<system_clock> start, end;

	// start-Zeitpunkt die aktulle Uhrzeit zuweisen
	start = system_clock::now();
	// Fibonaccizahlen berechnen
	int result = fibonacci(42);
	// end-Zeitpunkt die aktuelle Uhrzeit zuweisen
	end = system_clock::now();
	// Berechnung der benoetigten Sekunden
	int elapsed_seconds = duration_cast<seconds>(end - start).count();
	// Ausgabe
	cout << "finished computation, elapsed time: "
		<< elapsed_seconds << "s" << endl;
	// Blockieren des Prozesses
	system("pause");

	return 0;
}