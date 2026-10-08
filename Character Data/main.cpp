#include <iostream>
#include <format>
using namespace std;

string covertToUpperCase(const string& str);



int main() {

	
	/*string x, y;
	x = "I Like Cookies!!!";
	cout << covertToUpperCase(x) << endl;*/
	

	
	/*int x = 14;
	if (x = 12) x = 11;
	cout << x << endl;

	return 0; */


	/*for (double x = 0; x < 1; x += .1) {
		cout << x << endl;
	}
	for (double x = 0; x <= 1; x += 0.1) {
		cout << x << endl;
	}
	
	for (double x = 0; x < 1 - .000001; x += .1) {
		cout << x << endl;
	}*/


	//below are two examples of inf loop 
	//Floating-point numbers cannot always represent decimal values exactly. 
	// Because of rounding errors, a value such as 0.1 may not be stored exactly. 
	// Therefore, x may never become exactly 1.0, causing an infinite loop when the condition is x != 1.0.
	/* 1. double x = 0;

	while (x != 1.0) {
		x += 0.1;
		cout << x << endl;
	}*/

	/* 2. for (double x = 0; x != 1.0; x += 0.1) {
		x += 0.1;
		cout << x << endl;
	}*/
	
	//double uses binary floating-point, so many decimal numbers cannot be represented exactly. 
	//Therefore, y - x may not be exactly 0.01, even though it is displayed as 0.01 due to the default formatting/rounding of cout.
	//issue of round off error. 

	/*double x = 12345.02, y = 12345.03;
	cout << y - x << endl;
	cout << std::format("{:.20f}", y-x) << endl;*/
	

	//float has less precision than double, so decimal values cannot always be represented exactly.
	// When subtracting two very close floating - point numbers, the rounding error can become noticeable, causing the result to differ from the mathematically expected value.
	/*float  x = 12345.02, y = 12345.03;
	cout << y - x << endl;
	cout << std::format("{:.20f}", y - x) << endl;*/
	
	
	
	/*double z = 0;
	double y;
	cout << 23. / z << endl;*/
	

	//all print inf 
	//Floating - point division by zero produces infinity when the numerator is nonzero.
	//Operations with infinity can continue to produce infinity, such as multiplying or dividing it by a finite positive number.
	/*double z = 0;
	double y = 23. / z;	
	cout << y << endl;
	cout << y * 12 << endl;
	cout << y / 10000000 << endl;*/
	
	// different than float it crashesh no inf
	/*int z = 0;
	int y = 23 / z;
	cout << z  << endl;*/

	
	//0.0 / 0.0 produces NaN.
	// Any arithmetic operation involving NaN generally produces NaN, and NaN is not equal to itself, so y == y is false and y != y is true.	
	
	//double z = 0;
	//double y = z / z;
	//cout << y << endl;
	//cout << y * 12 << endl;
	//cout << y / 10000000 << endl;
	//cout << (y == y) << endl; // prints 0, NaN == NaN is false
	//cout << (y != y) << endl; // prints 1, NaN != NaN is true weird property 
	
	//int 0/0 gives error
	//int z = 0;
	//int y = z / z;
	//cout << z << endl;

	
	union Fred {
		int x;
		char y[4];
	};

	Fred a;
	a.x = 23;
	cout << "quack" << endl;
	cout << sizeof(Fred) << endl; //prints 4 since size of Union is the largest data type in the variables since they share memory location
	

	//prints 16 because char a needs to be padded so it takes the largest data type and mutiplies it by 2 so 16 
	//struct Ralph {
	//	char a; //1
	//	double b; //8
	//};

	//still prints 16 because 8 + 4 + 1 = 13 which is still within the padded memory 
	struct Ralph {
		char a; //1
		int k; //4
		double b; //8
	};

	cout << sizeof(Ralph) << endl; //you would expect 9 since char is 1 byte and double is 8 byte. but wrong, the output is 16




	return 0;
}


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
