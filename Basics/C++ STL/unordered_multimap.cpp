/*

Key Characteristics of unordered_multimap
Hash Table Implementation: unordered_multimap uses a hash table to manage elements, providing average constant-time complexity for search, insertion, and deletion operations.

Allow Duplicates: It allows multiple elements with the same key. This makes it suitable for situations where duplicate keys are needed.

No Order Guarantee: Unlike map or multimap, unordered_multimap does not guarantee any specific order of elements. The elements are stored based on their hash values.

Custom Hash Functions: You can provide custom hash functions and equality functions to control how keys are hashed and compared.

*/

#include <iostream>
#include <unordered_multimap>
#include <string>

using namespace std;

int main() {
    // Create an unordered_multimap that maps strings to integers
    unordered_multimap<string, int> ummap;

    // Insert elements into the unordered_multimap
    ummap.insert({"apple", 3});
    ummap.insert({"banana", 1});
    ummap.insert({"apple", 2});  // Duplicate key
    ummap.insert({"orange", 4});
    ummap.insert({"banana", 5}); // Duplicate key

    // Access and print elements
    cout << "Elements in the unordered_multimap:" << endl;
    for (const auto& pair : ummap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Find elements with a specific key
    string key = "banana";
    auto range = ummap.equal_range(key);
    cout << "Values for key '" << key << "': ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // Erase elements by key
    ummap.erase("orange");

    // Check size of the unordered_multimap
    cout << "Size of unordered_multimap: " << ummap.size() << endl;

    return 0;
}


/*
Time Complexity of Popular Functions

Insertion (insert): O(1) average-case, O(n) worst-case

Explanation: Inserting into the hash table is average constant time but can degrade to linear time if many hash collisions occur.

Deletion (erase): O(1) average-case, O(n) worst-case

Explanation: Deletion is average constant time, but can be linear in the worst case due to hash collisions.

Access (find): O(1) average-case, O(n) worst-case

Explanation: Finding an element by key is generally constant time due to hashing, but can be linear in the worst case if there are many collisions.

Finding Multiple Values (equal_range): O(1) average-case, O(n) worst-case

Explanation: Finding the range of elements for a key is constant time on average but can be linear in the worst case due to hash collisions. Iterating through the range has linear time complexity relative to the number of elements in that range.

Size (size): O(1)

Explanation: Retrieving the size of the unordered_multimap is constant time as it just returns the count of elements.

Clear (clear): O(n)

Explanation: Clearing the unordered_multimap involves removing all elements, which is linear time.
*/