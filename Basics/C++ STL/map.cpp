/*
Key Characteristics of map
Ordered Elements: Elements are automatically sorted by the key, based on the key's comparison function (by default, it uses operator< for less-than comparison).

Unique Keys: Each key in a map must be unique. If you insert a key that already exists, the value associated with the existing key is updated.

Logarithmic Time Complexity: Operations such as search, insertion, and deletion have logarithmic time complexity (O(log n)) due to the balanced nature of the Red-Black Tree.

Associative Container: map stores pairs of key and value, where each key is associated with a single value.

Iterator Support: Like other STL containers, map supports iterators which can be used to traverse the elements in sorted order
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Create a map that maps strings to integers
    map<string, int> myMap;

    // Insert elements into the map
    myMap["apple"] = 3;
    myMap["banana"] = 1;
    myMap["orange"] = 2;
    myMap["pear"] = 4;

    // Access elements
    cout << "apple: " << myMap["apple"] << endl;

    // Iterate through the map
    cout << "Elements in the map:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Find an element
    string key = "banana";
    auto it = myMap.find(key);
    if (it != myMap.end()) {
        cout << key << " found with value: " << it->second << endl;
    } else {
        cout << key << " not found" << endl;
    }

    // Erase an element
    myMap.erase("orange");

    // Check size of the map
    cout << "Size of map: " << myMap.size() << endl;

    return 0;
}


/*

Time Complexity of Popular Functions

Insertion (insert, operator[]): O(log n)

Explanation: Insertion into a map involves placing the element in the correct position in the balanced tree, which requires logarithmic time.

Deletion (erase): O(log n)

Explanation: Deletion involves finding the element and then rebalancing the tree if necessary, both operations take logarithmic time.

Access (operator[], at): O(log n)

Explanation: Accessing an element by key involves searching for the key in the balanced tree, which takes logarithmic time.

Finding (find): O(log n)

Explanation: Finding an element is done by searching through the balanced tree, which takes logarithmic time.

Size (size): O(1)

Explanation: Retrieving the size of the map is constant time as it just returns the count of elements.

Clear (clear): O(n)

Explanation: Clearing the map involves removing all elements, which is linear time.

*/