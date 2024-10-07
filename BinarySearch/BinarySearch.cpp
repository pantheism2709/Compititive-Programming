/*

Linear Search :- O (n)
Binary Search :- O (logn)

Where can we apply Binary Search :- 
we can apply binary search in monotnic functions ..( functions which maintain a given order )
either increasing or decreasing

ex :- 1 3 5 6 7 , 7 4 3 2 1

As square , cube in mathematics are also monotonic increasing function
so there also we can apply binary search .

We can also apply binary search in predicates functions ... 
predicate functions are function which are true in half range and false in other half range 

ex :- F F F F F F T T T T T , T T T T T T F F F F F F


Below is code of Binary search for searching an element in a sorted array 


*/


#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;  // Target found, return its index
        }

        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }

        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // Target is not present in array
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
