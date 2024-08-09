/*
Key Characteristics of std::set:
Unique Elements: All elements in a set must be unique; duplicates are not allowed.
Ordered: Elements are stored in a specific order, which is determined by the comparison function (by default, operator< is used).
Logarithmic Time Complexity: Insertion, deletion, and search operations generally have logarithmic time complexity, O(log n), where n is the number of elements.
No Direct Access: Unlike vectors, you cannot access elements by index. Instead, elements are accessed via iterators.

*/


#include <iostream>
#include <set>

int main() {
    // 1. Creating a set of integers
    std::set<int> mySet;

    // 2. Inserting elements
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Attempting to insert a duplicate element (will not be inserted)
    auto result = mySet.insert(20);
    if (!result.second) {
        std::cout << "Element 20 already exists." << std::endl;
    }

    // 3. Searching for an element
    auto it = mySet.find(20);
    if (it != mySet.end()) {
        std::cout << "Element 20 found in the set." << std::endl;
    } else {
        std::cout << "Element 20 not found in the set." << std::endl;
    }

    // 4. Removing an element
    mySet.erase(10);

    // 5. Iterating over elements
    std::cout << "Elements in the set:" << std::endl;
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}



/*

Well-Known Functions and Their Time Complexities:
insert(value):

Time Complexity: O(log n)
Adds an element to the set. If the element is already present, it will not be inserted.
find(value):

Time Complexity: O(log n)
Searches for an element. Returns an iterator to the element if found; otherwise, returns set::end().
erase(value):

Time Complexity: O(log n)
Removes the specified element from the set.
size():

Time Complexity: O(1)
Returns the number of elements in the set.
empty():

Time Complexity: O(1)
Checks if the set is empty.
clear():

Time Complexity: O(n)
Removes all elements from the set.
lower_bound(value):

Time Complexity: O(log n)
Returns an iterator to the first element that is not less than value.
upper_bound(value):

Time Complexity: O(log n)
Returns an iterator to the first element that is greater than value.


*/