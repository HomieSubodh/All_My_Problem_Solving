/*
 * While loop trick
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, j = 0;
    //! Print in reverse from 5 to 1
    while (a--)
    {
        cout << a + 1 << endl;
    }
    cout << "--------------------------------" << endl;
    //! Print straight way from 1 to 5
    while (j++ != 5)
    {
        cout << j << endl;
    }
    return 0;
}

//* 'or' 'and' keyword
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    if (a > 0 or a < 10)
    {
        cout << "or keyword works" << endl;
    }
    if (a > 0 and a > 2)
    {
        cout << "and keyword works" << endl;
    }
    return 0;
}

