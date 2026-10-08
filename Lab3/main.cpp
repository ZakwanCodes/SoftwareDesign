#include <iostream>
using namespace std;

long long fib(long long n) {
	if (n == 2 || n == 1) return 1;

	return fib(n - 1) + fib(n - 2);

	
}

int main() {

	for (int i = 1; i <= 40; i++) {
		cout << "term " << i << " = " << fib(i) << endl;
	}


	return 0;
}