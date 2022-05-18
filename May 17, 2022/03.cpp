//* Link: https://stackoverflow.com/questions/26568200/what-is-special-about-numbers-starting-with-zero

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x = 010; // using 0 before a number
    //* means octal number system, in octal representation there are only 8 possible digits from 0 to 7 that are used for creating any number.
    //* so, 8 and 9 will not going to consider as octal number. that's why we're unable to use 8 and 9
    cout << x;
    // float y = 08, float z = 09; //! will show error
    // cout << y << z << endl; //! will show error

    return 0;
}

//! "protected" access modifier
#include <bits/stdc++.h>
using namespace std;

class parentClass
{
protected:
    float a;
    string b;
};

class childClass : public parentClass
{
public:
    void display(float a, string x)
    {
        this->a = a;
        cout << "Product price is: " << this->a << endl;
        this->b = x;
        cout << "Tax is: " << this->b << endl;
    }
};

int main()
{
    childClass obj1;
    obj1.display(2100, "5%");

    return 0;
}

//! Destructor
#include <bits/stdc++.h>
using namespace std;

class destructorClass
{
public:
    ~destructorClass()
    {
        cout << "We have destroyed your object" << endl;
    }
};

int main()
{
    destructorClass obj1;

    return 0;
}

//! Problem solving 01: Write a program by creating a constructor which takes one input parameter

#include <bits/stdc++.h>
using namespace std;

class demoClass
{
public:
    demoClass(int input)
    {
        cout << "The parameter has taken " << input
             << " as value" << endl;
    }
};

int main()
{
    demoClass obj1(10);

    return 0;
}

//! Problem solving 02:Program to demonstrate how a constructor is use to initialize data member of an object.

//* way 01
#include <bits/stdc++.h>
using namespace std;

class def
{
    int a;

public:
    def(int x)
    {
        a = x;
        cout << a;
    }
};

int main()
{
    def obj1 = 55;

    return 0;
}

//* way 02
#include <bits/stdc++.h>
using namespace std;

class abc
{
    int a;

public:
    abc(int a);
};

abc ::abc(int a)
{
    this->a = a;
    cout << this->a << endl;
}

int main()
{
    abc andriod_toto_company(100);

    return 0;
}

//! Problem solving 03: A Program to find the sum of N natural numbers using a class constructor.
#include <bits/stdc++.h>
using namespace std;

class sumOfN
{
    int sum = 0, n;

public:
    sumOfN()
    {
        cout << "Enter input sum limit: ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            this->sum += i;
        }
        cout << "The sum is: " << this->sum << endl;
    }
};

int main()
{
    sumOfN sum1;

    return 0;
}

//! Problem solving 04: find Max
#include <bits/stdc++.h>
using namespace std;

class find_MAX
{
    float x1, x2;

public:
    find_MAX()
    {
        cout << "Enter two values to find which is bigger: ";
        cin >> x1 >> x2;

        //* Corner case 01: check if both values are same or not
        if (x1 == x2)
        {
            cout << "Values are similar" << endl;
            return;
        }
        if (x1 > x2)
        {
            cout << x1 << " is bigger than " << x2 << endl;
        }
        else if (x2 > x1)
        {
            cout << x2 << " is bigger than " << x1 << endl;
        }
    }
};

int main()
{
    find_MAX obj1;

    return 0;
}

/*
 * General: Invoking constructors
 * In three way we can initialize a constructor
 ! Implicit Call -> values passed directly by object brackets
 ! Explicit Call ->
 ! Initialize at the time of declaration with "=" operator
*/

//! Make a program that will show a user input value and twofold of that user input value. Use inheritance to demonstrate the solve process
#include <bits/stdc++.h>
using namespace std;

class parentClass
{
protected:
    int x, y;
    void method(int x)
    {
        this->x = x;
        this->y = this->x * 2;
    }
};

class derivedClass : public parentClass
{
public:
    derivedClass()
    {
        int a;
        cout << "Enter value = ";
        cin >> a;
        method(a);
        cout << "x is: " << this->x << " and y = 2*x is: " << this->y << endl;
    }
};

int main()
{
    derivedClass obj1;

    return 0;
}

//! Invoking constrcutor by implicitly calling the constructor
#include <bits/stdc++.h>
using namespace std;

class implicitInvoke
{
public:
    implicitInvoke(int x, int y);
};

implicitInvoke ::implicitInvoke(int x, int y)
{
    cout << x << " " << y << endl;
}

int main()
{
    implicitInvoke obj1(10, 20);

    return 0;
}

//! Invoking constrcutor by explicitly calling the constructor
#include <bits/stdc++.h>
using namespace std;

class explicitInvoke
{
    int x, y;

public:
    explicitInvoke(int x, int y)
    {
        this->x = x;
        this->y = y;
        cout << "x: " << this->x << " y: " << this->y << endl;
    }
};

int main()
{
    explicitInvoke obj1 = explicitInvoke(10, 20);

    return 0;
}

//! Problem solving 05: Calculate prime number creating class. Use a constructor for initialize a private member, a function for calculation and another function to show the result.
#include <bits/stdc++.h>
#include "Windows.h"
using namespace std;

class primeNumberCheck
{
    int n;

public:
    primeNumberCheck(int n)
    {
        cout << "Initializing your argument value to the private member\n";
        Sleep(2000);
        cout << ".......\n";
        Sleep(1300);
        cout << ".....\n";
        Sleep(500);
        cout << "..\n";
        Sleep(300);
        cout << "Finished\n";
        cout << "Your input is: " << n << endl;
        this->n = n;
    }

    bool isPrime()
    {
        for (int i = 2; i < this->n / 2; i++)
        {
            if (this->n % 2 == 0)
                return false;
        }
        return true;
    }

    void display()
    {
        //! Corner case 01: check if the number is negative, 0 or 1
        if (this->n <= 1)
        {
            cout << "Negative number, 0 and 1 can't be prime\nIn case, you've put ";
            (this->n < 0) ? cout << " a negative number " << this->n : cout << "You have put value " << this->n << " that is not prime" << endl;
            return;
        }

        (isPrime())
            ? cout << "Your input " << this->n << " is a prime number\n"
            : cout << "Your input " << this->n << " isn't a prime number" << endl;
    }
};

int main()
{
    primeNumberCheck obj1(5);
    obj1.display();

    return 0;
}