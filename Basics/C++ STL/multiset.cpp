/*
Key Characteristics of multiset
Allow Duplicates: Unlike set, multiset allows multiple elements with the same value. It maintains the order of elements based on the comparison function.

Ordered: Elements in a multiset are always sorted according to a specific order. By default, this is ascending order, but it can be customized with a comparator.

Efficient Search, Insertion, and Deletion: These operations are generally logarithmic in complexity (O(log n)) due to the underlying balanced tree structure (typically a Red-Black Tree).

Duplicates Counting: The multiset provides functions to count the number of occurrences of a particular element.

Iterator Support: Like other STL containers, multiset supports iterators which can be used to traverse the elements.

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a multiset of integers
    multiset<int> ms;

    // Insert elements into the multiset
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);  // Duplicate element
    ms.insert(30);
    ms.insert(20);  // Duplicate element

    // Display elements in the multiset
    cout << "Multiset elements: ";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Count the occurrences of an element
    int value = 20;
    cout << "Count of " << value << " in multiset: " << ms.count(value) << endl;

    // Erase all instances of a specific element
    ms.erase(value);

    // Display elements after erasure
    cout << "Multiset elements after erasing " << value << ": ";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}




/*

In the context of a multiset in C++, which is typically implemented as a Red-Black Tree (a type of self-balancing binary search tree), the time complexities of its main operations are as follows:

Insertion (insert):

Time Complexity: O(log n)
Explanation: Insertion into a multiset involves placing the element in the correct position to maintain the sorted order. This operation involves traversing the tree from the root to the correct leaf position, which takes logarithmic time due to the balanced nature of the Red-Black Tree.

Deletion (erase):

Time Complexity: O(log n) for deleting a single instance of an element.
Explanation: Deletion also involves finding the element and then rebalancing the tree if necessary. The time complexity is logarithmic as the tree remains balanced.

Finding an Element (find):

Time Complexity: O(log n)
Explanation: Finding an element involves traversing the tree from the root to the position of the element, which is logarithmic in a balanced tree.

Counting Occurrences (count):

Time Complexity: O(log n + k), where k is the number of occurrences of the element.
Explanation: The count operation first finds the range of elements equal to the specified value, which takes O(log n). Counting the number of occurrences within that range takes O(k).

Range Operations (e.g., equal_range, find to upper_bound):

Time Complexity: O(log n + k), where k is the number of elements in the range.
Explanation: Similar to count, these operations involve finding the range of elements in logarithmic time and then processing the elements within that range.

Traversing (Iterating through elements):

Time Complexity: O(n)
Explanation: Traversing all elements in the multiset involves visiting each element exactly once, leading to linear time complexity.


*/