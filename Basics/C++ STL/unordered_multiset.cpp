/*

Key Characteristics of std::unordered_multiset:
Allows Duplicates: Unlike std::unordered_set, std::unordered_multiset allows multiple instances of the same value.

Unordered: Elements are not stored in any specific order but are organized based on their hash values.

Average Constant-Time Complexity: Insertion, deletion, and lookup operations are generally O(1) on average.

*/


#include <iostream>
#include <unordered_multiset>

using namespace std;

int main() {
    // 1. Creating an unordered_multiset of integers
    unordered_multiset<int> myMultiset;

    // 2. Inserting elements
    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(30);
    myMultiset.insert(20); // Inserting duplicate

    // 3. Searching for an element
    auto range = myMultiset.equal_range(20); // Returns a pair of iterators
    if (range.first != myMultiset.end()) {
        cout << "Elements with value 20 found:" << endl;
        for (auto it = range.first; it != range.second; ++it) {
            cout << *it << " ";
        }
        cout << endl;
    } else {
        cout << "Element 20 not found in the multiset." << endl;
    }

    // 4. Removing elements
    myMultiset.erase(10); // Removes all occurrences of 10

    // 5. Iterating over elements
    cout << "Elements in the unordered_multiset:" << endl;
    for (const int& elem : myMultiset) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}



/*
insert(value):

Time Complexity: Amortized O(1)
Adds an element to the multiset. Duplicate elements are allowed.
find(value):

Time Complexity: O(1) on average
Finds an element. Returns an iterator to the first occurrence of the element, or unordered_multiset::end() if not found.
equal_range(value):

Time Complexity: O(1) on average
Returns a pair of iterators representing the range of elements equal to value.
erase(value):

Time Complexity: O(n) in the worst case (where n is the number of occurrences of the value)
Removes all occurrences of value.
size():

Time Complexity: O(1)
Returns the number of elements in the multiset.
empty():

Time Complexity: O(1)
Checks if the multiset is empty.
clear():

Time Complexity: O(n)
Removes all elements from the multiset.
count(value):

Time Complexity: O(1) on average
Returns the number of occurrences of value.
*/