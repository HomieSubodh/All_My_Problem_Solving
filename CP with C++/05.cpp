/*
    * Problem source: https://leetcode.com/problems/two-sum/
    ! Author: Subodh Chandra Shil
    ! Time complexity: O(n^2)
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    //* input --> size of the array
    int size, target;
    cout << "Input the size of the array: ";
    cin >> size;
    int array[size];
    //* input --> array item
    cout << "Input element in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    //* input --> target
    cout << "Input the target: ";
    cin >> target;
    //! approach the result in any complexity
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (target == array[i] + array[j])
            {
                if (target == array[i] + array[j])
                {
                    cout << "[" << i << "," << j << "]" << endl;
                }
                break;
            }
        }
    }
}

int main()
{
    solve();
    return 0;
}