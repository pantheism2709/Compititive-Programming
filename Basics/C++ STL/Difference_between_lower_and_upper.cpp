/*
Summary of Differences

Definition of Position:
lower_bound(): Returns the position of the first element that is not less than the specified value. It may return an element that is equal to the value.
upper_bound(): Returns the position of the first element that is greater than the specified value. It never returns an element equal to the value.


Return Value Behavior:
lower_bound(): Can return an iterator to an element equal to the search value, or if the value is not found, it returns the iterator to the first element greater than the value.
upper_bound(): Always returns an iterator to an element strictly greater than the search value, or the end of the range if no such element exists.

Use Cases:
lower_bound(): Useful for finding the first position where a value could be inserted to maintain the sorted order or finding the first occurrence of the value.
upper_bound(): Useful for finding the position where all elements before it are less than or equal to the value and where all elements after it are greater than the value.
*/