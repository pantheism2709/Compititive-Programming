/*
Key Characteristics of sort()
Algorithm: The sort() function typically uses the Introsort algorithm, which is a hybrid sorting algorithm combining Quick Sort, Heap Sort, and Insertion Sort. This provides good performance across a wide range of data distributions.

In-Place Sorting: The sorting is done in-place, meaning that the original container is modified to produce the sorted order without using extra space proportional to the number of elements.

Range-Based: The sort() function requires two iterators to define the range of elements to be sorted. These iterators mark the beginning and end of the range.

Custom Comparator: You can provide a custom comparison function or lambda to define the sorting order. By default, it sorts elements in ascending order using the < operator.

Time Complexity: The average time complexity of sort() is O(n log n), where n is the number of elements to be sorted. In the worst case, the time complexity can also be O(n log n) due to the hybrid nature of the algorithm.
*/



// Sort the vector in ascending order
    sort(vec.begin(), vec.end());




    // Sort the vector in descending order
    sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b; // Custom comparator for descending order
    });



        // Sort a subrange (from index 1 to 4)
    sort(vec.begin() + 1, vec.begin() + 5);




/*

Time Complexity

Average Case: O(n log n)
Explanation: The average complexity is O(n log n) due to the Introsort algorithm, which combines Quick Sort and Heap Sort.

Worst Case: O(n log n)
Explanation: The worst-case complexity is also O(n log n) due to the fallback to Heap Sort if Quick Sort performs poorly.

Best Case: O(n log n) (average case) or O(n) if the range is already sorted or nearly sorted and Insertion Sort is used.

*/