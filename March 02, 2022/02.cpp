//! Searching in Array and also find the duplicate
//* @ linear search algorithm
//! Author: Subodh Chandra Shil

#include <bits/stdc++.h>
// #include <windows.h>
using namespace std;
#define ARRAY_SIZE 100

//! ----------------------------------------------------------------
//* Find the target element -> using linear search algorithm
//* Time complexity (Average case): O(n)
//! ----------------------------------------------------------------
int linear_search(int array[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(array[i] == target)
            return i;
    }
    return -1;
}

//! ----------------------------------------------------------------
//* Find the target element -> using binary search algorithm
//* Time complexity: O(log n)

//* pseudocode logical approach
// middle index => 5 / 2 = round(2.5) = 2
// assume, approaching item = 3
//!     m
//* 3 4 5 10 32 55
//!     m = 5
// 10 9 8 7 6 5

//! ----------------------------------------------------------------
int binarySearch(int array[], int start_index, int end_index, int target) {
    while(start_index <= end_index) {
        int mid_index = (start_index + end_index) / 2;
        if(array[mid_index] == target) {
            return mid_index;
        }
        if(array[mid_index] > target) {
            end_index = mid_index - 1;
        }
        else
            start_index = mid_index + 1;
    }
    return -1;
}


//* Driver code
int main()
{
    //* Getting colorful console output
    // HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    //* variables
    int array[ARRAY_SIZE], user_array_size, dlt_pos, target, start_index = 0;
    char user_y_or_no;
    cout << "Enter the size for your array" << endl;
    cin >> user_array_size;
    cout << "Enter elements" << endl;
    for(int i = 0; i < user_array_size; i++) {
        cin >> array[i];
    }
    cout << "--------------------------" << '\n' << "Your array is: ";
    for(int i = 0; i < user_array_size; i++) {
        cout << array[i] << ' ';
    }

    cout << '\n' << "Your target element to find is: ";
    cin >> target; //! target received

    //! linear search function called
    // int linear_search_result = linear_search(array, user_array_size, target);
    //! binary search function called
    int end_index = user_array_size - 1;
    int binary_search_result = binarySearch(array, start_index, end_index, target);

    //* ternary operator if-else ladder
    /*
    (linear_search_result == -1)
        ? cout << "There is no such element in the array"
        : cout << "Your target is found!!!\nIndex of your target element is: " << linear_search_result;
    */
   //! Basic if-else for getting colorful output
    if(binary_search_result == -1) {
        // SetConsoleTextAttribute(h, 4);
        cout << "There is no such element in the array";
    }
    else {
        cout << "Your target is found!!!\nIndex of your target element is: " << binary_search_result;
    }

    return 0;
}
