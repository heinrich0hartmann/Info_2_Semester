#include<thread>
#include<iostream>

using namespace std;

int main()
{

	thread::id this_id = this_thread::get_id();
	cout << "Die Thread-ID lautet " << this_id << endl;
	system("pause");
	return 0;
}