// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int val = 50 - x;
        int new_val = y + 5;

        if (x + y * 2 > 50)
        {
            cout << "No" << endl;
        } else {
            if (x + y * 2 == 50)
            {
                cout << "Yes" << endl;
            } else {
                if (val >= y * 2 && val <= new_val * 2)
                {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
    
}

// https://www.codechef.com/START202D/problems/TWOROLL