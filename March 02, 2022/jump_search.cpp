//TODO --> do this program tomorrow

#include <bits/stdc++.h>
using namespace std;
#define ARRAY_SIZE 100

int jumpSearch(int array[],  int user_array_size, int start_index) {
    int n;
    if(start_index == 0) {
        n = start_index + 1; // n = 0 + 1 = 1
    }
    for(int i = n; i < user_array_size; i*=2) {
        if(array[i] == target) {
            return i;
        }
        else if(array[i] > target) {
            return 
        }
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

    //* jump search process
    cout << "What is your target array element? ";
    cin >> target;
    int jump_search_result = jumpSearch(array, user_array_size);

    return 0;
}

