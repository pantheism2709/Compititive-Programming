/*

Key Characteristics of priority_queue
Heap Structure: Internally, priority_queue uses a heap (usually implemented as a binary heap) to manage the elements. By default, this is a max-heap, which means the largest element is always at the top.

Priority-Based Access: The top element is the one with the highest priority (in a max-heap) or the lowest priority (in a min-heap if customized). This ensures that you can efficiently access the highest (or lowest) priority element.

Underlying Container: By default, priority_queue uses vector as its underlying container. However, it can be customized with other sequence containers like deque.

Non-Sorted: Unlike set or map, priority_queue does not maintain a sorted order of all elements; it only ensures that the top element is always the highest (or lowest) priority.

No Iterators: priority_queue does not provide iterators as it does not support direct access to arbitrary elements.


*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Create a priority_queue of integers (max-heap by default)
    priority_queue<int> pq;

    // Push elements onto the priority_queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // Display and remove elements from the priority_queue
    cout << "Priority Queue elements (in order of removal):" << endl;
    while (!pq.empty()) {
        cout << pq.top() << " "; // Access the top element (highest priority)
        pq.pop();               // Remove the top element
    }
    cout << endl;

    // Create a min-heap priority_queue using custom comparator
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Push elements onto the min-heap priority_queue
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    // Display and remove elements from the min-heap priority_queue
    cout << "Min-Heap Priority Queue elements (in order of removal):" << endl;
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // Access the top element (lowest priority)
        minHeap.pop();               // Remove the top element
    }
    cout << endl;

    return 0;
}


/*

Time Complexity of Popular Functions

Insertion (push): O(log n)

Explanation: Inserting an element into the heap involves maintaining the heap property, which takes logarithmic time.

Access Top (top): O(1)

Explanation: Accessing the top element of the heap is constant time since it is always at the root.

Remove Top (pop): O(log n)

Explanation: Removing the top element involves rebalancing the heap, which takes logarithmic time.

Size (size): O(1)

Explanation: Retrieving the size of the priority_queue is constant time.

Check Empty (empty): O(1)

Explanation: Checking whether the priority_queue is empty is done in constant time.

*/