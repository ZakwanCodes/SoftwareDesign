#include <iostream>
#include "findLargest.h"
using namespace std;
//#pragma pack(1) packs 1 byte now instead of printing 16 it prints 10

//struct Duck {
//	short x;
//	double y;
//
//	static int count;
//};

//void func(int &z) {
//	z = 5;
//}

int factorial(int x) {
	if (x == 0) return 1;

	return x * factorial(x - 1);
}

int main() {
	//struct Duck {
	//	short x;
	//	double y;
	//};
	//Duck x;
	//cout << sizeof(x) << endl; //prints 16 even tho we are expecting 10 (2 for  short, 8 for double

	//struct Duck2 {
	//	short x;
	//	int z;
	//	double y;
	//};
	//Duck x2;
	//cout << sizeof(x2) << endl; //also prints 16
	
	//Duck x3;
	//x3.x = 25;
	//cout << sizeof(x3) << endl;  //with static it still prints 16, static variables arent counted in size of struct

	//Reference variable
	//int x = 1;
	//int& y = x; //y references x.
	//y = 3; 

	//func(x);
	//cout << x;

	//functions
	double a[5] = { 1, 4, 7, 4, 3 };
	cout << "largest: " << findLargest(a, 5) << endl;

	int x = 5;

	cout << factorial(5) << endl;

	

	

	return 0;
}