/*

1. Lower Bound:
The lower bound of a target element in a sorted array is the first position where the element is not smaller than the target. In other words, it returns the index of the first element that is greater than or equal to the target.

2. Upper Bound:
The upper bound of a target element is the first position where the element is strictly greater than the target.

*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find the lower bound using binary search
int lowerBound(const vector<int>& arr, int target) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) {
            low = mid + 1;  // Move right if arr[mid] is less than the target
        } else {
            high = mid;  // Move left if arr[mid] is greater or equal to the target
        }
    }
    return low;
}

// Function to find the upper bound using binary search
int upperBound(const vector<int>& arr, int target) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1;  // Move right if arr[mid] is less than or equal to the target
        } else {
            high = mid;  // Move left if arr[mid] is strictly greater than the target
        }
    }
    return low;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8, 10};  // Sorted array
    int target = 4;

    // Call the lowerBound and upperBound functions
    int lower = lowerBound(arr, target);
    int upper = upperBound(arr, target);

    // Output the results
    if (lower != arr.size())
        cout << "Lower bound of " << target << " is at index " << lower << endl;
    else
        cout << "Lower bound not found" << endl;

    if (upper != arr.size())
        cout << "Upper bound of " << target << " is at index " << upper << endl;
    else
        cout << "Upper bound not found" << endl;

    return 0;
}
