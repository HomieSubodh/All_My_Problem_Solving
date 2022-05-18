#include <bits/stdc++.h>
using namespace std;

class Room
{
    float length, breadth, height;

public:
    // default constructor
    Room()
    {
        cout << "This is an empty constructor" << endl;
    }
    // parameterized constructor 1
    Room(float length, float breadth)
    {
        cout << "Area is: " << length * breadth << endl;
    }
    // parameterized constructor 2
    Room(float length, float breadth, float height)
    {
        cout << "Volume is: " << length * height * breadth << endl;
    }
    Room(int x);
};

Room :: Room(int x)
{
    cout << "x is: " << x << endl;
}

int main()
{
    Room();
    Room(420);
    Room(10, 20);
    Room(10, 20, 30);

    return 0;
}