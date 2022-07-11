#include<iostream>
#include<thread>
#include<chrono>

using namespace std;
using namespace chrono;

int counter = 0;
bool thread1aktiv = true;
bool thread2aktiv = false;

void thread1()
{
	while (true)
	{

		if (thread1aktiv)
		{
			counter++;
			cout << "Thread1: " << counter << endl;
		}

		this_thread::sleep_for(milliseconds(500));
	}
}

void thread2()
{
	while (true)
	{
		if (thread2aktiv)
		{
			counter++;
			cout << "Thread2: " << counter << endl;
		}
		else if (counter > 50)
		{
			thread1aktiv = false;
		}
		this_thread::sleep_for(milliseconds(250));
	}
}

int main()
{

	cout << "Informatik 2 - Betriebssysteme - Praktikum 2 Aufgabe 4" << endl;
	cout << "Bitte eine Zahl eingeben" << endl;

	cin >> counter;

	thread t1(thread1);
	thread t2(thread2);

	while (true)
	{
		cin.get();
		thread2aktiv = thread1aktiv;
		thread1aktiv = !thread2aktiv;
	}

	t1.join();
	t2.join();

	return 0;
}