#include<iostream>
#include<thread>
#include<string>
#include<Windows.h>
using namespace std;


void call_from_thread()
{
	for (int i = 1; i < 31; i++)
	{
		cout << i << " t1" << endl;
		Sleep(1000);
	}
	return;
}
void thread_id()
{
	thread::id this_id = this_thread::get_id();
	cout << "Die Thread-ID lautet " << this_id << endl;
}
int main()
{
	thread t1(call_from_thread);
	t1.join();

	thread t2(thread_id);
	t2.join();
	system("pause");
	return 0;

}