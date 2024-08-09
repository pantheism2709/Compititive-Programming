
/*

The unordered_set in C++ Standard Library (STL) is a container that stores unique elements in an unordered fashion, meaning that the elements are not stored in any particular order. It provides average constant-time complexity for insertions, deletions, and lookups due to its underlying hash table structure.

Key Characteristics:
Hash Table Structure: Internally uses a hash table, which allows for fast access to elements.
Unique Elements: Each element must be unique; duplicate elements are not allowed.
Unordered: Elements are not sorted; they are distributed based on hash values.
Average Constant-Time Complexity: For most operations, such as insertion and access, the time complexity is O(1) on average.
Basic Operations:
Insertion
Deletion
Search
Iteration
Example Code:
Here's a comprehensive example demonstrating these operations with unordered_set.

*/

#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered_set of integers
    std::unordered_set<int> mySet;

    // Inserting elements
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Attempting to insert a duplicate element (won't be inserted)
    auto result = mySet.insert(20);
    if (!result.second) {
        std::cout << "Element 20 already exists." << std::endl;
    }

    // Searching for an element
    if (mySet.find(20) != mySet.end()) {
        std::cout << "Element 20 found in the set." << std::endl;
    } else {
        std::cout << "Element 20 not found in the set." << std::endl;
    }

    // Iterating over elements
    std::cout << "Elements in the unordered_set:" << std::endl;
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Erasing an element
    mySet.erase(10);

    // Checking if the element was erased
    if (mySet.find(10) == mySet.end()) {
        std::cout << "Element 10 was successfully erased." << std::endl;
    }

    return 0;
}


/*
Average Case Time Complexity:

Insertion: 
𝑂
(
1
)
O(1)
Search: 
𝑂
(
1
)
O(1)
Deletion: 
𝑂
(
1
)
O(1)
Iteration: 
𝑂
(
𝑛
)
O(n)
Worst Case Time Complexity:

Insertion: 
𝑂
(
𝑛
)
O(n)
Search: 
𝑂
(
𝑛
)
O(n)
Deletion: 
𝑂
(
𝑛
)
O(n)
Iteration: 
𝑂
(
𝑛
)
O(n)

*/