/*

Key Characteristics of deque
Double-Ended Operations: deque supports efficient insertion and deletion operations at both the front and back of the container.

Random Access: It provides constant-time access to elements using indices, similar to vector.

Dynamic Size: deque grows dynamically as elements are added, and it automatically manages memory allocation.

No Continuous Storage Guarantee: Unlike vector, deque does not guarantee that its elements are stored in contiguous memory. It uses a segmented internal structure to manage its data.

Efficient Operations: Insertion and deletion at both ends are efficient (O(1)), and random access to elements is also efficient (O(1)).

*/


#include <iostream>
#include <deque>

using namespace std;

int main() {
    // Create a deque of integers
    deque<int> dq;

    // Insert elements at the back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // Insert elements at the front
    dq.push_front(0);
    dq.push_front(-10);

    // Display elements
    cout << "Deque elements:" << endl;
    for (const auto& elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    // Access elements
    cout << "Element at index 2: " << dq[2] << endl;
    cout << "Element at index 4: " << dq.at(4) << endl;

    // Remove elements from the back
    dq.pop_back();

    // Remove elements from the front
    dq.pop_front();

    // Display elements after removal
    cout << "Deque elements after removal:" << endl;
    for (const auto& elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    // Check size and if empty
    cout << "Size of deque: " << dq.size() << endl;
    if (dq.empty()) {
        cout << "The deque is empty." << endl;
    } else {
        cout << "The deque is not empty." << endl;
    }

    return 0;
}


/*

Insertion at Back (push_back): O(1)

Explanation: Adding an element to the back is done in constant time.

Insertion at Front (push_front): O(1)

Explanation: Adding an element to the front is done in constant time.

Deletion from Back (pop_back): O(1)

Explanation: Removing an element from the back is done in constant time.

Deletion from Front (pop_front): O(1)

Explanation: Removing an element from the front is done in constant time.

Access by Index (operator[], at): O(1)

Explanation: Accessing an element by index is done in constant time.

Size (size): O(1)

Explanation: Retrieving the size of the deque is constant time.

Check Empty (empty): O(1)

Explanation: Checking whether the deque is empty is done in constant time.

*/