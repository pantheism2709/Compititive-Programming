/*

Key Characteristics of stack
LIFO Order: Elements are processed in reverse order of their addition. The most recently added element is the first one to be removed.

Interface: stack provides basic operations for adding elements to the top (push), removing elements from the top (pop), and accessing the top element (top).

Underlying Container: By default, stack uses deque (double-ended queue) as its underlying container. It can also be constructed with other sequence containers like list, but the container used must support the necessary operations (e.g., push_back, pop_back, back).

No Iterators: stack does not provide iterators as it does not support direct access to arbitrary elements.

*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Create a stack of integers
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Display the top element
    cout << "Top of the stack: " << s.top() << endl;

    // Pop elements from the stack
    cout << "Popping elements:" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();  // Remove the top element
    }
    cout << endl;

    // Check if the stack is empty
    if (s.empty()) {
        cout << "The stack is empty." << endl;
    }

    return 0;
}


/*
Time Complexity of Popular Functions

Push (push): O(1)

Explanation: Adding an element to the top of the stack is done in constant time.

Pop (pop): O(1)

Explanation: Removing the top element from the stack is done in constant time.

Access Top (top): O(1)

Explanation: Accessing the element at the top of the stack is done in constant time.

Check Empty (empty): O(1)

Explanation: Checking whether the stack is empty is done in constant time.

*/