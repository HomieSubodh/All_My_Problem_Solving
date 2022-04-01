#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout << var1 << endl; //! automatic type conversion
    int var1 = 10.5;
    int* p = &var1;
    cout << "Value of pointer variable 'p' is same as address of variable 'var1'" << endl;
    cout << "p: "<< p << ' ' << " and var1: " << &var1;
    return 0;
}

