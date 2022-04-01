#include <iostream>
using namespace std;

int main()
{
    int w;
    if (1 <= w <= 100)
    {
        // cout << "Input: ";
        cin >> w;
        if (w > 2 && w % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
