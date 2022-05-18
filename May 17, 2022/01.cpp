//! OOP
#include <bits/stdc++.h>
using namespace std;

class firstClass
{
    int a;
    float b;

public:
    firstClass(int a, float b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "a : " << a << " b: " << b << endl;
    }
};

int main()
{
    firstClass obj1(1002, 202.55);
    obj1.display();

    return 0;
}

//! Flawbacks of functions
#include <bits/stdc++.h>
using namespace std;

int c;

void function1(int a, int b)
{
    cout << a << " " << b << endl;
}

void function2()
{
    cout << c << endl;
}

int main()
{
    function1(10, 20);
    c = 100;
    int c = 500;
    cout << c << endl;

    return 0;
}

//! Comparison of empty and non-empty class and objects
#include <bits/stdc++.h>
using namespace std;

class DemoClass
{
public:
    int a;
    double b;
};

class EmptyClass {};

int main()
{
    cout << "Compiled successfully!!!!" << endl;

    EmptyClass obj1;
    cout << "Size of an empty class is: " << sizeof(EmptyClass) << endl;
    cout << "Size of an object created on top of an empty class is: " << sizeof(obj1) << endl;

    DemoClass obj2;
    cout << "Size of a non-empty class is: " << sizeof(DemoClass) << endl;
    cout << "Size of a non-empty object that create on top of a non-empty class is: " << sizeof(obj2) << endl;


    return 0;
}

