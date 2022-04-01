#include <bits/stdc++.h>
using namespace std;
#define ARRAY_SIZE 100

//! Binary Search function
int binarySearch(int array[], int start_index, int end_index, int target) {
    while(start_index <= end_index) {
        int mid_index = (start_index + end_index) / 2;
        if(array[mid_index] == target) {
            return mid_index;
        }
        if(array[mid_index] < target) {
            start_index = mid_index + 1;
        }
        else
            end_index = mid_index - 1;
    }
    return -1;
}

int main()
{
    int array[ARRAY_SIZE], user_array_size, dlt_pos, start_index = 0, end_index, target;
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

    //* binary search process
    cout << "\n" << "Which array item or element you want to delete from the array? ";
    cin >> target;

    end_index = user_array_size - 1; //! last index here!!
    int binary_search_result = binarySearch(array, start_index, end_index, target);
    (binary_search_result == -1)
    ? cout << "There is no such item or element in the array"
    : cout << "Found!!! The element is at index " << binary_search_result;

    return 0;
}