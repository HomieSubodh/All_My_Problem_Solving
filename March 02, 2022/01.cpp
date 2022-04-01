#include <bits/stdc++.h>
using namespace std;
#define ARRAY_SIZE 100

int main()
{
    int array[ARRAY_SIZE], user_array_size, dlt_pos;
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

    //! Array deletion
    cout << '\n' << "Do you want to delete any elements from your array {y/n}? ";
    cin >> user_y_or_no;
    if(user_y_or_no == 'y') {
        cout << "In which position you want to delete an element? ";
        cin >> dlt_pos;

        //! error handling
        if(dlt_pos - 1 > user_array_size - 1) {
            cout << "Deletion isn't possible";
        }
        else {
            //* delete operation
            user_array_size--;
            for(int dlt = dlt_pos - 1; dlt < user_array_size; dlt++) {
                array[dlt] = array[dlt + 1];
            }

            cout << "------------------" << '\n' << "So the new array is: ";
            for(int i = 0; i < user_array_size; i++) {
                cout << array[i] << ' ';
            }
            cout << "\n" << "After deletion the array size is: " << user_array_size << endl;
        }
    }
    else {
        cout << "Your input shows you don't want to delete any array element";
    }

    return 0;
}


