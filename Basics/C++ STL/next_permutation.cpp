/*

Key Characteristics of next_permutation
Lexicographical Order: next_permutation rearranges the elements into the next permutation in lexicographical order. This means it finds the next permutation in "dictionary" order.

In-Place Operation: It operates in-place, meaning it rearranges the elements of the original container directly.

Return Value: It returns a boolean value:

true if the function was able to generate the next permutation.
false if the function has generated the last permutation and thus returns to the smallest permutation.
Requires Sorting: If you want to start with the smallest permutation, the range should be sorted in ascending order before calling next_permutation.

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec = {1, 2, 3};

    // Sort the vector to ensure we start with the smallest permutation
    sort(vec.begin(), vec.end());

    cout << "Permutations:" << endl;
    do {
        // Print the current permutation
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(vec.begin(), vec.end()));

    return 0;
}



/*


Summary

Function: next_permutation(first, last)

Purpose: Generate the next permutation of elements in the range [first, last).

Returns: true if the next permutation exists; false if the last permutation has been reached.

Time Complexity: O(n) per call.


*/