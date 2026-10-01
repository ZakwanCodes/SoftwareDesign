#include <iostream>
#include <chrono>
#include <Windows.h>
using namespace std;

int main() {
	/*
int x = 888888;
x *= 1000000;
cout << x << endl;

unsigned int y = 888888;
y *= 100000;
cout << y << endl;

unsigned int z = 0;
z -= 1;
cout << z << endl;

int a = 123'456'789; //123,456,789 doesn't work in cpp "," is used as a separator

int b = 024;
cout << b << endl; //prints 20? 0 filled by a number is octal, 0x##### is a hexadecimal constant, 0b##### is a binary constant
//25U - 25 as unsigned integer

unsigned int c = 15; //some compliers may give warning so putting U after 15 makes it go away: unsigned int c = 15U;
cout << c << endl; */

//Question how much faster is integer calculation compared to floating point calculation
//price 51.74 float or 5174 int



	//Int multiply
	auto intMultStartTime = std::chrono::high_resolution_clock::now();

	int x = 1;
	
	for (int i = 0; i < 100'000'000; i++) {
		x = x * 1;
	}
	auto intMultEndTime = std::chrono::high_resolution_clock::now();
	auto diff1 = intMultEndTime - intMultStartTime;
	cout << "Integer Multiplication" << endl;
	cout << "Elapsed time = " << diff1 / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds.\n";

	//Int add
	auto intAddStartTime = std::chrono::high_resolution_clock::now();

	int y = 1;
	for (int i = 0; i < 100'000'000; i++) {
		y = y + 1;
	}
	auto intAddEndTime = std::chrono::high_resolution_clock::now();
	auto diff2 = intAddEndTime - intAddStartTime;
	cout << "Integer Addition" << endl;
	cout << "Elapsed time = " << diff2 / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds.\n";

	
	//Float multiply 
	auto floatMultStartTime = std::chrono::high_resolution_clock::now();

	float a = 1;

	for (int i = 0; i < 100'000'000; i++) {
		a = a  * 1;
	}

	auto floatMultEndTime = std::chrono::high_resolution_clock::now();
	auto diff3 = floatMultEndTime - floatMultStartTime;
	cout << "Float Multiplication" << endl;
	cout << "Elapsed time = " << diff3 / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds.\n";

	//Float add
	auto floatAddStartTime = std::chrono::high_resolution_clock::now();

	float b = 1;
	for (int i = 0; i < 100'000'000; i++) {
		b = b + 1;
	}	

	auto floatAddEndTime = std::chrono::high_resolution_clock::now();
	auto diff4 = floatAddEndTime - floatAddStartTime;
	cout << "Float Addition" << endl;
	cout << "Elapsed time = " << diff4 / std::chrono::nanoseconds(1) / 1'000'000'000. << " Seconds.\n";



	return 0;
}	