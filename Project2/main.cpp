#include <iostream>
#include <string>

// Why is this statement necessary?  We will take it our and see lot of error messages.  We
// can stop using it and use std:: in front of every standard C++ function.  We will also do that.
using namespace std;

int main()
{
	// Declares two strings.  Note that we don't have to specify the size.
	string x, y;

	// Note that the space is allocated in the variable x on the assignnment
	x = "abcde";

	cout << x << endl;

	// This add the character 'z' to the string.
	x += 'z';

	cout << x << endl;

	// This appends the string "duck" to x.
	x += "duck";

	cout << x << endl;

	// We can find out the size of x - sizeof gives number of sytes in array.
	cout << "size of x: " << x.size() << endl;

	// You can see that we can treat a string as if it were an array.
	cout << "x[2] = " << x[2] << endl;

	// I show how we can copy into a character array. We can make it look like
	// a C style string.
	char duck[128];
	strcpy_s(duck, x.c_str());
	cout << duck << endl;

	cout << "x empty? " << x.empty() << endl;
	cout << "y empty? " << y.empty() << endl;

	// Here I delete the string.
	x.erase();

	cout << "x = " << x << endl;

	return 0;
}
