/*

Key Characteristics of unordered_map
Hash Table Implementation: unordered_map is implemented using a hash table. This allows for fast average-time complexity for operations due to direct access to elements via hash values.

No Order Guarantee: Unlike map, which maintains elements in a sorted order based on keys, unordered_map does not guarantee any order of its elements. The order is determined by the hash function and the internal structure of the hash table.

Unique Keys: Each key in an unordered_map must be unique. If you try to insert a key that already exists, the value associated with the existing key will be updated.

Custom Hash Functions: You can provide a custom hash function and equality function if needed, which allows you to define how the keys are hashed and compared.

*/


#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // Create an unordered_map that maps strings to integers
    unordered_map<string, int> umap;

    // Insert elements into the unordered_map
    umap["apple"] = 3;
    umap["banana"] = 1;
    umap["orange"] = 2;
    umap["pear"] = 4;

    // Access elements
    cout << "apple: " << umap["apple"] << endl;

    // Iterate through the unordered_map
    cout << "Elements in the unordered_map:" << endl;
    for (const auto& pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Check if a key exists
    string key = "banana";
    if (umap.find(key) != umap.end()) {
        cout << key << " found with value: " << umap[key] << endl;
    } else {
        cout << key << " not found" << endl;
    }

    // Erase an element
    umap.erase("orange");

    // Check size of the unordered_map
    cout << "Size of unordered_map: " << umap.size() << endl;

    return 0;
}


/*
Time Complexity of Popular Functions
Insertion (insert, operator[]): O(1) average-case, O(n) worst-case

Explanation: Average time complexity is constant due to direct hashing, but can degrade to linear time if many hash collisions occur.

Deletion (erase): O(1) average-case, O(n) worst-case

Explanation: Similar to insertion, deletion is average constant time but can be linear in the worst case due to hash collisions.

Access (operator[], at): O(1) average-case, O(n) worst-case

Explanation: Accessing an element by key is generally constant time due to hashing, but in the worst case, hash collisions can make it linear.

Finding (find): O(1) average-case, O(n) worst-case

Explanation: Finding an element is constant time on average, with linear time in the worst case due to collisions.

Size (size): O(1)

Explanation: Retrieving the size of the unordered_map is constant time as it just returns the count of elements.

Clear (clear): O(n)

Explanation: Clearing the unordered_map involves removing all elements, which is linear time.
The average-case constant time complexities make unordered_map suitable for scenarios where fast lookups and insertions are crucial, and where the order of elements is not a concern.

*/