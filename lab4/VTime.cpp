#include <iostream>
#include "main.h"

using namespace std;

int main()
{
	// Test the constructor and output operator.
	VTime time1(2, 30, 15);

	cout << "Initial time: " << time1 << endl;

	// Test the getter functions.
	cout << "Hours: " << time1.getHours() << endl;
	cout << "Minutes: " << time1.getMinutes() << endl;
	cout << "Seconds: " << time1.getSeconds() << endl;

	// Test the setter functions.
	time1.setHours(5);
	time1.setMinutes(45);
	time1.setSeconds(30);

	cout << "\nAfter using setters: " << time1 << endl;

	// Test addSeconds().
	time1.addSeconds(90);

	cout << "After adding 90 seconds: " << time1 << endl;

	// Test the + operator.
	VTime time2 = time1 + 120;

	cout << "After using + operator to add 120 seconds: " << time2 << endl;

	// Test the - operator.
	VTime time3(1, 15, 0);

	int difference = time1 - time3;

	cout << "\nTime 1: " << time1 << endl;
	cout << "Time 3: " << time3 << endl;
	cout << "Difference in seconds: " << difference << endl;

	// Test setToNow().
	VTime currentTime;

	currentTime.setToNow();

	cout << "\nCurrent time: " << currentTime << endl;

	// Test adding enough seconds to move into the next hour.
	VTime time4(1, 59, 30);

	cout << "\nTime 4: " << time4 << endl;

	time4.addSeconds(90);

	cout << "Time 4 after adding 90 seconds: " << time4 << endl;

	// Test that the time wraps around after midnight.
	VTime time5(23, 59, 30);

	cout << "\nTime 5: " << time5 << endl;

	time5.addSeconds(90);

	cout << "Time 5 after adding 90 seconds: " << time5 << endl;

	return 0;
}