#include <bits/stdc++.h>
using namespace std;

#define ARR_SIZE 10
int main()
{
    int array[ARR_SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int last_array_item = ARR_SIZE - 1;
    cout << '\n' << array[last_array_item] << endl;
    cout << sizeof(array); // 40 / 4 = 10

    // cout << '\n' << array[1];
    // array[1] = 5000;
    // cout << '\n' << array[1];

    // int array_size = 8;
    // int array2[array_size] = {100, 200, 300, 400, 500};


    // // array2[5] = 600; 
    // cout << '\n' << array2[7];

    // char array3[3] = {'a', 'b'};
    // cout << '\n' << array3[2]; // unfilled array item will always return 0 in every data type

    // int n = 1;
    // int array4[n];
    // array4[n] = {1};
    // cout << '\n' << array4[0] << '\t' << array4[1]; //! output: -1  1

    // int array5[3] = {10, 20, 30};
    // cout << '\n' << array5[100];

    // int array6[] = {10, 20, 30};
    // cout << '\n' << array6[3];

    return 0;
}

