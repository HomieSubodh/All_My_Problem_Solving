#include <bits/stdc++.h>
using namespace std;

class testConstructor {
    public:
    int x;
    //! Explicite constructor
    testConstructor() {
        cout << "This is a special constructor that call automatically when an object created" << endl;
        cout << "Value of x is currently: " << x << endl;
    }
};

int main()
{
    testConstructor obj1;
    obj1.x = 200;
    cout <<  "After initialization of x value is: " << obj1.x << endl;
    return 0;
}
