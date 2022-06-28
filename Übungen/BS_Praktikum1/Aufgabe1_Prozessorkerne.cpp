#include <iostream>
#include <thread>

using namespace std;

int main()
{
	static unsigned int n;
	n = thread::hardware_concurrency();
	cout << "Es wurden " << n << " Prozessor-Kerne gefunden!" << endl;
	system("pause");
	return 0;

}