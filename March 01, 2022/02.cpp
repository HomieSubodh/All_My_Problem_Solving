#include <bits/stdc++.h>
using namespace std;

int main()
{
    //! Array Traversing
    int array[20], n, new_item_pos, new_item_value;
    int array_size = sizeof(array) / 4;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    if(n > array_size) {
        cout << "Enter size less than " << (array_size + 1) << endl;
    }
    else {
        cout << "Enter array items" << endl;
        for(int i = 0; i < n; i++) {
            cin >> array[i];
        }
        cout << '\n' << "The array items you've entered" << endl;
        cout << "_________________________________________________" << endl;
        for(int i = 0; i < n; i++) {
            cout << array[i] << endl;
        }
    }

    //! Array Insertion
    cout << "Are your want to inser new value to the array?" << '\n' << "y/n?" << endl;
    char user_input_y_or_n;
    cin >> user_input_y_or_n;
    if(user_input_y_or_n == 'y') {
        cout << "In which index you want to add new item?";
        cin >> new_item_pos;
        cout << "What value do you want to add?";
        cin >> new_item_value;
        for(int i = n-1; i >= new_item_pos-1; i--) {
            array[i + 1] = array[i];
        }

        //* fill up the freed array index with new item
        array[new_item_pos - 1] = new_item_value;
        cout << "After addding new item the whole array is:" << endl;
        //* increase index by 1
        n++;
        for(int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
    }
    else {
        cout << "Your input says you don't want to insert new value to the array";
    }

    return 0;
}

