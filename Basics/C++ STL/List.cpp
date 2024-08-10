/*

Key Characteristics of list
Doubly Linked List: Each element (node) in a list contains pointers to both the next and previous elements, allowing for efficient bidirectional traversal.

Efficient Insertions/Deletions: Insertions and deletions at both ends or in the middle of the list are efficient, with constant time complexity for these operations.

Non-Contiguous Storage: Elements are not stored contiguously in memory. This allows for flexible memory usage but means that random access to elements is not possible.

Bidirectional Iterators: list supports bidirectional iterators, which allow you to traverse the list in both forward and backward directions.

No Direct Access: Unlike vector or deque, list does not support random access. You must use iterators to access elements.


*/

#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> lst;

    // Insert elements at the end
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    // Insert elements at the beginning
    lst.push_front(0);
    lst.push_front(-10);

    // Display elements in the list
    cout << "List elements:" << endl;
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Access elements using iterators
    cout << "List elements using iterators:" << endl;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove elements from the end
    lst.pop_back();

    // Remove elements from the beginning
    lst.pop_front();

    // Display elements after removal
    cout << "List elements after removal:" << endl;
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Find and remove a specific element
    lst.remove(20); // Removes all occurrences of 20

    // Display elements after removal
    cout << "List elements after removing 20:" << endl;
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Insert elements in the middle
    auto it = lst.begin();
    advance(it, 1); // Move iterator to the second position
    lst.insert(it, 15); // Insert 15 before the second element

    // Display elements after insertion
    cout << "List elements after insertion:" << endl;
    for (const auto& elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Check size and if empty
    cout << "Size of list: " << lst.size() << endl;
    if (lst.empty()) {
        cout << "The list is empty." << endl;
    } else {
        cout << "The list is not empty." << endl;
    }

    return 0;
}


/*

Time Complexity of Popular Functions

Insertion at End (push_back): O(1)

Explanation: Inserting an element at the end of the list is done in constant time.

Insertion at Beginning (push_front): O(1)

Explanation: Inserting an element at the beginning of the list is done in constant time.

Deletion from End (pop_back): O(1)

Explanation: Removing an element from the end of the list is done in constant time.

Deletion from Beginning (pop_front): O(1)

Explanation: Removing an element from the beginning of the list is done in constant time.

Find (find): O(n)

Explanation: Finding an element requires a linear scan of the list.

Remove Specific Element (remove): O(n)

Explanation: Removing specific elements involves scanning the list to find and remove them.

Insertion in the Middle (insert): O(1) (assuming you already have an iterator to the position)

Explanation: Inserting an element at a specific position involves updating pointers, which is done in constant time if you have an iterator.

Size (size): O(1)

Explanation: Retrieving the size of the list is constant time as it maintains a count of elements.

Check Empty (empty): O(1)

Explanation: Checking whether the list is empty is done in constant time.


*/