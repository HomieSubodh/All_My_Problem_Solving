/*
* problem link: https://www.codechef.com/problems/CHEFRACES
! Author: Subodh Chandra Shil
*/

#include <bits/stdc++.h>
using namespace std;

void chef__races()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    cout << ((a != x and a != y) + (b != x and b != y)) << endl;
}

int main()
{
    int input;
    cin >> input;
    while (input--)
    {
        chef__races();
    }
    return 0;
}
