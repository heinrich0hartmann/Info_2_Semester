#include<iostream>
#include<thread>
#include<string>
#include<Windows.h>

using namespace std;

void funktion(string s)
{
	int x = 0;
	while (true)
	{
		cout << s << ": " << x << endl;
		x++;
		Sleep(100);
	}
}

int main()
{
	thread t1(funktion, "Thread t1");
	thread t2(funktion, "Thread t2");
	thread t3(funktion, "Thread t3");
	thread t4(funktion, "Thread t4");
	thread t5(funktion, "Thread t5");
	thread t6(funktion, "Thread t6");
	thread t7(funktion, "Thread t7");
	thread t8(funktion, "Thread t8");
	thread t9(funktion, "Thread t9");

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
	t7.join();
	t8.join();
	t9.join();

	return 0;
}