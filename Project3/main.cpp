#include<iostream>

// This makes the istringstream class available to you.
#include <sstream>

#include <string>
using namespace std;


int main() {

	//Allow users to enter a series of numbers and get their sum
	//User types -1 when done

	/*
	int sum = 0;
	while (true) {
		double x;
		cout << "Enter a number: ";
		if (!(cin >> x)) { //cin >> x returns 0 if error condition or end of data ex: x takes a strng "quack" instead of nimber
			cout << "You must type numbers" << endl;
			return 1;
		}
		if (x == -1) break;
		sum += x;
	}
	cout << "Sum = " << sum << endl;
	*/
	/*
	int sum = 0;
	while (true) {	
		double x;
		cout << "Enter a number: ";
		if (!(cin >> x)) { //cin >> x returns 0 if error condition or end of data ex: x takes a strng "quack" instead of nimber
			cout << "You must type numbers" << endl;
			continue;
		}
		if (x == -1) break;
		sum += x;
	}
	cout << "Sum = " << sum << endl;

	*/

	/*
	cout << std::format("I am called {1:s} my age is {0:.2f} years", 23.4, "Duck") << endl;


	printf("I am called %s my age is %.2f years\n", "Duck", 23.4);

	cout << std::format("Example 3: **{:3}**{:4}**{:6}**", 1, 2, 3) << endl;

	cout << std::format("Example 4: **{:>3}**{:<4}**{:^6}**", 1, 2, 3) << endl;

	cout << std::format("Example 5: **{:?>3}**{:?<4}**{:?^6}**", 1, 2, 3) << endl;

	cout << std::format("Example 6: {0:7.0f} {0:7.2f} {0:7.4f}", 3.14159) << endl;

	cout << std::format("Example 7: {0:7.0E} {0:7.2E} {0:7.4E}", 314.159) << endl;

	println(cout << std::format("Example 7: {0:7.0E} {0:7.2E} {0:7.4E}", 314.159));
	*/

	// This is an example string to parse.  It contains tabs and
	// spaces between elements.
	string buff = " Some test   data  for     you";

	// Here we create an istrstream object that is initialized to the buffer 
	// we want to parse.
//    istrstream input( buff.c_str(), buff.size() );  // This is older version  Use #include <strstream>
//    istringstream input( buff.c_str(), (int) buff.size() );  // This uses C style strings/
	istringstream input(buff);

	// In the following loop we will read each element from the buffer and display
	// it.  Note how we can determine if we are done.
	for (; ; ) {

		// CLear what was previously in ibuff.
		string ibuff;

		// Read the next element into ibuff.
		input >> ibuff;

		// This would work as an alternative way to see if we are done.
		if (!(input >> ibuff))
		{
		    cout << "---All done" << endl;
		    return 0;
		} 

		// if nothing was read, terminate.
		/*if (ibuff.size() == 0) {

			cout << "-----No more data" << endl;
			return 0;
		}*/
		cout << "ibuff=" << ibuff << "***" << endl;
	}





	return 0;
}