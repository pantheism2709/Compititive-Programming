/*


In C++, multimap is an associative container provided by the Standard Template Library (STL) that allows for the storage of key-value pairs with multiple values allowed for the same key. Unlike map, which enforces unique keys, multimap allows for duplicate keys.

Key Characteristics of multimap
Allow Duplicates: multimap allows multiple elements with the same key. This makes it suitable for scenarios where you need to store multiple values associated with a single key.

Ordered by Key: Elements are stored in a sorted order based on their keys. The sorting is done according to the key comparison function provided (by default, this is std::less).

Balanced Tree Structure: Internally, multimap is typically implemented as a balanced binary tree (e.g., a Red-Black Tree), which ensures that operations are logarithmic in complexity.

Iterators: It supports bidirectional iterators, which allow for traversal in both directions (forward and backward).

No Direct Access: Unlike vector or deque, multimap does not provide random access to elements by index. Access is done through iterators or key-based operations.

*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Create a multimap that maps strings to integers
    multimap<string, int> mmap;

    // Insert elements into the multimap
    mmap.insert({"apple", 3});
    mmap.insert({"banana", 1});
    mmap.insert({"apple", 2});  // Duplicate key
    mmap.insert({"orange", 4});
    mmap.insert({"banana", 5}); // Duplicate key

    // Display elements in the multimap
    cout << "Elements in the multimap:" << endl;
    for (const auto& pair : mmap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Find elements with a specific key
    string key = "banana";
    auto range = mmap.equal_range(key);
    cout << "Values for key '" << key << "': ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // Erase elements by key
    mmap.erase("orange");

    // Check size of the multimap
    cout << "Size of multimap: " << mmap.size() << endl;

    return 0;
}


/*

Time Complexity of Popular Functions
Insertion (insert): O(log n)

Explanation: Inserting an element into the multimap involves maintaining the balanced tree structure, which takes logarithmic time.
Find (find): O(log n)

Explanation: Finding an element by key involves a binary search on the tree, which is logarithmic in complexity.
Find Multiple Values (equal_range): O(log n)

Explanation: Finding the range of elements for a key involves a binary search and iterating through the range, which is logarithmic in complexity for finding the range.
Erase by Key (erase): O(log n + k)

Explanation: Erasing all elements with a specific key involves locating the key (logarithmic time) and then removing all matching elements (linear time relative to the number of matching elements).
Size (size): O(1)

Explanation: Retrieving the size of the multimap is constant time as it maintains a count of elements.
Check Empty (empty): O(1)

Explanation: Checking whether the multimap is empty is done in constant time.


*/