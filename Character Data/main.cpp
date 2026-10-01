#include <iostream>
#include <format>
using namespace std;

//string covertToUpperCase(const string& str);



int main() {

	/*
	string x, y;
	x = "I Like Cookies!!!";
	cout << covertToUpperCase(x) << endl;
	*/

	/*
	int x = 14;
	if (x = 12) x = 11;
	cout << x << endl;

	return 0; */

	/*
	for (double x = 0; x < 1 - .000001; x += .1) {
		cout << x << endl;
	}*/

	/*
	double x = 12345.02, y = 12345.03;
	cout << y - x << endl;
	cout << std::format("{:.20f}", y-x) << endl;
	*/

	/*
	float  x = 12345.02, y = 12345.03;
	cout << y - x << endl;
	cout << std::format("{:.20f}", y - x) << endl;
	*/
	
	/*
	double z = 0;
	double y;
	cout << 23. / z << endl;
	*/

	/*
	double z = 0;
	double y = 23. / z;	
	cout << y << endl;
	cout << y * 12 << endl;
	cout << y / 10000000 << endl;
	*/

	/*
	double z = 0;
	double y = z / z;
	cout << y << endl;
	cout << y * 12 << endl;
	cout << y / 10000000 << endl;
	cout << (y == y) << endl;
	cout << (y != y) << endl;
	*/

	/*
	union Fred {
		int x;
		char y[4];
	};

	Fred a;
	a.x = 23;
	cout << "quack" << endl;
	*/

	struct Ralph {
		char a;
		int k;
		double b;
	};

	cout << sizeof(Ralph) << endl; //you would expect 9 since char is 1 byte and double is 8 byte. but wrong, the output is 16




	return 0;
}

/*
string covertToUpperCase(const string& str) {
	string y;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			//lowercase
			y += str[i] + ('A' - 'a');
		}
		else {
			//uppercase/any other character
			y += str[i];
		}
	}
	return y;

}
*/