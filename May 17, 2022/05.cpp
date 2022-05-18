//* friend function
#include <bits/stdc++.h>
using namespace std;

class Box
{
    int length;

public:
    Box(int length)
    {
        this->length = length;
    }

    //* declaring a friend function
    friend void display(Box);
};

void display(Box b)
{
    cout << "Length is: " << b.length << " cm" << endl;
}

int main()
{
    int l;
    cout << "Enter length: ";
    cin >> l;
    Box obj1(l);
    display(obj1);

    return 0;
}

//! Proble solving 08: Add two members of two different classes using the friend function.
#include <bits/stdc++.h>
using namespace std;

/* Forward declaration of classess */
class firstClass;
class secondClass;

class firstClass
{
    int a;

public:
    friend void add(firstClass &, secondClass &);
};

class secondClass
{
    int b;

public:
    friend void add(firstClass &, secondClass &);
};

void add(firstClass &A, secondClass &B)
{
    cout << "Enter values: ";
    cin >> A.a >> B.b;
    cout << "Sum is: " << A.a + B.b << endl;
}

int main()
{
    firstClass X;
    secondClass Y;
    add(X, Y);

    return 0;
}

//* Friend class
#include <bits/stdc++.h>
using namespace std;

class A
{
    int value;

public:
    A(int value)
    {
        this->value = value;
    }
    friend class B;
};

class B
{
public:
    B(A &a)
    {
        cout << "The value of data member x of class A is: " << a.value << endl;
    }
};

int main()
{
    A obj1(502);
    B obj2(obj1);

    return 0;
}

//! Problem solving 09: C++ program to reverse a Number using class.
#include <bits/stdc++.h>
using namespace std;

class reverseNumber
{
    int n;

public:
    reverseNumber(int n)
    {
        this->n = n;
        cout << "You entered number = " << n << " for reversing it" << endl;
    }

    void display();
};

void reverseNumber ::display()
{
    int rev = 0, rem = 0;
    while (this->n != 0)
    {
        rem = this->n % 10;
        rev = rev * 10 + rem;
        this->n /= 10;
    }
    cout << "Reverse number is: " << rev << endl;
}

int main()
{
    reverseNumber obj1(123);
    obj1.display();

    return 0;
}