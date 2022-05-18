//! Copy constructor
//* find the factorial from a user input number and copy it to another object using copy constructor. In which constructor the current factorial value was copied have to predict the next number

//! your first constructor input is 5, so calculate the factorial of 5! and copy this to another object using copy constructor and find the next number factorial means 6!

//! Problem solving 06
#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;

class copyConstructorFactorial
{
    int n;

public:
    copyConstructorFactorial(int n)
    {
        this->n = n;
    }

    int calculate()
    {
        int factorial = 1;
        for (int i = 2; i <= this->n; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Initializing value\n";
    Sleep(500);
    cout << "....\n";
    Sleep(200);
    cout << "......\n";
    Sleep(100);
    cout << ".........\n";
    cout << "Done!!!\n";

    copyConstructorFactorial obj1(num);
    copyConstructorFactorial obj2 = obj1; //* using copy constructor

    cout << "Before copying: " << num << "! = " << obj1.calculate() << endl;
    cout << "After copying: " << num << "! = " << obj2.calculate() * (num + 1) << endl;

    return 0;
}

//! Problem solving 07: Program to find simple interest using constructor overloading
#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;

class simpleInterest
{
    float si, p, t, r;

public:
    simpleInterest()
    {
        cout << "Initializing Values to data members\n";
        Sleep(1200);
        cout << "-------------" << endl;
    }

    void displayResult(float p, float t, float r)
    {
        this->p = p, this->t = t, this->r = r;
        Sleep(1200);
        cout << "--------" << endl;
        Sleep(500);
        cout << "----" << endl;
        this->si = (this->p * this->t * this->r) / 100;
        cout << "Simple interest is: " << this->si << endl;
    }
};

int main()
{
    float x, y, z;
    cout << "Enter p, t and r respectively: ";
    cin >> x >> y >> z;
    simpleInterest obj1;
    obj1.displayResult(x, y, z);

    return 0;
}

//* Demonstrating a destructor

#include <bits/stdc++.h>
using namespace std;

class num
{
public:
    num();
    ~num();
};

num ::num()
{
}

num ::~num()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n < 15)
    {
        cout << "You've entered number less than 15" << endl;
        return;
    }
    cout << "You've entered number greater than 15\n";
}

int main()
{
    num obj1;

    return 0;
}

//* Sleeping test
#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;

int main()
{
    for (int i = 2000; i >= 100; i -= 200, Sleep(i), cout << "Test\n");

    return 0;
}

