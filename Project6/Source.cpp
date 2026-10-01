#include <iostream>
#include "Header.h"
using namespace std;

template <typename T>
class RCStack {

public:

    RCStack(int size = 10)     // The constructor sets the size of the stack.  It would be better to have a stack size that could change.
    {
        stkSize = size;
        stkPtr = new T[size];
        numElt = 0;
    }
    ~RCStack() { delete[] stkPtr; }  // We need the destructor to clean up the allocated space.

    bool push(const T& x)
    {
        if (numElt >= stkSize) return false;
        stkPtr[numElt++] = x;
        return true;
    }
    bool pop(T& item)
    {
        if (numElt == 0) return false;
        item = stkPtr[--numElt];
        return  true;
    }
    bool isEmpty() {
        if (numElt == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    T top() {
        return stkPtr[numElt-1];
    }

private:

    T* stkPtr;
    int numElt;
    int stkSize;
};



struct xxx {
	int a;
	int b;
};


int main() {
	int arr[5] = { 1,2,3,4,5 };
	cout << sortFunc(arr, 5) << endl;
	float arr2[3] = { 1.4, 5.5, 3.2 };
	cout << sortFunc(arr2, 3) << endl;
	string ducks[20] = { "me", "dog", "snake", "my sister" };      
	cout << sortFunc(ducks, 4) << endl;
	 
	xxx a[20];
	//cout << sortFunc(a, 20); ???

    RCStack<double> stack(5);
    stack.push(33);
    stack.push(14);
    double x;
    stack.pop(x);
    cout << x;

   /* while (!stack.isEmpty()) {
        int top = stack.top();
        cout << top << endl;
        stack.pop(top);
    }*/






	return 0;
}