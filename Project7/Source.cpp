//
//  This is an example of some of the features of vectors.
//
#include <iostream>

// The following is needed if you compile for Visual Studio 6.0.  When we 
// compile with the debugger, there are a number of warnings generated 
// because of the size of function names in STL.  The following statement tells 
// the compiler not to generate these messages.   No longer needed but useful for
// other things.  So, this is a reminder/
#pragma warning(disable:4786)

// The following include file, contains the definition of the vector container.
#include <vector>
#include <string>
#include <algorithm>

// Remember about standard namespaces.
using namespace std;

int main()
{
    // We define a vector of strings.  Note: we do not have to specify an initial size.
    // Better to do if we know the size.  Reserve function also works.
    vector <string> v1, v2;
    vector<int> v3;

    // The capacity is how much space is allocated and not how much is used.
    v2.push_back("Vic");
    cout << v2.capacity() << "Size: " << v2.size() << endl;
    v2.push_back("Duck");
    cout << v2.capacity() << "Size: " << v2.size() << endl;
    v2.push_back("Dog");
    cout << v2.capacity() << "Size: " << v2.size() << endl;
    //v3.reserve(17); ??better 
    // Here we are seeing how the allocation grows.
    for (int i = 0; i < 17; i++) {
        v3.push_back(i);
        cout << "Size = " << v3.size()
            << "  Capacity = " << v3.capacity() << endl;
    }
    v3.shrink_to_fit();
    cout << "Size = " << v3.size()
        << "  Capacity = " << v3.capacity() << endl;

    // Adding data to a vector.  Even though subcripts are defined, we can't use them to 
    // add to the size of the array.  We must instead use the push_back function.
    v1.push_back("quack");
    v1.push_back("mallard");
    v1.push_back("duck");
    v1.push_back("vic");

    // Display the contents of the vector.  Note we can use subscripts.
    cout << endl << "Display by using subscripts" << endl;
    for (int i = 0; i < (int)v1.size(); i++) {

        cout << v1[i] << endl;
    }
    // Using iterators to display the contents of the vector.
    //vector<string>::iterator p;
    cout << endl << "Display using iterator" << endl;
    for (vector<string>::iterator p = v1.begin(); p != v1.end(); p++) {

        cout << *p << endl;
    }
    cout << endl << "Display using reverse iterator" << endl;
    for (vector<string>::reverse_iterator r = v1.rbegin(); r != v1.rend(); r++) {

        cout << *r << endl;
    }
    // Display using newer format for the for statement.  Try changing v and 
    // see what happens.  How do we allow the change to be made to the vector?
    cout << endl << "Displaying using newer format for the \"for\" statement" << endl;
    for (auto v : v1)
    {
        cout << v << endl;
    }
    // For fun, lets replace vic by grump.  Why did I cast to the string data type?  What else
    // could I had done?
    replace(v1.begin(), v1.end(), (string)"vic", (string)"grump");
    replace(v1.begin(), v1.end(), "vic"s, "grump"s);


    // Demonstration that assignment works among vectors.
    v2 = v1;
    cout << endl << "Display v2" << endl;
    for (int i = 0; i < (int)v2.size(); i++) {

        cout << v2[i] << endl;
    }

    // Show how to empty an array.  Demonstrate the effect of "shrink_to_fit"
    cout << "Size of vector v2 before clear: " << v2.size() << "   Capacity  = " << v2.capacity() << endl;
    v2.clear();
    cout << "Size of vector v2 after clear: " << v2.size() << "   Capacity  = " << v2.capacity() << endl;

    return 0;
}