/*

Key Characteristics of queue
FIFO Order: Elements are processed in the order they are added. The element added first will be the first one to be removed.

Interface: queue provides basic operations for adding and removing elements, as well as accessing the front and back elements.

Underlying Container: By default, queue uses deque (double-ended queue) as its underlying container. However, it can also be constructed with other sequence containers like list.

No Iterators: Unlike some other STL containers, queue does not provide iterators because it does not support direct access to arbitrary elements.


*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Display the front element
    cout << "Front of the queue: " << q.front() << endl;

    // Display the back element
    cout << "Back of the queue: " << q.back() << endl;

    // Dequeue elements
    cout << "Dequeuing elements:" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();  // Remove the front element
    }
    cout << endl;

    // Check if the queue is empty
    if (q.empty()) {
        cout << "The queue is empty." << endl;
    }

    return 0;
}




/*

Time Complexity of Popular Functions

Enqueue (push): O(1)

Explanation: Adding an element to the back of the queue is done in constant time.

Dequeue (pop): O(1)

Explanation: Removing an element from the front of the queue is done in constant time.

Access Front (front): O(1)

Explanation: Accessing the element at the front of the queue is done in constant time.

Access Back (back): O(1)

Explanation: Accessing the element at the back of the queue is done in constant time.

Check Empty (empty): O(1)

Explanation: Checking whether the queue is empty is done in constant time.

*/