#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5.5;
    //! Declaration and definition in a single statement
    int* p = &a;

    //! Declaration only
    // int* p;

    //* Definition
    // p = &a;

    cout << p << endl;  //* printing the pointer variable name
    cout << &a << endl; //* printing the pointing to the variable
    if(p == &a) {
        cout << "Both address are same";
    }

    return 0;
}

