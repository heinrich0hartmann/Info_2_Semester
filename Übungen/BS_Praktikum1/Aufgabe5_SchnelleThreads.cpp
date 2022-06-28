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

void zeitmessung(int n)
{
	time_point<system_clock> start, end;
	start = system_clock::now();
	cout << "thread: " << fibonacci(n) << endl;
	end = system_clock::now();
	int elapsed_seconds = duration_cast<seconds>(end - start).count();
	cout << "threadzeit: " << elapsed_seconds << "s" << endl;

}
int main()
{
	thread t1(zeitmessung, 42);
	t1.join();
	time_point<system_clock> start, end;
	start = system_clock::now();
	cout << "main: " << fibonacci(42) << endl;
	end = system_clock::now();
	int elapsed_seconds = duration_cast<seconds>(end - start).count();
	cout << "main: " << elapsed_seconds << "s" << endl;

	system("pause");
	return 0;
}

//Beides sollte gleich schnell ablaufen und das tut es auch.
//die MainMethode ist ja ein Thread, der auf die gleiche Leistung wie ein extra erstellter Thread zugreift.