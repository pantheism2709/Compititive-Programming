/*

Key Characteristics of lower_bound()
Sorted Range Requirement: lower_bound() requires the range to be sorted. The function performs a binary search, which assumes that the range is sorted in ascending order.

Finding Insertion Point: It finds the first position in the range where the given value could be inserted while keeping the range sorted.

Iterator Return: It returns an iterator to the first element that is not less than the specified value. If all elements are less than the value, it returns an iterator to the end of the range.

Time Complexity: The time complexity is O(log n) due to the binary search algorithm used.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 3, 3, 5, 7, 9};

    // Find the lower bound for the value 4
    auto it = lower_bound(vec.begin(), vec.end(), 4);

    // Check if the iterator is within the range and print the result
    if (it != vec.end()) {
        cout << "Lower bound for 4 is: " << *it << endl;
    } else {
        cout << "Lower bound for 4 is at the end of the vector." << endl;
    }

    return 0;
}


/tmp/pGHOg0IduZ.o
Lower bound for 4 is: 5


=== Code Execution Successful ===


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    // Find the lower bound for the value 4 using a custom comparator
    auto it = lower_bound(vec.begin(), vec.end(), 4, [](int a, int b) {
        return a < b; // Default comparator, same as < 
    });

    // Check if the iterator is within the range and print the result
    if (it != vec.end()) {
        cout << "Lower bound for 4 is: " << *it << endl;
    } else {
        cout << "Lower bound for 4 is at the end of the vector." << endl;
    }

    return 0;
}


/*

Time Complexity
Time Complexity: O(log n)
Explanation: lower_bound() performs a binary search over the range, which has a logarithmic time complexity.

*/