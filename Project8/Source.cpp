//
//  This is an example of some of the features of map.
//

#include <iostream>

// To save me typing when this is needed.  This must be before the include statement.
//#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

// The following include file, contains the definition of the map container.
#include <map>
#include <string>
#include <vector>
//#include <hash_map>
#include <unordered_map>

// I am going to eliminate the need for typing std:: everywhere.  
using namespace std;

int main()
{

    // Create a map where the key is a string and the data is an int.
    unordered_map<string, int> mm;

    // Let us create a vector of strings that we are going to insert into the
    // map.
    // We define a vector of strings.  Note: we do not have to specify an initial size.
    vector <string> v1;

    // Adding data to a vector.  This will be used to populate the map.
    v1.push_back("quack");
    v1.push_back("mallard");
    v1.push_back("duck");
    v1.push_back("vic");
    v1.push_back("dog");
    v1.push_back("cat");
    v1.push_back("vic");


    // We will demonstrate one way to insert data in a map.  (There are others.) The map 
    // is organized as a binary tree.   I am adding to the map and checking for duplicates.
    unordered_map<string, int>::iterator mp;
    for (int i = 0; i < (int)v1.size(); i++) {

        string temp = v1[i];

        // This gives you an iterator to the searched for item.
        mp = mm.find(temp);

        // Check for multiply defined symbol.
        if (mp != mm.end()) {

            cout << " Multiply defined symbol: " << temp << endl;
        }
        else {

            // Record the symbol and its position in the string in the map.
            mm[temp] = i;
        }
    }
    // Note: Can access a member of a map by using subscript notation.

    // Display the contents of the map.  Note that elements will be ordered by 
    // the key.  Note: the elements of a map are pairs.  This is a data type that
    // has a "first" part which is the key and the "second" part which is the data.
    // The iterator therefore points to pairs.
    cout << endl << "Displaying the map: " << endl;
    for (mp = mm.begin(); mp != mm.end(); mp++) {

        cout << mp->first << " : " << mp->second << endl;
    }
    // Display the map in reverse order.
    cout << endl << "Displaying the map in reverse order: " << endl;
    /*for (unordered_map<string, int>::reverse_iterator irmp = mm.rbegin(); irmp != mm.rend(); irmp++) {

        cout << irmp->first << " : " << irmp->second << endl;
    }*/
    return 0;
}