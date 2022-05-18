//! Inline function in classes
#include <bits/stdc++.h>
using namespace std;

class inlineDemo
{
    int s;

public:
    inlineDemo(int s)
    {
        this->s = s;
    }

    inline void display();
};

inline void inlineDemo ::display()
{
    cout << "Cube of the input number is: " << pow(this->s, 3) << endl;
}

int main()
{
    inlineDemo obj1(10);
    obj1.display();

    return 0;
}