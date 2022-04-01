// #include <bits/stdc++.h>
// using namespace std;
// #define SIZE 100

// struct stack {
//     // int size;
//     int top;
//     int* arr;
// };

// int main()
// {

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    int ask_for;
    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        if (n > 0 && n <= 10)
        {
            arr[i] = n;
        }
    }

    cin >> ask_for;
    int count = 0;
    if (ask_for > 0 && ask_for <= 10)
    {
        int i = 0;
        while (i != 3)
        {
            if (arr[i] == ask_for)
            {
                count++;
            }
            i++;
        }
    }
    if (count == 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}

/*
! https://www.codechef.com/problems/CRICUP
* model-solution: https://p.ip.fi/5ERK
*/

#include <bits/stdc++.h>
using namespace std;

void cup_final() {
    int x, y, d;
    cin >> x >> y >> d;
    int difference = (x > y) ? (x - y) : (y - x);
    if(difference <= d) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t != 0) {
        cup_final();
        t--;
    }
    return 0;
}


