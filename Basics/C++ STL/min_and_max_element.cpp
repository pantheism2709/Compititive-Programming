/*

They are part of the <algorithm> header.

min_element()
The min_element() function finds the smallest element in a range.

max_element()
The max_element() function finds the largest element in a range.

*/




vector<int> vec = {4, 1, 8, 3, 7, 2};

    // Find the minimum element
    auto min_it = min_element(vec.begin(), vec.end());
    
    // Print the minimum element
    if (min_it != vec.end()) {
        cout << "Minimum element: " << *min_it << endl;
    }


    auto max_it = max_element(vec.begin(), vec.end());
    
    // Print the maximum element
    if (max_it != vec.end()) {
        cout << "Maximum element: " << *max_it << endl;
    }


 /*
 
 Time Complexity for Both Functions: O(n)
 
 */   



   vector<pair<int, int>> vec = {{1, 4}, {2, 3}, {3, 2}, {4, 1}};

    // Find the element with the minimum second value
    auto min_it = min_element(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    
    // Print the element with the minimum second value
    if (min_it != vec.end()) {
        cout << "Element with minimum second value: (" << min_it->first << ", " << min_it->second << ")" << endl;
    }

    // Find the element with the maximum second value
    auto max_it = max_element(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    
    // Print the element with the maximum second value
    if (max_it != vec.end()) {
        cout << "Element with maximum second value: (" << max_it->first << ", " << max_it->second << ")" << endl;
    }