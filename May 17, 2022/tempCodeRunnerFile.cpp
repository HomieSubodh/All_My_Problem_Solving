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