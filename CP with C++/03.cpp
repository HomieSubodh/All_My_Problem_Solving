#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    if ((x && y) > 0 && (x && y) <= 2000)
    {
        if (x <= y + .5 && x % 5 == 0)
        {
            cout << float(y - x - .5) << endl;
        }
        else
        {
            cout << (float)y << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
