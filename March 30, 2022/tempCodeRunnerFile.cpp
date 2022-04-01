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