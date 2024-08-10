/*
Key Characteristics of upper_bound()
Sorted Range Requirement: Similar to lower_bound(), upper_bound() assumes that the range is sorted in ascending order. It performs a binary search to achieve its functionality.

Finding Position: It returns an iterator to the first element in the range that is greater than the specified value. If all elements are less than or equal to the value, it returns an iterator to the end of the range.

Time Complexity: The function operates in O(log n) time due to the binary search algorithm.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 3, 3, 5, 7, 9};

    // Find the upper bound for the value 4
    auto it = upper_bound(vec.begin(), vec.end(), 4);

    // Check if the iterator is within the range and print the result
    if (it != vec.end()) {
        cout << "Upper bound for 4 is: " << *it << endl;
    } else {
        cout << "Upper bound for 4 is at the end of the vector." << endl;
    }

    return 0;
}


/tmp/NzVuUtDns8.o
Upper bound for 4 is: 5


=== Code Execution Successful ===




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    // Find the upper bound for the value 4 using a custom comparator
    auto it = upper_bound(vec.begin(), vec.end(), 4, [](int a, int b) {
        return a < b; // Default comparator, same as <
    });

    // Check if the iterator is within the range and print the result
    if (it != vec.end()) {
        cout << "Upper bound for 4 is: " << *it << endl;
    } else {
        cout << "Upper bound for 4 is at the end of the vector." << endl;
    }

    return 0;
}



/*

Time Complexity
Time Complexity: O(log n)
Explanation: upper_bound() uses binary search to find the position where elements are greater than the specified value, resulting in logarithmic time complexity.

*/