#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << bool(false) << endl; //* 0 --> means false
    cout << bool(true) << endl;  //* 1 --> means true
    cout << bool(10.55) << endl; //! 1
    cout << bool(-234) << endl;  //! 1
    cout << bool(0343) << endl;  //! 1
    cout << bool(0) << endl;     //! 0

    /*
    ! Here, one objservation is --> everything else 0 or false in C or C++ is boolean true
    */
    return 0;
}