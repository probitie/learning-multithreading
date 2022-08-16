#include "tests.h"
#include <thread>
#include <chrono>

// https://habr.com/ru/company/otus/blog/549814/

int main(int argc, char* argv[])
{
	using namespace std::chrono_literals;
	std::thread myThread(
		[]()
		{
			for (int i{ 0 }; i < 3; i++)
			{
				std::cout << "thread 1 here!!\n";
				std::this_thread::sleep_for(10ms);
			}
		}
	);
	std::thread myThread2(
		[]()
		{
			for (int i{ 0 }; i < 3; i++)
			{
				std::cout << "thread 2 here!!\n";
				std::this_thread::sleep_for(10ms);
			}
		}
	);

	myThread.join();
	myThread2.join();

	return 0;


}