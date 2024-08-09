/*
Key Characteristics of vector:
Dynamic Sizing: vector can grow or shrink in size dynamically.
Contiguous Memory: Elements are stored in contiguous memory locations, which provides fast random access.
Efficient Access: Provides constant-time access to elements by index.
Support for Iterators: Supports iterators for traversing elements.

Basic Operations with vector:
Here’s a breakdown of common operations with vector, including example code and their time complexities:

Initialization and Adding Elements
Accessing Elements
Removing Elements
Resizing
Iterating Over Elements

*/

#include <iostream>
#include <vector>

int main() {
    // 1. Initialization
    std::vector<int> vec; // Creates an empty vector of integers

    // 2. Adding Elements
    vec.push_back(10); // Adds 10 to the end of the vector
    vec.push_back(20); // Adds 20 to the end of the vector
    vec.push_back(30); // Adds 30 to the end of the vector

    // 3. Accessing Elements
    std::cout << "Element at index 0: " << vec[0] << std::endl; // Access by index
    std::cout << "Element at index 1: " << vec.at(1) << std::endl; // Access using at() (bounds-checked)

    // 4. Removing Elements
    vec.pop_back(); // Removes the last element (30 in this case)

    // 5. Resizing
    vec.resize(5, 100); // Resize to 5 elements, new elements initialized to 100

    // 6. Iterating Over Elements
    std::cout << "Elements in vector:" << std::endl;
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}


/*
Summary
Initialization: O(1)
Adding Elements: Amortized O(1)
Accessing Elements: O(1)
Removing Elements: O(1)
Resizing: O(n)
Iterating Over Elements: O(n)

*/