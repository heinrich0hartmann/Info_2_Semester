#include<iostream>
#include<thread>

using namespace std;

void t1_funktion(int n)
{
	while (n < 100)
	{
		cout << n << endl;
		n++;
	}
	return;
}

void t2_funktion(int m)
{
	while (m > 0)
	{
		cout << m << endl;
		m--;
	}
	return;
}
int main()
{
	int x;
	cout << "Herzlich willkommen!\nBitte geben Sie eine Zahl zwischen 1 und 100 ein:";
	cin >> x;
	thread t1(t1_funktion, x);
	thread t2(t2_funktion, x);
	t1.join();
	t2.join();

	system("pause");
	return 0;
}